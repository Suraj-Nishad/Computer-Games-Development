#pragma once

#include <Windows.h>

#include <GL/glew.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <vector>

#include "Player.h"
#include "Timer.h"
#include "Shader.h"
#include "ImageManager.h"
#include "Window.h"
#include "Camera.h"
#include "SpriteBatch.h"
#include "ResourceManager.h"
#include "Bullet.h"
#include "SpriteFont.h"
#include "Box.h"
#include "Entity.h"
class GraphicsManager
{

public:
	GraphicsManager();
	~GraphicsManager();

	//initialise SDL and create window
	bool initGraphics(const int screenWidth, const int screenHeight);

	//Loads media needed for the game
	bool loadMedia();

	//Loads individual image as texture
	//SDL_Texture* loadTexture(std::string path);

	void updateGraphics(float avgFPS, std::vector<Entity>& entities, Player& player);

	void translateCamera(glm::vec2 translation);
	void setCameraScale(float scale);

	Camera getCamera();

private:
	//Log for GraphicsManager
	void log(const std::string text);

	//Initialise the shaders
	void initShaders();

	//Draw the HUD
	void drawHUD(float avgFPS);

	//Screen dimensions
	int mScreenWidth;
	int mScreenHeight;

	//The window we'll be rendering to
	Window mWindow;

	//Camera for the world
	Camera mWorldCamera;

	//Camera for the HUD
	Camera mHUDCamera;

	Player mPlayer;

	//Entity sprite batch
	SpriteBatch mEntitySpriteBatch;

	//HUD sprite batch
	SpriteBatch mHUDSpriteBatch;

	//HUD font
	SpriteFont* mSpriteFont;

	Shader mColourShader;
	//The window renderer
	//SDL_Renderer* mRenderer = NULL;

	//OpenGL context
	//SDL_GLContext mContext;

	//TTF_Font* mMainFont;
	//Texture* mTextTexture;
	//Texture* mPromptTextTexture;
	//Texture* mTimeTextTexture;
	//Texture* mFPSTextTexture;

	//In memory text stream
	//std::stringstream timeText;
	//std::stringstream fpsText;
};

