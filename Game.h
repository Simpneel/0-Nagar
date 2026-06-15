#pragma once
#include "draftNPC.h"

class Game {

public:		//Publicly visible variables for the gameloop go here

	bool keepGameRunning = true;
	bool winCheck = false;

private:	//Private variables for gameloop functioning go here

	int daysPassed = 0;
	float playerMoney = 0.0;
	float playerEnergy = 0.0;
	float playerReputation = 0.0;

	Stabby stabby;
	Victor victor;
	Hardick hardick;
	Sharma sharma;
	Monty monty;
	Jonty jonty;
	Jain jain;
	Billu billu;

public:		//Gameloop functions go here

	Game();
	~Game();
	void GameLoop();


};