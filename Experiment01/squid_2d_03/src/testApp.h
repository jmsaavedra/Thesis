#ifndef _TEST_APP
#define _TEST_APP


#include "Squid.h"
#include "perlin.h"
#include "ofMain.h"



class testApp : public ofBaseApp {

	public:
	
		void setup();
		void update();
		float getRads(float $val1, float $val2, float $mult, float $div);
		void draw();

		void keyPressed  (int key);
		void keyReleased (int key);

		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
	
		
	Squid squid;
	Squid squidB;
	Perlin * perPointer;
	
	float minNoise, maxNoise;
	float xLoc, yLoc, vx, vy;
	float counter;
};

#endif

