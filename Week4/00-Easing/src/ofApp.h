#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		
		void mousePressed(int x, int y, int button);
		
    ofPoint objectPos;
    ofPoint dest;
    
    float pct;
		
};
