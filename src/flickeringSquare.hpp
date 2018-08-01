//
//  flickeringSquare.hpp
//  animationTest
//
//  Created by Chris Ried on 7/10/18.
//

#ifndef flickeringSquare_hpp
#define flickeringSquare_hpp

#include <stdio.h>

#endif /* flickeringSquare_hpp */

class Flicker {
    
    
public:
    void setup();
    void update();
    void draw(float radius);
    void center(); 
    
    float xPos;
    float yPos;
    int randn; 
    
    
    float size;
    
    Flicker();
};
