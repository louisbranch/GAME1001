#include <cmath>
#include <iostream>
#include <string>
#include <unistd.h>
#include <term.h>
#include <curses.h>
#include <ctime>

const int asteroids_num = 100;
int xVal;
int yVal;

int arraysAsteroidsX[asteroids_num];
int arraysAsteroidsY[asteroids_num];

void setup();
void gotoxy(int, int);
void drawScene(char);
void keyInputf(unsigned char);

int main() {
  char ch;
  setup();
  do {
    drawScene('o');
    gotoxy(20, 10);
    std::cout << "+";
    ch = getch();
    //drawScene(' ');
    keyInputf(ch);
    std::cin.sync();
  } while (ch != 'Q' && ch != 'q');
  return 0;
}

void setup() {
  system("clear");
  srand(time(0));
  for (int i = 0; i < asteroids_num; i++) {
    arraysAsteroidsX[i] = (rand() % 40);
    arraysAsteroidsY[i] = (rand() % 20);
  }
}

void gotoxy(int x, int y) {
  if (!cur_term) {
    int result;
    setupterm( NULL, STDOUT_FILENO, &result );
  }
  putp( tparm( tigetstr( "cup" ), 20 - y, x, 0, 0, 0, 0, 0, 0, 0 ) );
}

void drawScene(char ch) {
  for (int i = 0; i < asteroids_num; i++) {
    int x = arraysAsteroidsX[i] - xVal;
    int y = arraysAsteroidsY[i] - yVal;
    gotoxy(x,y);
    std::cout << ch;
  }
}

void keyInputf(unsigned char key) {
  switch (key) {
    case 'w':
    case 'W':
      yVal++;
      break;
    case 'S':
    case 's':
      yVal--;
      break;
    case 'D':
    case 'd':
      xVal++;
    case 'A':
    case 'a':
      xVal--;
      break;
    case 27:
      exit(0);
      break;
    default:
      break;
  }
}
