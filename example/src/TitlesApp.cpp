#include "TitlesApp.h"

TitlesApp::TitlesApp(int ac, char* av[]){}


//--------------------------------------------------------------
void TitlesApp::setup(){
   ofBackground(0);

   mVid.loadMovie("fingers.mov");
   mVid.play();

   mTitles.bindVideo(&mVid);
   // titles added without positioning appear at the bottom of the screen
   mTitles.add("Subtitle 1", 1, 1000, 3000);
   mTitles.add("Subtitle 2", 2, 3500, 5500, 10 + mVid.width / 2, 10 + mVid.height * 0.9);
   
   // subtitles are automatically sorted by their start
   // time so they can be added in any order
   mTitles.add("Subtitle 4", 4, 9500, 11500);
   mTitles.add("Subtitle 3", 3, 6000, 8000);

   // multiple titles can be displayed at once.
   mTitles.add("Subtitle 5", 2, 3500, 5500);

   mTitles.loadFont("Inconsolata.ttf", 16);
   mTitles.setLoopState(OF_LOOP_NORMAL);
   mTitles.play();
}

//--------------------------------------------------------------
void TitlesApp::update(){
	mVid.update();
}

//--------------------------------------------------------------
void TitlesApp::draw(){
	ofBackground(ofColor::gray);
	mVid.draw(10, 10);
	
	mTitles.draw();

	mTitles.setDisplayNumber(true);
	//mTitles.draw(x, y);
	//mTitles.draw();
	mTitles.setDisplayNumber(false);
}

//--------------------------------------------------------------
void TitlesApp::keyPressed(int key){
   
}

//--------------------------------------------------------------
void TitlesApp::keyReleased(int key){

}

//--------------------------------------------------------------
void TitlesApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void TitlesApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void TitlesApp::mousePressed(int x, int y, int button){
   
}

//--------------------------------------------------------------
void TitlesApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void TitlesApp::windowResized(int w, int h){

}

