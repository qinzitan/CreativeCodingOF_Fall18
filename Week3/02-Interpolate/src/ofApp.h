#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    
    //ofPoint stores 3 float - (float1, float2, float3);
    //float1: .x;
    //float2: .y;
    //float3: .z;
    
    ofPoint origin;
    ofPoint dest;
    ofPoint objectPos;
    
    //PCT(percent)
    //as a float, the value of pct can be 
    float pct;
    
    
    
};
