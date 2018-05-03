//
//  Vehicle.hpp
//  PathFollowingSketch
//
//  Created by 山下希流 on 2018/05/03.
//

#ifndef Vehicle_hpp
#define Vehicle_hpp

#include <stdio.h>
#include "ofMain.h"

class Vehicle{
private:
    ofVec2f position;
    ofVec2f velocity;
    ofVec2f accelecation;
    float radius;
    float maxSpeed;
    float maxPower;
    float mass;
    float angle;
    ofColor color;
public:
    ~Vehicle();
    Vehicle(float x,float y);
    void update();
    void display();
    void applyForce(ofVec2f force);
    void seek();
};
#endif /* Vehicle_hpp */
