#include "ofApp.h"

//--------------------------------------------------------------
ofApp::~ofApp(){
    for(int i = vehicles.size()-1; i >= 0; i--){
        delete vehicles[i];
        this->vehicles.erase(this->vehicles.begin() + i);
    }
}

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetFrameRate(60);
    ofEnableSmoothing();
    ofSetWindowTitle("PathFollowing");
    this->vehicles.push_back(new Vehicle(ofGetWidth()/2,ofGetHeight()/2));
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = vehicles.size()-1; i >= 0; i--){
        this->vehicles[i]->update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = vehicles.size()-1; i >= 0; i--){
        this->vehicles[i]->display();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
