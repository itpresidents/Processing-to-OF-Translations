#pragma once

#include "ofMain.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		ofSerial	serial;
	
	int bgcolor;           // Background color
	int fgcolor;           // Fill color
	int serialInArray [3];    // Where we'll put what we receive
	int serialCount;                 // A count of how many bytes we receive
	int xpos, ypos;                 // Starting position of the ball
	bool firstContact;       // Whether we've heard from the microcontroller
		
};
