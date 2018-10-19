//
//  Vehicle.cpp
//  00-Steering
//
//  Created by Qinzi Tan on 10/19/18.
//

#include "Vehicle.hpp"
//--------------------------------------------------------------
void Vehicle::setup(){
    loc.set(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    vel.set(0, 0);
    acc.set(0, 0);
    
    r = 3;
}

//--------------------------------------------------------------
void Vehicle::update(){
    vel += acc;
    loc += vel;
    
    acc *= 0;
}

//--------------------------------------------------------------
void Vehicle::draw(){
    float angle = atan2(vel.y, vel.x);
    float heading2D = ofRadToDeg(angle) + 90;
    
    ofSetColor(255, 0, 0);
    ofFill();
    
    ofPushMatrix();
    ofTranslate(loc.x, loc.y);
    ofRotateZDeg(heading2D);
    
    ofDrawTriangle(0, -r*2, -r, r*2, r, r*2);
    
    ofPopMatrix();
    
}

//--------------------------------------------------------------
void Vehicle::applyForce(ofPoint f){
    acc += f;
}


//--------------------------------------------------------------
void Vehicle::steeringForce(){
    //calculate steering force
    ofPoint steer;
    
    
    
    
    
    
    //apply the force
    applyForce(steer);
}

