#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    
    //Origin Position: top-left corner of the canvas
    origin = ofPoint(0,0);
    
    //Destination Position: bottom-right corner of the canvas
    dest = ofPoint (ofGetWindowWidth(), ofGetWindowHeight());
    
    //make sure
    objectPos = origin; //make sure
    
    pct = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //move 0.5% of the whole journey per frame
    pct += 0.005;
    
    //make sure the value of pct (percent) is less than 1
    //because we use it to describe the progress of a task
    //when starting the task: progress is 0% --> pct = 0
    //when the task is 28% done: progress is 28% --> pct = 0.28
    //when the task is 78.2840% done: progress is 78.2840% --> pct = 0.782840
    //when the task is completed: progress is 100% --> pct = 1
    if(pct > 1) pct = 0;
    
    //the magic PCT formula we explained in class ;)
    objectPos = (1-pct) * origin + pct * dest;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawCircle(objectPos, 30);
}

