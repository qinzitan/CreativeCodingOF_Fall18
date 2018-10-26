//
//  Vehicle.cpp
//  00-Seek
//
//  Created by Qinzi Tan on 10/18/18.
//

#include "Vehicle.hpp"
//--------------------------------------------------------------
void Vehicle::setup(float _x, float _y){
    loc.set(_x, _y);
    vel.set(0, 0);
    acc.set(0, 0);
    
    r = 2;
    maxSpeed = ofRandom(2,4);
    maxForce = 0.1;
}

//--------------------------------------------------------------
void Vehicle::update(){
    vel += acc;
    vel.limit(maxSpeed);
    loc += vel;
    
    acc *= 0;
}

//---------------------    ----------------------------------------
void Vehicle::draw(){
    float angle = (float)atan2(vel.y, vel.x);
    float heading2D = ofRadToDeg(angle)+90;
    
    ofEnableAlphaBlending();
    ofSetColor(255,0,0);
    ofFill();
    ofPushMatrix();
    ofTranslate(loc.x, loc.y);
    ofRotateZDeg(heading2D);
    ofBeginShape();
    ofVertex(0, -r*2);
    ofVertex(-r, r*2);
    ofVertex(r, r*2);
    ofEndShape(true);
    ofPopMatrix();
    ofDisableAlphaBlending();
}

//--------------------------------------------------------------
void Vehicle::applyForce(ofPoint force){
    acc += force;
}
