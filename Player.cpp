#include "Player.h"
#include <iostream>

/* Describe this method
 
class Player {

        public:
                char* name; // Name of the bot/human
                int version; // Denotes iteration of certain bot
                bool isAI; // Describes if this is an AI or human
                
                // Constructor
                Player(void);
                void incrementVersion(void);
                //Move chooseMove(void);
                        

        private:

};
*/

/*
 */
void Player::incrementVersion() {
	this->version++;
}

Player::Player(void) {
	std::cout << "Ran" << std::endl;
}

