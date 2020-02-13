#pragma once
#include "Framework/GameObject.h"

class Enemy : public GameObject
{
private:
	sf::Vector2f speed = sf::Vector2f(300, 300);
	sf::Vector2u* windX;

public:
	Enemy(sf::Vector2u * windX);
	~Enemy();

	void update(float dt) override;
	void set_speed(float x, float y);

};

