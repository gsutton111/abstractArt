//
//  Circles.cpp
//  abstractArt
//
//  Created by Jake Hobbs on 16/12/2019.
//

#include "Circles.hpp"

int i;
ofColor colour(0, 0, 0);


void Circles::setup(){
	i = 0;
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
	ofDrawCircle(150, 150, 100);
}
