//
//  Particle.hpp
//  01-Explosion
//
//  Created by Qinzi Tan on 10/12/18.
//

#ifndef Particle_hpp
#define Particle_hpp

#include "ofMain.h"


class Particle{
    
public:
    void setup();
    void update(ofPoint attractor);
    void draw();
    
    float brightness;
    float size;
    
    ofPoint pos;
    ofPoint vel;
    ofPoint pct;
    
    int groupId;
};

#endif /* Particle_hpp */
