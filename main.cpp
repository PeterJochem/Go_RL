#include <iostream>
#include <vector>

#ifdef __APPLE_CC__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

// Class prototypes
class Player;
class Game;
class Move;

/* Describe this method
 */
class Player {

	public:
		char* name; // Name of the bot/human
                int version; // Denotes iteration of certain bot
		bool isAI; // Describes if this is an AI or human
		
		// Constructor
		Player(void) {
			
		}
		
		
		void incrementVersion(void);
		Move chooseMove(void);
			

	private:

};


/* Describe this method
 */
class Game {

	public:
		
		Player player1;
		Player player2;

		Game(void) {


		}

	private:

};


/* Describe this class
 */
class Move {

	public:		
			
		char h;

		/* Constructor
		 */ 
		Move(void) {
			this->h = 'r';
		}

	private:
};

 /* Chooses a move for the player
  * Returns the chosen move
  */
  Move Player::chooseMove(void) {
	  return Move();
   }
  
  /* Increment the player's version number
   */
  void Player::incrementVersion(void) {
	this->version++;
  }

// Handles keyboard events
void special(int key, int, int) {
  switch (key) {
    case GLUT_KEY_LEFT: break;
    case GLUT_KEY_DOWN: break;
    default: return;
  }

  glutPostRedisplay();
}

// Displays the graphics objects on the screen
void display() {

  glClear(GL_COLOR_BUFFER_BIT);
  glMatrixMode(GL_MODELVIEW);

  // glPushMatrix();
  // glTranslatef(0.0, 0.0, 0.0);
  // glColor3f(1.0, 1.0, 1.0);
  // glColor3f(0.3, 0.3, 0.3);
  // glutSolidSphere(0.5, 50, 50);
  // glPopMatrix();
  	
  // Optimize the graphics right away - will make big diffrence in speec
  // of the system and its training ability
  // Draw the board once!!!!!!!!!
  // DON'T redraw the pieces
  // 
	


  // Push objects to the screen
  glFlush();
}

// Handles the reshape event by setting the viewport so that it takes up the
// whole visible region, then sets the projection matrix to something reason-
// able that maintains proper aspect ratio.
void reshape(GLint w, GLint h) {
  glViewport(0, 0, w, h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPerspective(65.0, GLfloat(w)/GLfloat(h), 1.0, 20.0);
}



// Perfroms application specific initialization: turn off smooth shading,
// sets the viewing transformation once and for all.  In this application we
// won't be moving the camera at all, so it makes sense to do this.
void init() {
  glShadeModel(GL_FLAT);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  gluLookAt(1, 2, 8, 0, 0, 0, 0, 1, 0);

  // Set the background color to white
  glClearColor(1.0, 1.0, 1.0, 1.0);
}

int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutInitWindowPosition(80, 80);
	glutInitWindowSize(1000, 800);

	// Setup a timer based interrupt
	glutCreateWindow("Go_Reinforcement_Learning");
	glutDisplayFunc(display);

	glutReshapeFunc(reshape);
	glutSpecialFunc(special);

	// glutTimerFunc(100, timer, 0);
	init();
	glutMainLoop();	

	return 0;
}
