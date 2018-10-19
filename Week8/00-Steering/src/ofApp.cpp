#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    ofEnableSmoothing();
    
    vehicle.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
    vehicle.steeringForce(ofPoint(mouseX, mouseY));
    vehicle.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    vehicle.draw();
}
