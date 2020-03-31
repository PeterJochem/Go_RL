#include <vector>

#ifndef MOVE_H
#define MOVE_H
#include "Move.h"
#endif

#include <iostream>

/* Describe this method
 */ 
class Group {

	public:
		Group(void);

		// Add a piece to the group
		void addPiece(Move);		
		
		// Merge another group into this one
		void mergeGroup(Group);
		
		// Overloading the << operator
		friend std::ostream& operator<<(std::ostream& os, const Group&);

	private:
		// List of all the pieces/Moves in the group
		std::vector<Move> allMoves;

};
