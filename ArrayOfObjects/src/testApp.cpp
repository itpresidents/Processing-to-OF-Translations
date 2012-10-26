#include "testApp.h"

/*
 
 This is an OpenFrameworks translation of the Processing Example Sketch (in the built-in example folder) called "ArrayObjects".
 Lia Martinez
 
 */



//--------------------------------------------------------------
void testApp::setup(){
	
	
	ofSetWindowShape(640, 360); //size()
	ofSetFrameRate(60); //processing default frame rate
	ofBackground(0); //background() in OF, we put this in setup()
	ofFill(); // noStroke () 
	
	unit = 40; 
	int wideCount = ofGetWidth() / unit;
	int highCount = ofGetHeight() / unit;
	count = wideCount * highCount;

	//how you add values into a vector
	for (int y = 0; y < highCount; y++) {
		for (int x = 0; x < wideCount; x++) {
			Module m; //make a temporary Module
			mods.push_back(m); // add that to the vector
			mods[y*wideCount+x].setup(x*unit, y*unit, unit/2, unit/2, ofRandom(0.05, 0.8), unit); //use setup instead of the constructor
		}
	}
	
}

//--------------------------------------------------------------
void testApp::update(){
	
	//we move update to update()
	for (int i = 0; i < count; i++) {
			mods[i].update();
	}
}

//--------------------------------------------------------------
void testApp::draw(){
	
	//and leave draw in draw()! but otherwise, its exactly the same as processing. 
	for (int i = 0; i < count; i++) {

		mods[i].draw();
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