#include <ostream>

/* Describe this class
 */
class Move {

        public:
                char h;
		
		// Location of the placed stone	
		int x;
		int y;

                /* Constructor
                 */
                Move(int, int);
		
		// Overloading the << operator
                friend std::ostream& operator<<(std::ostream& os, const Move&);

        private:
};

