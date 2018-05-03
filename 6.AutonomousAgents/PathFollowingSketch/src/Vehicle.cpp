//
//  Vehicle.cpp
//  PathFollowingSketch
//
//  Created by 山下希流 on 2018/05/03.
//

#include "Vehicle.hpp"

Vehicle::Vehicle(float x,float y){
    this->position.set(x,y);
    this->velocity.set(2,2);
    this->accelecation.set(0,0);
    this->radius = 20;
    this->maxPower = 0.1f;
    this->maxSpeed = 4.0f;
    this->mass = 1.0f;
    this->color.setHsb(ofRandom(255), 255, 255);
}

Vehicle::~Vehicle(){
    
}

void Vehicle::update(){
    this->velocity += this->accelecation;
    this->velocity.limit(this->maxSpeed);
    this->position += this->velocity;
    this->accelecation *= 0.0f;
}

void Vehicle::display(){
    this->angle = ofRadToDeg(atan2f(this->velocity.y, this->velocity.x)) + 90;
    ofNoFill();
    ofSetColor(this->color);
    ofPushMatrix();
    ofTranslate(this->position.x, this->position.y);
    ofRotate(this->angle);
    ofBeginShape();
    ofVertex(0, -this->radius);
    ofVertex(this->radius/2, this->radius/2);
    ofVertex(-this->radius/2, this->radius/2);
    ofEndShape(OF_CLOSE);
    ofPopMatrix();
}

void Vehicle::applyForce(ofVec2f force){
    this->accelecation += force / this->mass;
}

void Vehicle::seek(){
    
}
