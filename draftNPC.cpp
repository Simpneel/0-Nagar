#include "draftNPC.h"

/*

This file will hold the characters ingame functions, or what one
can call character mechanics. 
Do not tinker with this file off the get because things can break

*/

NPC::NPC()
{
	String f_name = "";
	String l_name = "";
	String char_desc = "";
	String char_dialogue = "";
	String char_favour = "";

	float money_rec = 0;
	float energy_req = 0;
	float rep_change = 0;

	int char_appearance_chance = 0;
}

NPC::~NPC()
{
	
}

NPC::NPC(String f_name, String l_name)
{
	this->f_name = f_name;
	this->l_name = l_name;
}
