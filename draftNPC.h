#pragma once
#include "String.h"

class NPC {
private:
	String f_name, l_name;
	String char_desc, char_favour, char_dialogue;

public:
	float money_rec, energy_req, rep_change;
	int* char_appearance_chance;
};

class Stabby : public NPC {
private:
	String f_name = "|Stabby";
	String l_name = " ?|";
	String char_desc = "|Covered in blood|";
	String char_favour = "Delete CCTV footage from the previous night";
	String char_dialogue = "This is... uhhh. . . cranberry juice?";
public:
	float money_rec = 500;
	float rep_change = -3;
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
};