#ifdef __APPLE_CC__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

/* Describe here
 */
class Board {
	
	public:

		Board(void);
		
		void drawInitialBoard(void);
		void updateBoard(void);
	
	private:
};

