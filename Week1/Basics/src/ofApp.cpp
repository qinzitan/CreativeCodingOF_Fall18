#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //Window size and shape.
    //ofSetWindowShape(20, 20);
    
    //Window's title
    //ofSetWindowTitle("Week 1");
    
    //Clear canvas automatically every frame? false - no
    ofSetBackgroundAuto(false);
    
    //background coloe
    ofBackground(0);
    
    //how smooth circles should be
    ofSetCircleResolution(60);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0, 0, 0);
    ofNoFill();
    ofDrawCircle(ofGetWindowWidth()/2, ofGetWindowHeight()/2, 200);
    
    ofSetColor(255);
    ofFill();
    ofDrawRectangle(40, 40, 40, 40);
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
