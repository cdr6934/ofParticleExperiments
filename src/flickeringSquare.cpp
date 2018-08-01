//
//  flickeringSquare.cpp
//  animationTest
//
//  Created by Chris Ried on 7/10/18.
//


#include "flickeringSquare.hpp"
#include "ofMain.h"

Flicker::Flicker() {
    
}


void Flicker::setup(){
    xPos = ofGetWidth()/2;
    yPos = ofGetHeight()/2;
    size = ofRandom(10);
    
    
}

void Flicker::draw(float radius){
    ofRect(xPos,yPos,1,1);
    ofSetColor( 255,255,255, radius);
}

void Flicker::update(){
    /*
    xPos += ofRandom(10);
    yPos += ofRandom(10);
    size = ofRandom(10);
   */
    
    randn = (int)ofRandom(5);
    if(randn == 1) {  yPos += ofRandom(5); }
    if(randn == 2) {  xPos += ofRandom(5); }
    if(randn == 3) {  yPos -= ofRandom(5); }
    if(randn == 4) {  xPos -= ofRandom(5); }
    
    
    
    if(xPos >= ofGetWidth())
    {
        center();
    }
    
    if (xPos <= 0)
    {
        center();
        
    }
    
    if (yPos <= 0)
    {
        center();
    }
    
    if(yPos >= ofGetHeight())
    {
        center();
    }
}

void Flicker::center()
{
    xPos = ofGetWidth()/2;
    yPos = ofGetHeight()/2;
}
