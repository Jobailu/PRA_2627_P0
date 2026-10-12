all: RoboticArm

RoboticArm: RoboticArm.o main.o
	g++ RoboticArm.o main.o -o RoboticArm

RoboticArm.o: RoboticArm.cpp RoboticArm.h
	g++ -c RoboticArm.cpp

main.o: main.cpp RoboticArm.h
	g++ -c main.cpp

clean: 
	rm -f *.o RoboticArm

test: all
	./RoboticArm
