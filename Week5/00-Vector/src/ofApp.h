#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		
    //Array
    ofPoint posArray[5];
    
    //vector
    vector<ofPoint> pos;
    vector<ofPoint> vel;
    vector<ofColor> color;
    vector<float> radius;
    
    vector<float> bornTime;
    
};
