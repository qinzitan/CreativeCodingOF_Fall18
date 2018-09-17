#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //Creating the canvas
    
    //background color = 0 -- > black
    ofBackground(0);
    
    //Don't clear my canvas
    ofSetBackgroundAuto(false);
    
    //ofEnableSmoothing();
    
    counter = 0;
    
    cout<< "hi." <<endl;
    cout<< counter << endl;
    
    //cout: hey computer, i'm about to say sth;
    //<<: listen!
    //"hi."/counter - things you're about to check
    //<<: i finished;
    //endl: print it in the console log, and do a line breaker
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //=============FOR LOOP==============
    // int i = 0;
    // check if i < 100;
    // yes --> call whatever code inside the for loop bracket
    // i += 1;/ i++; --> i = 1;
    
    // check if i < 100;
    // yes --> call whatever code inside the for loop bracket
    // i += 1;/ i++; --> i = 2;
    
    //...
    // no -->
    //=============FOR LOOP==============
    
    //if there're currently more than 10000 circles on the canvas
    //OR
    //if mouse is not pressed
    if(counter >= 10000 ||  !ofGetMousePressed())
        return;  //stop here, exit draw(), nothing below this line will run
    
    float radius = 20;
    float w =ofGetWindowWidth();
    float h = ofGetWindowHeight();
    
    /*Don't forget this if you're about to use ofTranslate().
    Don't forget to close it by using ofPopMatrix() after everything --> line 131*/
    ofPushMatrix();
    
    //==========
    /*move the origin of the coordinate system
    to (w/2, h/2) -- center of the canvas
    ofTranslate(w/2, h/2);
    after the line of code above
    w/2 (center width) --> 0
    h/2 (center height) --> 0 */
    //===========
    //ofTranslate(w/2, h/2);
    
    //===========
    //move the origin of the coordinate system
    //to where the mouse is
    //===========
    ofTranslate(ofGetMouseX(), ofGetMouseY());
    
    //do this for 100 times/frame
    for(int i = 0; i<15; i++){
        //print the value of i in console
        //cout << i << endl;
        
        
        //===draw circles randomly on the whole canvas======
            //float posX;
            //posX = ofRandom(0,ofGetWindowWidth());
            //float posY;
            //posY = ofRandom(0,ofGetWindowHeight());
        //===draw circles randomly on the whole canvas======
        
        
        //==========WITHOUT ofTranslate()========
          /*the origin of the coordinate axes is
          at top-left corner of the window according to default OF setting*/
         //====CODE====
            //float posX;
            //posX = ofRandom(w/2-radius,w/2+radius);
            //float posY;
            //posY = ofRandom(h/2-radius, h/2 + radius);
         //====CODE====
        //==========WITHOUT ofTranslate()========
        
        
        //==========WITH ofTranslate()========
        float posX;
        posX = ofRandom(0-radius,0+radius);
        float posY;
        posY = ofRandom(-radius, radius);
        
        /*calculate the distance between
        the current circle i'm dealing with
        and the center of the canvas*/
        float distance = ofDist(posX, posY,0,0);
        //cout << distance << endl;
        
        /*check if the distance is smaller than
        radius I set before
        only do the followings is yes*/
        if(distance < radius){
            //draw a dot at (posX, posY) of the screen
            //with radius of 1
            
            //r, g, b, a
            //rgb (0,255)
            //a (0,100)
            ofSetColor(0, ofRandom(200,255), ofRandom(0,130), ofRandom(30,50));
            
            float size = ofRandom(5,10);
            ofDrawCircle(posX , posY, size);
            counter ++;
        }
    }
    
    ofPopMatrix();
    //cout<< "for loop ends." <<endl;
}
