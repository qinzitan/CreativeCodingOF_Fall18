#pragma once

#include "ofMain.h"
#include "Vehicle.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
        void draw();
    
    Vehicle vehicle;
};
