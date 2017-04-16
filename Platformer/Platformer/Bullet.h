#pragma once

#include <glm/glm.hpp>

#include "SpriteBatch.h"

class Bullet
{
public:
	Bullet(glm::vec2 position, glm::vec2 direction, float speed, int lifeTime);
	~Bullet();

	//void init(float speed, glm::vec2 position, glm::vec2 direction, int lifeTime);
	void draw(SpriteBatch& spriteBatch);
	//Returns true when liftime = 0;
	bool update();

private:
	float mSpeed;
	glm::vec2 mPosition;
	glm::vec2 mDirection;
	int mLifeTime;
};

