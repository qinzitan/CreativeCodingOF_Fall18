#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableSmoothing();
    ofSetCircleResolution(60);
    ofBackground(255);
    
    vf.setup();
    
    for(int i = 0; i<TOTALNUM; i++){
        Vehicle v;
        v.setup(ofRandomWidth(), ofRandomHeight());
        objects.push_back(v);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i<objects.size(); i++){
        objects[i].follow(vf);
        objects[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    vf.draw();
    
    for(int i = 0; i<objects.size(); i++){
        objects[i].draw();
    }
}
