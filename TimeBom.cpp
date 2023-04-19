// TimeBom.cpp : Defines the entry point for the application.
//

#include "TimeBom.h"

class TB_ScenePreparation {
public:
	int find_dir() {
		std::cout << ""; // placeholder
	}
};

class TB_Save {
public:
	void save() {
		std::cout << ""; //Placeholder
	}
public:
	std::string load() {
		std::cout << ""; //placeholder
	}
};

class TB_Render {
public:
	int optimize_scene() {
		// Decides where and how to draw, starts with poly's, then draws finer detail
		std::cout << ""; // Placeholder... surprise!
	}
public:
	int draw_effects(std::string ef) { //Anti-alaising, RTX, etx;
		std::cout << "";
	}
};

class TB_Logic {
public:
	void tick() {
		std::cout << "Placeholder" << std::endl;
		//this controls AI, as well as frame based events
	}
	void biai() {
		std::cout << ""; //placeholde
	}
	class TB_AI {
	public:
		void tick() {
			std::cout << ""; //hmm.. i wonder what this is. Placeholder, maybe?
		};
	};
};

void loop(int offset /* Not sure about this */, int run, int fps) {
	Logic call;
	// not sure what this is
	int c = run;
	int loop = 0;
	// I'm assuming this is what you meant???
	float rate = 1 / fps;
	while (c == 1) {
		call.tick();
		std::this_thread::sleep_for(std::chrono::milliseconds(rate));
		loop++;
		if (loop > (fps - 1) {
			c = 2; //stops code
		}
	}
}

// What does this do???
// *touches*
// *BOOM*
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
