//
//  Particle.cpp
//  00-EasingAttractor
//
//  Created by Qinzi Tan on 10/5/18.
//

#include "Particle.hpp"
void Particle::init(){
    pos.set(ofRandom(ofGetWindowWidth()), ofRandom(ofGetWindowHeight()));
    
    
    float velMin = 0.0001;
    float velMax = 0.0005;
    float randomVel = ofRandom(velMin, velMax);
    vel.set(randomVel, randomVel);
}


void Particle::updateParticle(){
    
}

void Particle::drawParticle(){
    ofSetColor(255);
    ofDrawCircle(pos, 1);
}







