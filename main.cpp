#include <iostream>
#include "RoboticArm.h"
using namespace std;
int main(){
	RoboticArm robot;
	cout << "Posicion inicial del robot: (" << robot.getx() << "," << robot.gety() << "," << robot.getz() << ")" << endl; 
	cout << "Sujetando un objeto: " << (robot.getsujeta() ? "Si" : "No") << endl;
	robot.move(1.0, 2.0, 3.0);
	cout << "Posicion tras hacer el movimiento: (" << robot.getx() << "," << robot.gety() << "," << robot.getz() << ")" << endl;	
	robot.grab();
	cout << "Sujetando un objeto: " << (robot.getsujeta() ? "Si" : "No") << endl;
	return 0;
}
