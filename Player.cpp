#include "Player.h"
#include <iostream>

/* Describe this method
 */
void Player::incrementVersion() {
	this->version++;
}

Player::Player(void) {
	std::cout << "Player created" << std::endl;
}

