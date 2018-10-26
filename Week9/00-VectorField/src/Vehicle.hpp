//
//  Vehicle.hpp
//  00-Seek
//
//  Created by Qinzi Tan on 10/18/18.
//

#ifndef Vehicle_hpp
#define Vehicle_hpp

#include "ofMain.h"
#include "VectorField.hpp"

class Vehicle{
    
public:
    void setup(float _x, float _y);
    void update();
    void draw();
    
    void applyForce(ofPoint force);
    
    //advanced steering function
    //waiting for a force to
    //be passed from the
    //vector field
    void follow(VectorField vf);
    
    ofPoint loc;
    ofPoint vel;
    ofPoint acc;
    
    float r;
    
    float maxForce;
    float maxSpeed;
    
};


#endif /* Vehicle_hpp */
