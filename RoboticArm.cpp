#include <RoboticArm.h>
using namespace std;

RoboticArm::RoboticArm(){
		x = 0.0;
		y = 0.0;
		z = 0.0;
		sujeta = false;
	}
double RoboticArm::getx(){
return x;
}
double RoboticArm::gety(){
return y;
}
double RoboticArm::getz(){
return z;
}
bool RoboticArm::getsujeta(){
return sujeta;
}
void RoboticArm::grab(){	
	sujeta = true;
}
void RoboticArm::release(){
	sujeta = false;
}
double RoboticArm::move(double x, double y, double z){
	this->x = x;
	this->y = y;
	this->z = z;
	return 0;
}

