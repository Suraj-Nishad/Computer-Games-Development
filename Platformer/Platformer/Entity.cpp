#include "Entity.h"

Entity::Entity()
{
}

Entity::~Entity()
{
}

void Entity::init(const glm::vec2& position, const glm::vec2& dimensions, const Colour& colour,
	const Texture& texture, const glm::vec4& texCoords)
{
	//Initialise the entity's variables
	mPosition = position;
	mDimensions = dimensions;
	mColour = colour;
	mTexture = texture;
	mTexCoords = texCoords;
}

//Add Entity to SpriteBatch
void Entity::add(SpriteBatch& spriteBatch, Camera& camera)
{
	if (camera.isOnCamera(mPosition, mDimensions))
	{
		spriteBatch.addSprite(mPosition, mDimensions, mTexCoords, mTexture.id, 0.0f, mColour);
	}
}
