#pragma once

#include <SDL/SDL.h>
#include <unordered_map>
#include <iostream>
#include <string>
#include <glm/glm.hpp>

//Store information on the user input for this frame and the previous frame

class InputManager
{
public:
	InputManager();
	~InputManager();

	//Key press and release
	void pressKey(unsigned int keyID);
	void releaseKey(unsigned int keyID);

	//Key status bools
	bool isKeyDown(unsigned int keyID);
	bool isKeyPressed(unsigned int keyID);
	bool isKeyReleased(unsigned int keyID);

	//Mouse
	void setMouseCoords(float x, float y);
	glm::vec2 getMouseCoords();

	void update();

	const int getLeftStickDirection() const { return mLeftStickDirection; }
	void setLeftStickDirection(const int direction) { mLeftStickDirection = direction; }

private:
	//Was key down last frame
	bool wasKeyDown(unsigned int keyID);

	//Log for input manager
	void log(const std::string text);

	//Two key maps for storing key presses
	//Previous key map stores key presses from the previous frame for
	//differentiating between a key being pressed and a key being held
	std::unordered_map<unsigned int, bool> mKeyMap;
	std::unordered_map<unsigned int, bool> mPrevKeyMap;

	glm::vec2 mMouseCoords;

	//Controller left stick direction
	//left = -1
	//middle = 0
	//right = 1
	int mLeftStickDirection = 0;

};

