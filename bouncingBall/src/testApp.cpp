#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofSetWindowShape(200, 200); //size()
	ofBackground(255); //background is drawn in setup
	ofSetFrameRate(60); //processing default frame rate

	x = 0;
	speed = 1;

}

//--------------------------------------------------------------
void testApp::update(){
	
	// Add the current speed to the x location.
	x = x + speed;
	
	// Remember, || means "or."
	//ofGetWidth() instead of "width"
	if ((x > ofGetWidth()) || (x < 0)) {
		// If the object reaches either edge, multiply speed by -1 to turn it around.
		speed = speed * -1;
	}
	

}

//--------------------------------------------------------------
void testApp::draw(){
	
	// Display circle at x location

	ofFill(); 
	ofSetColor(175);
	ofCircle(x,100,32/2); //ellipse is (xloc, yloc, diameter)
	
	ofNoFill(); 
	ofSetColor(0);
	ofCircle(x,100,32/2);


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