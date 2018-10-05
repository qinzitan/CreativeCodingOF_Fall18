#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofEnableSmoothing();
    ofSetCircleResolution(50);
    
    for(int i = 0; i< TOTALNUM; i++){
        Particle p;
        p.init();
        particles.push_back(p);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i<particles.size();i++){
        particles[i].drawParticle();
    }
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}
