#pragma once
#include "Framework/GameObject.h"
#include "Framework/Input.h"


class Player : public GameObject, private Input 
{
public:
	Player();
	~Player();

	void handleInput(float dt);
};

//create player header and cpp
//make player class have it inherit from gameobject
//add handle input function
//have it access input class
//add setInput() function