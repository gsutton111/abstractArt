#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    rectangles.setup();
    circles.setup();
    lines.setup();
    triangles.setup();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    rectangles.update();
    circles.update();
    lines.update();
    triangles.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    rectangles.draw();
    circles.draw();
    lines.draw();
    triangles.draw();
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
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}
