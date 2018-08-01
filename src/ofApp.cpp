#include "ofApp.h"
#include "flickeringSquare.hpp"
#define SQRS 10000

float xPos;
float yPos;
float size;
Flicker flkr[SQRS];


//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(radius.setup("Alpha",5,10,255));
    ofxFloatSlider();
    
    ofBackground(0, 0, 0);
    for(int i = 0; i<SQRS; i++){
    flkr[i].setup();
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i<SQRS; i++){
    flkr[i].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    for(int i = 0; i<SQRS; i++){
    flkr[i].draw(radius);
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
