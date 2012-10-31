#pragma once

#define XSPACING 8
#define MAXWAVES 4

#include "ofMain.h"



/*
int xspacing = 8;   // How far apart should each horizontal location be spaced
int maxwaves = 4;   // total # of waves to add together
*/

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
		
	int w; 
	
	float theta;
	float amplitude [MAXWAVES];   
	float dx [MAXWAVES];          
    vector <float> yvalues; //since we don't know how big this array will be when we declare it, we'll just use a vector
	
	//in OF we declare our functions in our .h file too. 
	void calcWave(); 
	void renderWave(); 
};
