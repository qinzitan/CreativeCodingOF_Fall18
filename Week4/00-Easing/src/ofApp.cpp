#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);
    ofEnableSmoothing();
    ofSetCircleResolution(50);
    
    //pos = ofPoint(0,0);
    objectPos.set(ofGetWindowWidth()/2,
            ofGetWindowHeight()/2);
    
    dest.set(0,0);
    
    pct = 0.02; //2%
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
//    //B: dest
//    //A: objectPos
//
//    //the remaining journey
//    ofPoint dist = dest - objectPos;
////    //dist.x = dest.x - objectPos.x;
////    //dist.y = dest.y - objectPos.y;
////
////
//    ofPoint distanceToMove = dist * pct;
////
//    objectPos += distanceToMove;
//    //objectPos = objectPos + distanceToMove;
    
    
    //objectPos = (1-pct) * origin + pct * dest;
    objectPos = (1-pct) * objectPos + pct * dest;
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(255);
    ofDrawCircle(objectPos, 30);
}


//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    dest.set(x,y);
}
