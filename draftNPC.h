#pragma once
#include "String.h"
#include "raylib.h"
/*

This file will have the classes for all our characters, the first one called NPC dictates a basic layout of the
data we will have in the game being carried around for these characters. 
To tinker around with the specs of the characters as you see them when it runs, you can go to the specific class of 
the character, and find the aspect of character you wish to change, the text in quotes is safe to touch and doesn't cause errors. 
As it expands, we can have a list of different dialogues and favours for each character instead of just one. 

*/
class NPC {
private:
	const char* f_name;
	const char* l_name;
	const char* char_desc;
	const char* char_favour;
	const char* char_dialogue;


public:

	bool isActive = false;	//	True/False check to see if NPC is currently initialized
	float money_rec, energy_req, rep_change;
	int* char_appearance_chance = 0;
	Texture2D char_texture;

	//functions+
	String CharDialogue() { return char_dialogue; }
	String CharDescription() { return char_desc; }
	//int CharAppearChance(int CharDaysTillLastApp) { return *char_appearance_chance; }

	NPC();
	~NPC();
	const char* GetCharLastName(const char* f_name);
	const char* GetCharDesc(const char* f_name);
	const char* GetCharDialogue(const char* f_name);
	const char* GetCharFavour(const char* f_name);

	void SetActive(bool isActive);


};

class Stabby : public NPC {
public:

	const char* f_name = "|Stabby";
	const char* l_name = " ?|";
	const char* char_desc = "|Covered in blood|";
	const char* char_favour = "Delete CCTV footage from the previous night";
	const char* char_dialogue = "This is... uhhh. . . cranberry juice?";
	float money_rec = 500;
	float rep_change = -3;

	//functions
	Stabby();
	~Stabby();

};

class Victor : public NPC {
private:
	String f_name = "|Victor";
	String l_name = "  The Contractor|";
	String char_desc = "|Bricks in his picket|";
	String char_favour = "Give him the highway tendor";
	String char_dialogue = "I'll give ya a brick!.. OF CASH!";
public:
	float money_rec = 420;
	float rep_change = -5;

	//functions
	Victor();
	~Victor();
};

class Hardick : public NPC {
private:
	String f_name = "|Hardick";
	String l_name = " Punani|";
	String char_desc = "|Normal guy|";
	String char_favour = "Get approval for his application to legally change his name.";
	String char_dialogue = "*sigh* People really like making fun of my name...";
public:
	float money_rec = 50;
	float rep_change = -5;

	//functions
	Hardick();
	~Hardick();

};

class Sharma : public NPC {
private:
	String f_name = "|Sharma ji";
	String l_name = " ka Beta|";
	String char_desc = "|A spoiled brat|";
	String char_favour = "Magically make his exam scores less disappointing";
	String char_dialogue = "Bro I studied civics bro";
public:
	float money_rec = 380;
	float rep_change = -1;

	//functions
	Sharma();
	~Sharma();
};

class Monty : public NPC {
private:
	String f_name = "|Monty";
	String l_name = " Lal|";
	String char_desc = "| |";
	String char_favour = "Arrest my brother for shooting me!";
	String char_dialogue = "They love him, but luckily I've heard you love money more";
public:
	float money_rec = 4;
	float rep_change = -4;

	//functions
	Monty();
	~Monty();

};

class Jonty : public NPC {
private:
	String f_name = "|Jonty";
	String l_name = " Lal|";
	String char_desc = "| |";
	String char_favour = "Arrest my brother for shooting me";
	String char_dialogue = "Everyone hates him, can't pay a price better than hatred";
public:
	float money_rec = 1;
	float rep_change = -1;

	//functions
	Jonty();
	~Jonty();

};

class Jain : public NPC {
private:
	String f_name = "|Jain";
	String l_name = " Z|";
	String char_desc = "|Smart Gen Z|";
	String char_favour = "Fast track my passport";
	String char_dialogue = "I gotta get outta here";
public:
	float money_rec = 200;
	float rep_change = -2;

	//functions
	Jain();
	~Jain();

};

class Billu : public NPC {
private:
	String f_name = "|Billu";
	String l_name = " ?|";
	String char_desc = "|Clearly a barber|";
	String char_favour = "Allocate land for his new barber shop.";
	String char_dialogue = "If I cut your hair, that ugly mug would be more bearable";
public:
	float money_rec = 120;
	float rep_change = 0;

	//functions
	Billu();
	~Billu();
};