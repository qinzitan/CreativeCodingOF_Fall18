//
//  Particle.hpp
//  00-force
//
//  Created by Qinzi Tan on 10/12/18.
//

#ifndef Particle_hpp
#define Particle_hpp

#include "ofMain.h"

class Particle {
    
public:
    void setup();
    void update();
    void draw();
    
    void applyForce(ofPoint _f);
    
    void checkEdges();
    
    ofPoint loc;
    ofPoint vel;
    ofPoint acc;
    
    float mass;
    
};

#endif /* Particle_hpp */
