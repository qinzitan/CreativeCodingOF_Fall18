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
    
    activated = false;
    
    brightness = 70;
}


void Particle::updateParticle(ofPoint _attractor){
    
    dist = ofDist(pos.x, pos.y, _attractor.x, _attractor.y);
    
    if(dist<100){
        activated = true;
    }
    
    if(activated){
        pct += vel;
        
        //float: (1 - pct.x) * pos + pct.x * _attractor.x;
        //float: (1 - pct.y) * pos.y + pct.y * _attractor.y;
        pos = (ofPoint(1,1) - pct) * pos + pct * _attractor;
    
        if(brightness < 253){
            brightness += 2;
        }
    }
    
}


void Particle::drawParticle(){
    ofSetColor(brightness);
    ofDrawCircle(pos, 1);
}







