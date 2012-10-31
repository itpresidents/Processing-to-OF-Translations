#include "testApp.h"

/**
 * This is a translation from the Processing example sketch:
 * Additive Wave
 * by Daniel Shiffman. 
 * 
 * Create a more complex wave by adding two waves together. 
 * For Dan's original notes, see the attached Processing sketch.
 * (Lia Martinez)
 */


//--------------------------------------------------------------
void testApp::setup(){
	
	ofSetWindowShape(640, 360); //size()
	ofSetFrameRate(30); //processing default frame rate
	ofBackground(0);
	
	theta = 0.0;
	// colorMode(RGB, 255, 255, 255, 100); //this has no equivalent in OF, so we'll just cap the alpha value at 100 later. 
	w = ofGetWidth() + 16;
	
	for (int i = 0; i < MAXWAVES; i++) {
		amplitude[i] = ofRandom(10,30);
		float period = ofRandom(100,300); // How many pixels before the wave repeats
		dx[i] = (TWO_PI / period) * XSPACING;
	}
	
	//yvalues = new float[w/xspacing];
	for (int i = 0; i < w/XSPACING; i++) {
		float f; 
		yvalues.push_back(f); 
	}
}

//--------------------------------------------------------------
void testApp::update(){
	calcWave(); //this is where all the calculations happen, so we place it in update
}

//--------------------------------------------------------------
void testApp::draw(){
	
	renderWave(); //this has all the drawing bits, so we put it in draw!
}

//--------------------------------------------------------------
void testApp::calcWave() {
	
	theta += 0.02;
	
	for (int i = 0; i < yvalues.size(); i++) { //size() instead of length, because we are using a vector (similar to a processing arrayList)
		yvalues[i] = 0;
	}
	
	for (int j = 0; j < MAXWAVES; j++) {
		float x = theta;
		for (int i = 0; i < yvalues.size(); i++) {
			// Every other wave is cosine instead of sine
			if (j % 2 == 0)  yvalues[i] += sin(x)*amplitude[j];
			else yvalues[i] += cos(x)*amplitude[j];
			x+=dx[j];
		}
	}
}

//--------------------------------------------------------------
void testApp::renderWave() {
	
	ofFill(); //instead of processing noStroke(); 
	ofSetColor (255, 127.5); //fill(255,50); since we can't alter the maximum limit on alpha in colorMode(), we'll just make alpha half of 255, like 50 is half of 100. 
							 //ellipseMode(CENTER);
							 //OF has circles centered on your x,y by default
	
	ofEnableAlphaBlending(); //in OF, we need to enable/ disable alpha blending if you are using anything with transparency. 
	
	for (int x = 0; x < yvalues.size(); x++) {
		//ellipse(x*xspacing,width/2+yvalues[x],16,16);
		//ofCircle is (x, y, radius)
		ofCircle (x*XSPACING, ofGetWidth()/2 + yvalues[x], 8); 
	}
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