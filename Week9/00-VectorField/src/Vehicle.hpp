//
//  Vehicle.hpp
//  00-Seek
//
//  Created by Qinzi Tan on 10/18/18.
//

#ifndef Vehicle_hpp
#define Vehicle_hpp

#include "ofMain.h"

class Vehicle{
    
public:
    void setup(float _x, float _y);
    void update();
    void draw();
    
    void applyForce(ofPoint force);
    
    ofPoint loc;
    ofPoint vel;
    ofPoint acc;
    
    float r;
    float maxForce;
    float maxSpeed;
    
};


#endif /* Vehicle_hpp */
