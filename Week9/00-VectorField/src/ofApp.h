#pragma once

#include "ofMain.h"
#include "Vehicle.hpp"
#include "VectorField.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    VectorField vf;
		
};
