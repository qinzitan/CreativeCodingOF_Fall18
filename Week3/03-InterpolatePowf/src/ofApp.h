#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		
    ofPoint origin;
    ofPoint dest;
    ofPoint objectPos;
    
    //the x axis of math graph
    float inputPct;
    
};
