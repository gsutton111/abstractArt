#pragma once

#include "ofMain.h"
#include "Rectangles.hpp"
#include "Circles.hpp"
#include "Lines.hpp"
#include "Triangles.hpp"

class ofApp : public ofBaseApp{
    
private:
    Rectangles rectangles;
    Circles circles;
    Lines lines;
    Triangles triangles;

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		
};
