//
//  Attractor.hpp
//  01-Explosion
//
//  Created by Qinzi Tan on 10/5/18.
//

#ifndef Attractor_hpp
#define Attractor_hpp

#include "ofMain.h"

class Attractor{
    
public:
    void setup(ofPoint _pos, float _radius, float _angle, float _vel);
    void update(float _updatedRadius);
    void draw();
    
    ofPoint pos;
    float radius;
    float angle;
    float vel;
    
};

#endif /* Attractor_hpp */
