#include "PhysicsManager.h"

PhysicsManager::PhysicsManager()
{
}

PhysicsManager::~PhysicsManager()
{
}

bool PhysicsManager::initPhysics()
{
	return false;
}

void PhysicsManager::updatePhysics(float timeStep, std::vector<Bullet> &bullets)
{
	for (unsigned int i = 0; i < bullets.size();)
	{
		if (bullets[i].update(timeStep) == true) 
		{
			bullets[i] = bullets.back();
			bullets.pop_back();
		}
		else
		{
			i++;
		}
	}
}

void PhysicsManager::log(const std::string text)
{
	std::cout << "[PhysicsManager] " << text << std::endl;
}
