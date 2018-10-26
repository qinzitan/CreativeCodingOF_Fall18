//
//  VectorField.hpp
//  00-VectorField
//
//  Created by Qinzi Tan on 10/26/18.
//

#ifndef VectorField_hpp
#define VectorField_hpp

#include "ofMain.h"

class VectorField{
    
public:
    void setup();
    void update();
    void draw();
    
    vector< vector<ofPoint> > field;
    
    ofPoint getForce(ofPoint _loc);
    
    void noise(float t);
   
    int cols, rows;
    int resolution;
    
};

#endif /* VectorField_hpp */
