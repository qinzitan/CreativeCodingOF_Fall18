#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofEnableSmoothing();
    ofSetCircleResolution(50);
    
    for(int i = 0; i< TOTALNUM; i++){
        pos[i].set(ofRandom(0,ofGetWindowWidth()),
            ofRandom(0,ofGetWindowHeight())
            );
        vel[i].set(ofRandom(-10,10),
            ofRandom(-10,10)
            );
        radius[i] = ofRandom(5,20);
        color[i] = ofRandom(0xFFFFFF);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i < TOTALNUM; i++){
        pos[i] += vel[i];
        //right
        if(pos[i].x > ofGetWindowWidth()-radius[i]){
            pos[i].x = ofGetWindowWidth() - radius[i];
            vel[i].x *= -1;
        }
        
        //left
        if(pos[i].x < radius[i]){
            pos[i].x = radius[i];
            vel[i].x *= -1;
        }
        
        //bottom
        if(pos[i].y > ofGetWindowHeight()-radius[i]){
            pos[i].y = ofGetWindowHeight() - radius[i];
            vel[i].y *= -1;
        }
        
        //top
        if(pos[i].y < radius[i]){
            pos[i].y = radius[i];
            vel[i].y *= -1;
        }
        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i < TOTALNUM; i++){
        ofSetHexColor(color[i]);
        ofDrawCircle(pos[i], radius[i]);
    }
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
