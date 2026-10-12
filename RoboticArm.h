#ifndef ROBOTICARM_H
#define ROBOTICARM_H

class RoboticArm{
private:
	double x, y, z;
	bool sujeta;
public:
	RoboticArm();
	double getx();
	double gety();
	double getz();
	bool getsujeta();
	void grab();
	void release();
	double move(double x, double y, double z);
};
#endif
