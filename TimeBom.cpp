// TimeBom.cpp : Defines the entry point for the application.
//

#include "TimeBom.h"

void loop(int offset, int run, int fps) {
	int c = run;
	int loop = 0;
	float rate = 1 / fps;
	while (c == 1) {
		Sleep(rate);
		loop++;
		std::cout << "frame"; //should be removed in end
		if (loop > (fps - 1)) {
			c = 2; //stops code
		}
	}
}

//calculates screens size
int pixf(int sx, int sy) {
	int r = sx * sy;
	return r;
}

// main function lol
//Wow... really?
int main() {
//calculates screens size
int pixf(int sx, int sy) {
	int r = sx * sy;
	return r;
}

// main function lol
int main()
{
	std::cout << "Hello CList!" << std::endl;

	while (1 == 1) {
		loop(1, 1, fps); //should be fast enough.
	}
	return 0;
};