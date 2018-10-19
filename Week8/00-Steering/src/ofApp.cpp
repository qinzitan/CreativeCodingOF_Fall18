#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    ofEnableSmoothing();
    
    vehicle.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
    vehicle.steeringWithArriveForce(ofPoint(mouseX, mouseY));
    vehicle.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    vehicle.draw();
}
