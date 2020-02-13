#include "Enemy.h"

Enemy::Enemy(sf::Vector2u * windX)
{
	this->windX = windX;
}

Enemy::~Enemy()
{
}

void Enemy::update(float dt)
{
	//Move Circle
	move(speed.x * dt, speed.y * dt);

	if (getPosition().x >= windX->x - getSize().x || getPosition().x <= 0)
	{
		speed.x *= -1;
	}
	if (getPosition().y >= windX->y - getSize().y || getPosition().y <= 0)
	{
		speed.y *= -1;
	}


	
}

void Enemy::set_speed(float x, float y)
{
	speed = sf::Vector2f(x, y);
}
