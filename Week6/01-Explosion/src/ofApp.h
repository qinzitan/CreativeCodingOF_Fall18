#pragma once

#include "ofMain.h"
#include "Attractor.hpp"
#include "Particle.hpp"

#define SEGMENT 3
#define TOTALNUM 600

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    vector<Attractor> attractors;
    vector<Particle> particles;
    
    float radius;
    
    float rMin;
    float rMax;
    
    float rPct = 0;
    float rPctVel = 0.005;
    
};
