#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofEnableSmoothing();
    ofSetCircleResolution(50);
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i< pos.size(); i++){
        pos[i] += vel[i];
        
        
        float age = ofGetElapsedTimef() - bornTime[i];
        
        color[i].a = ofMap(age, 0, 1, 255, 0);
        
        if(age > 1){
            pos.erase(pos.begin() + i);
            vel.erase(vel.begin() + i);
            color.erase(color.begin() + i);
            radius.erase(radius.begin() +i);
            bornTime.erase(bornTime.begin() + i);
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i < pos.size(); i ++){
        ofSetColor(color[i]);
        ofDrawCircle(pos[i], radius[i]);
    }
    
    cout<< "current time is: " <<  ofGetElapsedTimef() <<endl;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    //if a specific key is pressed
    if(key==' '){
      //push items in to those vector
        pos.push_back(
                      ofPoint(
                          ofGetWindowWidth()/2,
                          ofGetWindowHeight()/2
                      )
        );
        
        vel.push_back(
        ofPoint(ofRandom(-10,10), ofRandom(-10,10))
        );
        
        radius.push_back(ofRandom(5,20));
        
        //:: scope resolution operation
        //want to get access to a specific function
        //in a specific class
        //--> getting fromHsb() from ofColor class
        color.push_back(
                    ofColor::fromHsb(ofRandom(255), 200, 200)
                        );
        
        bornTime.push_back(
                           ofGetElapsedTimef()
                          
                           );
        
        cout << "A Sphere is borned at "
        << ofGetElapsedTimef() << endl;
    }
}






