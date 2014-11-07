#include <iostream>
#include <unistd.h>
#include <term.h>

const double gravity = 9.8;

double positionUnderGravity (double t, double v0);
void positionUnderGravityByRef (double t, double v0, double& y);
bool gotoxy(int column, int line);

int main() {

  int i = 0;
  double y;
  double v0 = 20;

  for (double t = 0; t <= 4.0; t += 0.1) {
    y = positionUnderGravity(t, v0);
    gotoxy(++i, y);
    std::cout << "o";
  }

  return 0;
}

double positionUnderGravity (double t, double v0) {
  return -0.5 * gravity * t * t + v0 * t;
}

void positionUnderGravityRef (double t, double v0, double& y) {
  y = -0.5 * gravity * t * t + v0 * t;
}

bool gotoxy( int column, int line ) {
  if (!cur_term) {
    int result;
    setupterm( NULL, STDOUT_FILENO, &result );
    if (result <= 0)
      return false;
  }
  putp( tparm( tigetstr( "cup" ), 40 - line, column, 0, 0, 0, 0, 0, 0, 0 ) );
  return true;
}
