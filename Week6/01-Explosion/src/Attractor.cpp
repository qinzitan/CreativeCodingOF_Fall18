//
//  Attractor.cpp
//  01-Explosion
//
//  Created by Qinzi Tan on 10/5/18.
//

#include "Attractor.hpp"

//--------------------------------------------------------------
void Attractor::setup(ofPoint _pos, float _radius, float _angle, float _vel){
    
    pos = _pos;
    radius = _radius;
    angle = _angle;
    vel = _vel;
    
}

//--------------------------------------------------------------
void Attractor::update(float _updatedRadius){
   
    radius = _updatedRadius;
    angle += vel;
    
    float x = radius * cos(angle);
    float y = radius * sin(angle);
    
    pos.set(ofGetWindowWidth()/2+x, ofGetWindowHeight()/2+y);
}

//--------------------------------------------------------------
void Attractor::draw(){
    ofSetColor(255, 0, 0);
    ofDrawCircle(pos, 2);
}
