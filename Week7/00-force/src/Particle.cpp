//
//  Particle.cpp
//  00-force
//
//  Created by Qinzi Tan on 10/12/18.
//

#include "Particle.hpp"

//--------------------------------------------------------------
void Particle::setup(){
    mass = ofRandom(0.5, 1.5);
    loc.set(ofRandomWidth(), ofRandomHeight());
    vel.set(0, 0);
    acc.set(0, 0);
}

//--------------------------------------------------------------
void Particle::applyForce(ofPoint _f){
    acc += _f/mass;
}

//--------------------------------------------------------------
void Particle::addGravityForce(float _g){
    ofPoint gravity;
    gravity.set(0, _g * mass);
    
    applyForce(gravity);
}

//--------------------------------------------------------------
void Particle::addDragForce(float _c){
    float speed = vel.length();
    float dragMagnitude = _c * speed * speed;
    
    ofPoint dragDirection = vel;
    dragDirection *= -1;
    dragDirection.normalize();
    
    ofPoint dragForce = dragMagnitude * dragDirection;

    applyForce(dragForce);
}


//--------------------------------------------------------------
void Particle::update(){
    checkEdges();
    
    vel += acc;
    loc += vel;
    
    acc.set(0, 0);
}

//--------------------------------------------------------------
void Particle::draw(){
    ofSetColor(0, 200);
    ofDrawCircle(loc.x, loc.y, mass * 30);
}

//--------------------------------------------------------------
void Particle::checkEdges(){
    if(loc.x > ofGetWindowWidth()){
        loc.x = ofGetWindowWidth();
        vel.x *= -0.45;
    } else if(loc.x < 0){
        loc.x = 0;
        vel.x *= -0.45;
    }
    
    if(loc.y > ofGetWindowHeight()){
        loc.y = ofGetWindowHeight();
        vel.y *= -0.7;
    }
}

