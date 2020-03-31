#ifndef GROUP_H
#define GROUP_H
#include "Group.h"
#endif

#ifndef MOVE_H
#define MOVE_H
#include "Move.h"
#endif

#include <vector>
#include <iostream>

/* Constructor
 */
Group::Group(void) {
	
}

/* Add a piece to the group
 * Arguments: 
 */
void Group::addPiece(Move newMove) {
	allMoves.push_back(newMove);
}

/* Merge another group into this one
 * Arguments: 
 * Return void
*/
void Group::mergeGroup(Group) {

}

/* Overloads the << operator
 */
std::ostream& operator<<(std::ostream& os, const Group& myGroup) {
   	
   // Print the locations of all the pieces in the group	
   for (int i = 0; i < myGroup.allMoves.size(); ++i) {	
   	os << myGroup.allMoves[i] << std::endl;
   }
    
    return os;
}


