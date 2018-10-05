#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofEnableSmoothing();
    ofSetCircleResolution(50);
    
    radius = 100;
    
    for(int i = 0; i < SEGMENT; i++){
        
        // 360/SEGMENT - 90
        float angle = ofDegToRad((360/SEGMENT) * i);
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        
        Attractor a;
        a.setup(ofPoint(
                        ofGetWindowWidth()/2 + x, ofGetWindowHeight()/2 + y
                        ),
                radius,
                angle,
                0.01);
        attractors.push_back(a);
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0 ; i<attractors.size();i++){
        attractors[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0 ; i<attractors.size();i++){
        attractors[i].draw();
    }
}
