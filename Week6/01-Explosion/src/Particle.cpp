//
//  Particle.cpp
//  01-Explosion
//
//  Created by Qinzi Tan on 10/12/18.
//

#include "Particle.hpp"
void Particle::setup(){
    
    pos.set(ofGetWindowWidth()/2,ofGetWindowHeight()/2);
    
    float randomVel = ofRandom(0.0000005, 0.0001);
    vel.set(randomVel,randomVel);
    
    brightness = ofMap(randomVel,0.0000005, 0.0001, 90, 255);
    size = ofMap(randomVel,0.0000005, 0.0001, 0,2);
}

//--------------------------------------------------------------
void Particle::update(ofPoint _attractor){
    
    pct += vel;
    ofPoint dest = _attractor;
    
    pos = (ofPoint(1,1)-pct) * pos + pct * dest;
}

//--------------------------------------------------------------
void Particle::draw(){
    ofSetColor(brightness);
    ofDrawCircle(pos, size);
}
