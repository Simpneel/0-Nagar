#include "draftNPC.h"

/*

This file will hold the characters ingame functions, or what one
can call character mechanics. 
Do not tinker with this file off the get because things can break

*/

NPC::NPC()
{
	
	f_name = "";
	l_name = "";
	char_desc = "";
	char_dialogue = "";
	char_favour = "";

	money_rec = 0;
	energy_req = 0;

	rep_change = 0;
	char_appearance_chance = 0;
}

NPC::~NPC()
{
	delete this;
}

const char* NPC::GetCharLastName(const char* f_name)
{
	return l_name;
}

const char* NPC::GetCharDesc(const char* f_name)
{
	return char_desc;
}

const char* NPC::GetCharDialogue(const char* f_name)
{
	return char_dialogue;
}

const char* NPC::GetCharFavour(const char* f_name)
{
	return char_favour;
}

void NPC::SetActive(bool isActive)
{
	this->isActive = isActive;
}


