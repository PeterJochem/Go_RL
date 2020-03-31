#include "Board.h"
#ifdef __APPLE_CC__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif



/* Constructor
*/
Board::Board(void) {
		
}

/*
 */
void updateBoard(void) {
	 glColor3f(0.847, 0.847, 0.74902);
  glBegin(GL_POLYGON);
  glVertex3f(-2.0, 2.0, 0.0);
  glVertex3f(2.0, 2.0, 0.0);
  glVertex3f(2.0, -2.0, 0.0);
  glVertex3f(-2.0, -2.0, 0.0);
 glEnd();

}

/*
 */
void drawInitialBoard(void) {


}
