//
//  Circles.cpp
//  abstractArt
//
//  Created by Jake Hobbs on 16/12/2019.
//

#include "Circles.hpp"

int i;
ofColor colour(0, 0, 0);

float circle1X;
float circle1Y;

float circle2X;
float circle2Y;


void Circles::setup(){
	i = 0;

	circle1X = ofRandom(100, ofGetWidth() - 100);
	circle1Y = ofRandom(100, ofGetHeight() - 100);

	circle2X = ofRandom(100, ofGetWidth() - 100);
	circle2Y = ofRandom(100, ofGetHeight() - 100);

}

void Circles::update(){
	i++;
	if (i == 100) {

		colour.r = ofRandom(255);
		colour.g = ofRandom(255);
		colour.b = ofRandom(255);
		i = 0;

	}
}

void Circles::draw(){
	ofSetColor(colour);
	
	ofDrawCircle(circle1X, circle1Y, 100);
	ofDrawCircle(circle2X, circle2Y, 100);

	ofNoFill();
	ofSetColor(0);

	ofDrawCircle(circle1X, circle1Y, 100);
	ofDrawCircle(circle2X, circle2Y, 100);

	ofFill();
}
