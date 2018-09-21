#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofEnableSmoothing();
    ofSetCircleResolution(50);
    
    //SUN
 sunPos.set(ofGetWindowWidth()/2,
                  ofGetWindowHeight()/2);
    
    //Earth
    earthPos.set(0,0);
    earthSize = 20;
    radiusOfEarthMovement = 300;
    
    //Moon
    moonPos.set(0,0);
    moonSize = 5;
    radiusOfMoonMovement = earthSize + 10;
    
    //angle
    angle = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //earth movement
    earthPos.x = sunPos.x + cos(angle) * radiusOfEarthMovement;
    earthPos.y = sunPos.y + sin(angle) * radiusOfEarthMovement;
    
    //moon movement
//    ofPoint moonShouldBeOrbitingAroundThis;
//    moonShouldBeOrbitingAroundThis.set(earthPos.x, earthPos.y);
//
    
    moonPos.x = earthPos.x + cos(-(angle+30)) * radiusOfMoonMovement;
    moonPos.y = earthPos.y + sin(-(angle+30)) * radiusOfMoonMovement;
    
    
    //update angle by 1 degree per frame
    angle += ofDegToRad(1);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    
    //Draw Earth
    ofDrawCircle(earthPos, earthSize);
    
    //Draw Moon
    ofDrawCircle(moonPos, moonSize);
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
