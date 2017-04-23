#pragma once

#include <Box2D/Box2D.h>

#include "Player.h"
#include "Box.h"
#include "Ground.h"

class LevelManager
{
public:
	static bool loadLevel(const std::string& filePath, std::unique_ptr<b2World>& world, AudioManager& audioManager, 
		Player& player, std::vector<Box>& boxEntities, std::vector<Ground>& groundEntities);

private:
	static void log(const std::string text);
};
