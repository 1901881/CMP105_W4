#include "Player.h"
#include "Level.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::handleInput(float dt)
{
	//Right
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		input->setKeyUp(sf::Keyboard::Right);
		move(500 * dt, 0);
	}
	//Left
	if (input->isKeyDown(sf::Keyboard::Left))
	{
		input->setKeyUp(sf::Keyboard::Left);
		move(-500 * dt, 0);
	}
	//Up
	if (input->isKeyDown(sf::Keyboard::Up))
	{
		input->setKeyUp(sf::Keyboard::Up);
		move(0, -500 * dt);

	}
	//Down
	if (input->isKeyDown(sf::Keyboard::Down))
	{
		input->setKeyUp(sf::Keyboard::Down);
		move(0, 500 * dt);

	}
	
}

