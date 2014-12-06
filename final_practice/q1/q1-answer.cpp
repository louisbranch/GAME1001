//#include <cmath>
#include <iostream>

void positionUnderGravityByRef(double v,double t, double& y);

int main () {
  double v;
  double t = 1;
  double p;

  std::cin >> v;

  positionUnderGravityByRef(v, t, p);

  std::cout << p << std::endl;

  return 0;
}

/*void positionUnderGravityByRef(double v,double t, double& y) {
	y = -0.5 * 9.8 * pow(t,2.0) + v * t;
}
*/
