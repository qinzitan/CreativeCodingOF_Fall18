#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //Creating the canvas
    
    //background color = 0 -- > black
    ofBackground(0);
    
    //Don't clear my canvas
    ofSetBackgroundAuto(false);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
//=============FOR LOOP==============
    //int i = 0;
    // check if i < 100;
    // yes --> call whatever code inside the for loop bracket
    // i += 1;/ i++; --> i = 1;
    
    // check if i < 100;
    // yes --> call whatever code inside the for loop bracket
    // i += 1;/ i++; --> i = 2;
    
    //...
    // no -->
//=============FOR LOOP==============
    
    
    //do this for 100 times/frame
    for(int i = 0; i<100; i++){
        //print the value of i in console
        cout << i << endl;
        
        float posX;
        //posX = ofGetWindowWidth()/2;
        posX = ofRandom(0,ofGetWindowWidth());
        
        float posY;
        //posX = ofGetWindowHeight()/2;
        posY = ofRandom(0,ofGetWindowHeight());
        
        //draw a dot at (posX, posY) of the screen
        //with radius of 1
        ofDrawCircle(posX , posY, 1);
    }
    
    cout<< "for loop ends." <<endl;
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
