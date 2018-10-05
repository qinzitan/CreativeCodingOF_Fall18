#pragma once

#include "ofMain.h"
#include "Attractor.hpp"

#define SEGMENT 12

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    vector<Attractor> attractors;
    
    float radius;
};