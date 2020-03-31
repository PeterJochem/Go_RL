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

std::ostream& operator<<(std::ostream& os, const Group& myGroup) {
    os << "HELLLOOOO";
    return os;
}


