// TimeBom.cpp : Defines the entry point for the application.
//

#include "TimeBom.h"

void loop(int offset /* Not sure about this */, int run, int fps) {
	// not sure what this is
	int c = run;
	int loop = 0;
	// I'm assuming this is what you meant???
	float rate = 1 / fps;
	while (c == 1) {
		std::this_thread::sleep_for(std::chrono::milliseconds(rate));
		loop++;
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
int main()
{
	std::cout << "Hello CList!" << std::endl;
	int x = 1920; //temp values, v
	int y = 1080; //temp values, should read from setting file
	int size = pixf(x, y);
	int fps = 60;
	loop(1, 1, fps); //should be fast enough.
	return 0;
};
