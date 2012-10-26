#pragma once

#include "ofMain.h"
#include "Module.h"

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
		
		int unit;
		int count;
		vector<Module>mods; //In the processing sketch, this is written as "Module[] mods;". C++ won't allow you to declare an array without giving a size first. Since we don't yet know the size of the array, lets make it a vector instead of an array. A vector is like an arraylist in Processing. 

	
};
