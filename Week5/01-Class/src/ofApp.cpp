#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetCircleResolution(50);
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i<particles.size(); i++){
        particles[i].pos += particles[i].vel;
        
        float age = ofGetElapsedTimef() - particles[i].bornTime;
        
        particles[i].color.a = ofMap(age, 0, 1, 255, 0);
        
        if(age > 1){
            particles.erase(particles.begin() + i);
        }
        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i<particles.size(); i++){
        ofSetColor(particles[i].color);
        ofDrawCircle(particles[i].pos, particles[i].radius);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == ' '){

//        ofPoint point;
//        point = ofPoint(1,1);
//        pos.push_back(point);
        
        Particle p;
        
        p.radius = ofRandom(10,20);
        p.bornTime = ofGetElapsedTimef();
        p.pos.set(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
        p.vel.set(ofRandom(-10,10),ofRandom(-10,10));
        p.color.setHsb(ofRandom(255), 200, 200);
        
        particles.push_back(p);
    }
}






