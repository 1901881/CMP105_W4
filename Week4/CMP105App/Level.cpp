#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	cursor = new Cursor;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");
	shroom.setTexture(&texture);
	shroom.setSize(sf::Vector2f(100, 100));
	shroom.setPosition(100, 100);
	shroom.setInput(input);
	shroom.setVelocity(50, 50);

	gtexture.loadFromFile("gfx/goomba.png");
	goomba.setTexture(&gtexture);
	goomba.setSize(sf::Vector2f(100, 100));
	goomba.setPosition(100, 100);
	goomba.setInput(input);

	gtexture.loadFromFile("gfx/goomba.png");
	goomba2.setTexture(&gtexture);
	goomba2.setSize(sf::Vector2f(100, 100));
	goomba2.setPosition(100, 100);
	goomba2.setInput(input);
	goomba2.set_speed(600, 0);

	cursor_t.loadFromFile("gfx/icon.png");
	cursor->setTexture(&cursor_t);
	cursor->setSize(sf::Vector2f(100, 100));
	cursor->setPosition(100, 400);
	cursor->setInput(input);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	shroom.handleInput(dt);

	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

}

// Update game objects
void Level::update(float dt)
{
	windX = window->getSize();
	goomba.update(dt);
	goomba2.update(dt);
	cursor->update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(shroom);
	window->draw(goomba);
	window->draw(goomba2);
	window->draw(*cursor);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}