#pragma once
#include "draftNPC.h"

class Game {

public:
	bool keepGameRunning = true;
	bool winCheck = false;

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


};