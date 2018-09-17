### Week 3
#### Topics
Mouse interaction  
Linear Movement  
Interpolation, PCT
<br/>

===========
#### Homework - Generative Graphics
Create a generative image (static/animated) using the concept of PCT together with some math formulas.  
The result has to be visually polished.

_**  
PCT doesn't necessarily have to work with distance/movement. It can work with any kind of task which has a process from a beginning to an end.  
Eg. change the color of a circle from black gradually to white by setting the pct of its brightness._

[Some math formulas for motion](https://soulwire.co.uk/math-for-motion/)

===========  
_**Bonus (optional):**_   
Study [_ofxGui_](https://openframeworks.cc/documentation/ofxGui/) by yourself ;)  
Add a GUI system so you can easily change some of the parameters (eg. size, level of randomness, color) at runtime using an interface.  

**Basic Example: changing the radius of a circle using GUI**  
**_ofApp.h_**   
#include "ofxGui.h"   
class ofApp : public ofBaseApp{  
  ofxPanel gui;  
  ofxFloatSlider radius;  
}  

**_ofApp.cpp_**    
void ofApp::setup(){  
  gui.setup();  
  gui.add(radius.setup("radius", 140, 10, 300));  
}  
  
void ofApp::draw(){  
  ofDrawCircle(500, 500, radius);  
  gui.draw();  
}  

**ofxGUI Example & Youtube Tutorial:**   
of_v0.10.0_osx_release > examples > gui > guiExample  
https://www.youtube.com/watch?v=X_is1x8iVtw  
