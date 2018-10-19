//
//  Vehicle.hpp
//  00-Steering
//
//  Created by Qinzi Tan on 10/19/18.
//

#ifndef Vehicle_hpp
#define Vehicle_hpp

#include "ofMain.h"

class Vehicle{
    
public:
    void setup();
    void update();
    void draw();
    
    void applyForce(ofPoint f);
    void steeringForce();
    
    ofPoint loc;
    ofPoint vel;
    ofPoint acc;
    
    float r;

};


#endif /* Vehicle_hpp */
