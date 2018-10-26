//
//  VectorField.cpp
//  00-VectorField
//
//  Created by Qinzi Tan on 10/26/18.
//

#include "VectorField.hpp"

//--------------------------------------------------------------
void VectorField::setup(){
    resolution = 50;
    
    cols = ofGetWindowWidth() / resolution;
    rows = ofGetWindowHeight() / resolution;
    
//    int i;
//    intVector.push_back(i);
    
    for(int x = 0; x < cols; x++){
        vector<ofPoint> column;
        column.resize(rows);
        field.push_back(column);
        
        for(int y = 0; y<rows; y++){
            field[x][y] = ofPoint(1,0);
        }
        
    }
    
}

//--------------------------------------------------------------
void VectorField::update(){
    
}

//--------------------------------------------------------------
void VectorField::draw(){
    for(int x = 0; x < field.size(); x++){
        for(int y = 0; y< field[x].size(); y++){
            ofPushMatrix();
            ofTranslate(x * resolution, y * resolution);
            ofSetColor(150);
            
            //draw force
            ofSetLineWidth(2);
            ofDrawLine(ofPoint(0,0), field[x][y]*10);
            //put a circle at (0,0)
            ofDrawCircle(ofPoint(0,0), 2);
            ofPopMatrix();
        }
    }
    
}
