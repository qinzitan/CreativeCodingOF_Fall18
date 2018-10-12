#pragma once

#include "ofMain.h"
#include "Particle.hpp"

#define TOTALNUM 10

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		
    vector<Particle> particles;
};
