 /*
 * gCanvas.h
 *
 *  Created on: May 6, 2020
 *      Author: Noyan Culum
 */

#ifndef GCANVAS_H_
#define GCANVAS_H_

#include "gApp.h"
#include "gImage.h"


class gCanvas : public gBaseCanvas {
public:
	gCanvas(gApp* root);
	virtual ~gCanvas();

	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void charPressed(unsigned int codepoint);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseScrolled(int x, int y);
	void mouseEntered();
	void mouseExited();
	void windowResized(int w, int h);


	void deviceOrientationChanged(DeviceOrientation deviceorientation);

	void touchMoved(int x, int y, int fingerId);
	void touchPressed(int x, int y, int fingerId);
	void touchReleased(int x, int y, int fingerId);

	void pause();
	void resume();

	void showNotify();
	void hideNotify();

private:
	gApp* root;
	gImage logo;
};

#endif /* GCANVAS_H_ */
