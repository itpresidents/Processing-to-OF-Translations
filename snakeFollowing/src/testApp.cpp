#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
    ofSetWindowShape(800, 600);
    ofSetBackgroundColor(250, 240, 230);
    
    //Initialize the elements of the vector
    for (int i=0;i<50; i++) {
        posX.push_back(0);
        posY.push_back(0);
    
    }
}

//--------------------------------------------------------------
void testApp::update(){
    //shift positions and update to folow your mouse location
    
    for (int i=0; i< posX.size()-1; i++){
        posX[i]=posX[i+1];
        posY[i]=posY[i+1];
    }
    
    posX[posX.size()-1]=mouseX;
    posY[posY.size()-1]=mouseY;

}

//--------------------------------------------------------------
void testApp::draw(){
    
    //draw every element of the vector
    for (int i=0; i<posX.size(); i++){
        ofFill();
        ofEnableAlphaBlending();
        ofSetColor(255, 0, 0, i);
        ofEnableSmoothing();
        ofEllipse(posX[i], posY[i], i, i); 
        ofDisableAlphaBlending();
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