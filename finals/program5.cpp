#include <string>
#include <iostream>
using namespace std;
/* Properly define the two structs pickup and player
necessary for making the main work*/

// Write your code here
struct pickUp {
  string name;
};

struct player {
  int numberOfPickups;
  pickUp pickups[3];
};

int main()
{

  pickUp weapon, health, bomb;
  weapon.name="weapon";
  health.name="health";
  bomb.name="bomb";

  player player;
  player.numberOfPickups=0;
  player.pickups[0]=weapon;
  player.numberOfPickups++;
  cout << player.pickups[0].name;


}
