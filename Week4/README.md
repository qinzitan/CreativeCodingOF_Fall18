### Week 4
#### Topics
Easing,  
Circular Motion,  
Array
<br/>

===========
#### Homework - Generative Graphics II - Circular Motion

1. Create a generative image/animation with sin & cos (circular motion).   

2. Study/Continue studying [_ofxGui_](https://openframeworks.cc/documentation/ofxGui/)  
Add a GUI system so you can easily change some of the parameters (eg. size, level of randomness, color) at runtime using an interface.  

**Basic Example: changing the radius of a circle using GUI**  

**Add ofxGui addon to your project:**  
when creating a project using project generator  
add ofxGui to Addons (the dropdown menu under _Project path_)

**_ofApp.h_**   
```C++
#include "ofxGui.h"   
class ofApp : public ofBaseApp{  
  ofxPanel gui;  
  ofxFloatSlider radius;  
}
```

**_ofApp.cpp_**    
```C++
void ofApp::setup(){  
  gui.setup();  
  gui.add(radius.setup("radius", 140, 10, 300));  
}
void ofApp::draw(){  
  ofDrawCircle(500, 500, radius);  
  gui.draw();  
}
```

**ofxGUI Example & Youtube Tutorial:**   
of_v0.10.0_osx_release > examples > gui > guiExample  
https://www.youtube.com/watch?v=X_is1x8iVtw  
