#include <cmath>

double positionUnderGravity(double v,double t){
  return -0.5 * 9.8 * t * t + v * t;
}
void positionUnderGravityByRef(double v,double t, double& y){
  y = -0.5 * 9.8 * t * t + v * t;
}
void positionUnderCircularMotion(double t,double& x, double& y){
  x = 20 + 10 * cos(t);
  y = 20 + 10 * sin(t);
}
