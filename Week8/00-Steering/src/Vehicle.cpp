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
    
    maxSpeed = 2;
    maxForce = 0.1;
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
    
    //translate the origin to current location
    //of the vehicle
    ofTranslate(loc.x, loc.y);
    //rotate the canvas around the z axis
    ofRotateZDeg(heading2D);
    
    //draw vehicle
    ofDrawTriangle(0, -r*2, -r, r*2, r, r*2);
    
    ofPopMatrix();
    
}

//--------------------------------------------------------------
void Vehicle::applyForce(ofPoint f){
    acc += f;
}


//--------------------------------------------------------------
void Vehicle::steeringForce(ofPoint target){
    //calculate steering force
    ofPoint steer;
    
    ofPoint desired = target - loc;
    desired.normalize(); //get the direction
    //the fastest speed of the vehicle
    desired *= maxSpeed;

    steer = desired - vel;
    
    steer.limit(maxForce);
    
    //apply the force
    applyForce(steer);
}

//--------------------------------------------------------------
void Vehicle::steeringWithArriveForce(ofPoint target){
    
    ofPoint desired = target - loc;
    
    //distance between current location and target
    float dist = desired.length();
     desired.normalize();
    
    //parking zone radius: 100
    if(dist < 100){
        float m = ofMap(dist, 0, 100, 0, maxSpeed);
        desired *= m;
    } else {
        desired *= maxSpeed;
    }
    
    ofPoint steer;
    steer = desired - vel;
    steer.limit(maxForce);
    
    
    applyForce(steer);
}


