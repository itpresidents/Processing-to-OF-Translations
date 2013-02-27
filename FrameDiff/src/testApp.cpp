
/**
 * Based on the Processing sketch Frame Differencing
 * by Golan Levin.
 *
 * Quantify the amount of movement in the video frame using frame-differencing.
 */

#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	video.initGrabber(WIDTH, HEIGHT);
}

//--------------------------------------------------------------
void testApp::update(){
    video.update();

}

//--------------------------------------------------------------
void testApp::draw(){
	if(video.isFrameNew()){
		ofPixels pix = video.getPixelsRef();
		int movementSum = 0; // Amount of movement in the frame
		for (int y = 0; y < HEIGHT; y++) {
			for (int x = 0; x < WIDTH; x++) {
				ofColor currColor = pix.getColor(x, y);
				ofColor prevColor = previousFrame[x + y*WIDTH];
				
				//use bitshifting to make this faster
				// Extract the red, green, and blue components from current pixel
				int currR = currColor.r;
				int currG = currColor.g;
				int currB = currColor.b;
				// Extract red, green, and blue components from previous pixel
				int prevR = prevColor.r;
				int prevG = prevColor.g;
				int prevB = prevColor.b;
				// Compute the difference of the red, green, and blue values
				int diffR = abs(currR - prevR);
				int diffG = abs(currG - prevG);
				int diffB = abs(currB - prevB);
				
				// Add these differences to the running tally
				movementSum += diffR + diffG + diffB;
				// Render the difference image to the screen

				ofSetColor(diffR, diffG, diffB);
				ofRect(x, y, 2, 2);

				previousFrame[x + y*WIDTH] = currColor;
			}
		}
		
	}
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}