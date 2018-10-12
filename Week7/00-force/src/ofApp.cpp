#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    ofEnableSmoothing();
    ofSetCircleResolution(50);
    
    for(int i = 0; i<TOTALNUM; i++){
        Particle p;
        p.setup();
        particles.push_back(p);
    }
    
    liquid.setup(0,
                 ofGetWindowHeight()/2, ofGetWindowWidth(), ofGetWindowHeight()/2, 0.09);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    ofPoint wind;
    wind.set(0.01, 0);
    
    for(int i = 0; i<TOTALNUM; i++){
        particles[i].applyForce(wind);
        particles[i].addGravityForce(0.08);
       
        
        particles[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i<TOTALNUM; i++){
        particles[i].draw();
    }
}
