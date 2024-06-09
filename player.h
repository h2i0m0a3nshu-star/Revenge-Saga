#pragma once
#include <iostream>
#include <raylib.h>
#include"entity.h"

typedef enum player_state {
	IDLE,
	ATTACK_RIGHT,
	ATTACK_LEFT,
	PUNISH,
	DEATH
};

// The player class
class player : public entity {
public:
	player();
	void set_state(player_state new_state);
	player_state get_state() const;
	void player_behaviour();
	Vector2 get_pos() const;
	void take_hit();
	bool is_attacking() override;
	bool is_invincible();
	bool is_alive() override;
	~player() {};
private:
	bool delay;
	int invincibility;
	Rectangle DestRect;

	typedef enum weapon {
		NORMAL,
		SWORD
	};

	player_state curr_state;
	weapon curr_weapon = NORMAL;

	
	void idle();
	void attack_right();
	void attack_left(); 
	void death();
};