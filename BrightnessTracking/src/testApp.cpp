#include "testApp.h"

/* this is a translation from the BrightnessTracking example in Processing. translation by Lia Martinez. For Golan's original comments, please see the original sketch (also attached in this folder)
*/
 
 /**
 * Brightness Tracking 
 * by Golan Levin. 
 *
 * Tracks the brightest pixel in a live video signal. 
 */



//--------------------------------------------------------------
void testApp::setup(){
	ofSetWindowShape(640, 480); //size() 
	ofSetFrameRate(30); //processing default frame rate
	ofBackground(0);
	
	video.initGrabber(ofGetWidth(),ofGetHeight());
	// same as:   video = new Capture(this, width, height);
				//video.start();  

	ofFill(); //noStroke();
}

//--------------------------------------------------------------
void testApp::update(){
	video.update();
	//same as:   if (video.available()) {
	//video.read();
}

//--------------------------------------------------------------
void testApp::draw(){
	
	ofSetColor(255); 
	video.draw(0, 0, ofGetWidth(),ofGetHeight());
	
	int brightestX = 0; 
    int brightestY = 0; 
    float brightestValue = 0; 
	
	ofPixels pix = video.getPixelsRef(); //this is the same as processing's loadPixels()
	
	//int index = 0; //we don't need the index because OF getColor() needs x,y values
    for (int y = 0; y < pix.getHeight(); y++) {
		for (int x = 0; x < pix.getWidth(); x++) {
			
			//int pixelValue = video.pixels[index];
			ofColor pixelValue = pix.getColor(x,y);

			//float pixelBrightness = brightness(pixelValue);
			float pixelBrightness = pixelValue.getBrightness();

			if (pixelBrightness > brightestValue) {
				brightestValue = pixelBrightness;
				brightestY = y;
				brightestX = x;
			}
			//index++; 
		}

    }

	ofSetColor(255, 204, 0, 128);
	//fill(255, 204, 0, 128);
	ofEnableAlphaBlending(); //whenever you want something to be transparent, you need to enable alpha blending
	ofCircle(brightestX, brightestY, 100);
	//ofCircle is (x,y, radius)
	//ellipse(brightestX, brightestY, 200, 200);
	ofDisableAlphaBlending();
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