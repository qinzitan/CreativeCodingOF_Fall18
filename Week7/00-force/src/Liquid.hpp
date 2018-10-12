//
//  Liquid.hpp
//  00-force
//
//  Created by Qinzi Tan on 10/12/18.
//

#ifndef Liquid_hpp
#define Liquid_hpp

#include "ofMain.h"

class Liquid {
    
public:
    void setup(float _x, float _y, float _w, float _h, float _c);
    void draw();
    
    float x,y,w,h;
    float c;
};

#endif /* Liquid_hpp */
