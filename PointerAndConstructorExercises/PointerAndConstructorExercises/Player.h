#pragma once
class Player
{
public:
	struct Bullet { float x, y; };

	Player(int max_ammo) {
		bullets = new Bullet[max_ammo];
		ammo = 0;
		health = 0;
		max_health = 100;
	};

	~Player();

	int health;
	int max_ammo;
	int ammo;
	int max_health;
	Bullet* bullets;
};

