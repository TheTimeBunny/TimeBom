// TimeBom.cpp : Defines the entry point for the application.
//

#include "TimeBom.h"

class sceneprep {
public:
	int finddir() {
		std::cout << ""; //placeholder
	}
};

class Save {
public:
	void save() {
		std::cout << ""; //Placeholder
	}
public:
	std::string load() {
		std::cout << ""; //placeholder
	}
};

class Render {
public:
	int decidel() {
		//decides where and how to draw, starts with poly's, than draws finer detail
		std::cout << ""; //placeholder.. surprise!
	}
public:
	int effects(std::string ef) { //Anti-alaising, RTX, etx;
		std::cout << "";
	}
};

class Logic {
public:
	void tick() {
		std::cout << "Placeholder" << std::endl;
		//this controls AI, as well as frame based events
	}
};

void loop(int offput, int run) {
	Logic call;
	int c = run;
	int loop = 0;
	while (c == 1) {
		call.tick();
		_sleep(offput);
		loop++; 
		if (loop > 59) {
			c = 2; //stops code
		}
	}
}



int pixf(int sx, int sy) {
	int r = sx * sy;
	return r;
}

int main()
{
	std::cout << "Hello CList!" << std::endl; 
	int x = 1920; //temp values, v
	int y = 1080; //temp values, should read from setting file
	int size = pixf(x, y);
	loop(1, 1); //should be fast enough.
	return 0;
};
