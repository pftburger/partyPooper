#pragma once

#include "ofMain.h"
#include "ofxOpenCv.h"

struct tableObject {
    ofImage             image;
    ofxCvColorImage     CvImage;
    ofPoint             pos;
    ofVec2f             size;
    bool                alive;
    ofPath              path;

    
    
};

class tableObjects {

    
    vector<tableObject>  objects;
    
    bool isNew(tableObject object);
    bool add(ofxCvColorImage image, ofPoint pos, ofVec2f size);
    tableObject newTableObject(ofxCvColorImage CvImage, ofPoint pos, ofVec2f size);
    
    
};



class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

    
        tableObjects            myTableObjects;
    
        ofVideoGrabber 		vidGrabber;
    
        ofxCvColorImage			colorImg;
    
        ofxCvGrayscaleImage 	grayImage;
        ofxCvGrayscaleImage 	grayBg;
        ofxCvGrayscaleImage 	grayDiff;
    
        ofxCvContourFinder 	contourFinder;
    
        int 				threshold;
        bool				bLearnBakground;
    
    
		
};
