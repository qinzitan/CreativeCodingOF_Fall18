#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    
    origin = ofPoint(0,0);
    dest = ofPoint (ofGetWindowWidth(), ofGetWindowHeight());
    objectPos = origin;
    
    inputPct = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    //achieve 0.5% more of the
    //whole journey per frame
    inputPct += 0.005;
    if(inputPct > 1) inputPct = 0;
    
    
    //    objectPos = (1-pct) * origin +
    //    pct * dest;
    
    
    //=========powf(float1, float2)=========
    //float1: base, x
    //float2: exponent
    
    //eg. float twoToTheFifthPower = powf(2,5);
    //** behind screen calculation: 2^5 = 2 * 2 * 2 * 2 * 2 = 32 **
    //twoToTheFifthPower = 32;
    //=========powf(float1, float2)=========
    
    //the y axis of math graph
    float outputPct = powf(inputPct,8);
    objectPos = (1-outputPct) * origin + outputPct * dest;

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawCircle(objectPos, 30);
}
