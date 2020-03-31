#include "Move.h"

/* Constructor
 */
Move::Move(int x, int y) {
	
	this->x = x;
	this->y = y;
}

// Overloading the << operator
std::ostream& operator<<(std::ostream& os, const Move& myMove) {
	os << myMove.x << " " << myMove.y;
	return os;
}


