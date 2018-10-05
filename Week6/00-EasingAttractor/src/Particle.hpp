//
//  Particle.hpp
//  00-EasingAttractor
//
//  Created by Qinzi Tan on 10/5/18.
//

#ifndef Particle_hpp
#define Particle_hpp

#include "ofMain.h"

class Particle{

public:
    void init();
    void updateParticle(ofPoint _attractor);
    void drawParticle();
    
    ofPoint pos;
    ofPoint vel;
    ofPoint pct;
    
    float dist;
    bool activated;
    
    float brightness;
};

#endif /* Particle_hpp */
