#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    //help me count the totoal
    //of circles on the canvas
    int counter;
};
