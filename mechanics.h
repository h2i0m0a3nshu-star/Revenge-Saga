#pragma once
#include "player.h"
#include "entity.h"
#include "enemy.h"
#include "sprites.h"
#include <raylib.h>

class mechanics {

public:
	void input_handler(player &hero);
	void combat_handler(player &hero,enemy &e);
	void behaviours(player &hero, enemy &e);
	bool is_game_over(player &hero);
private:

	int delay = 5;
	int enemy_delay = 0;

	int ctr = 0;

	int player_input_time = 0;
	int enemy_attack_time = 0;

	bool combat_checker(player hero, enemy e);
	void delay_handler();
};