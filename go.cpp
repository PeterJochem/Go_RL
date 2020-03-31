#include <iostream>
#include <vector>
#include <stdio.h>

// #include <tensorflow/c/c_api.h>

#ifndef PLAYER_H
#define PLAYER_H
#include "Player.h"
#endif

#ifndef GROUP_H
#define GROUP_H
#include "Group.h"
#endif

#ifndef GAME_H
#define GAME_H
#include "Game.h"
#endif

#ifndef BOARD_H
#define BOARD_H
#include "Board.h"
#endif

#ifndef MOVE_H
#define MOVE_H
#include "Move.h"
#endif

#ifdef __APPLE_CC__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include </usr/include/python3.6m/Python.h>


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

  glPushMatrix();
  // glTranslatef(0.0, 0.0, 0.0);
  // glColor3f(1.0, 1.0, 1.0);
  // glColor3f(0.3, 0.3, 0.3);
  // glutSolidSphere(0.5, 50, 50);
  // glPopMatrix();
  	
  // Optimize the graphics right away - will make big diffrence in speec
  // of the system and its training ability
  // Draw the board once!!!!!!!!!
  // DON'T redraw the pieces
  
  //color red 0.847059 green 0.847059 blue 0.74902
  glColor3f(0.847, 0.847, 0.74902);
  glBegin(GL_POLYGON);
  glVertex3f(-2.0, 2.0, 0.0);
  glVertex3f(2.0, 2.0, 0.0);
  glVertex3f(2.0, -2.0, 0.0);
  glVertex3f(-2.0, -2.0, 0.0);
 glEnd(); 
 	
glColor3f(0.2, 0.2, 0.2);
  glBegin(GL_POLYGON);
  glVertex3f(-2.0, 0.025, 0.0);
  glVertex3f(2.0, 0.025, 0.0);
  glVertex3f(2.0, -0.025, 0.0);
  glVertex3f(-2.0, -0.025, 0.0);
 glEnd();

	

  glTranslatef(0.0, 0.0, 0.0);
  glColor3f(1.0, 1.0, 1.0);
  //glColor3f(0.3, 0.3, 0.3);
  glutSolidSphere(0.1, 50, 50);
  glPopMatrix();


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
  //gluPerspective(65.0, GLfloat(w)/GLfloat(h), 1.0, 20.0);
  gluPerspective(50.0, GLfloat(w)/GLfloat(h), 1.0, 20.0);

}


// Perfroms application specific initialization: turn off smooth shading,
// sets the viewing transformation once and for all.  In this application we
// won't be moving the camera at all, so it makes sense to do this.
void init() {
  glShadeModel(GL_FLAT);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  //gluLookAt(1, 2, 8, 0, 0, 0, 0, 1, 0);
  gluLookAt(0, 0, 8, 0, 0, 0, 0, 1, 0);

  // Set the background color to white
  glClearColor(1.0, 1.0, 1.0, 1.0);
}


int main(int argc, char** argv) {

	// Launch the training client
	// This Python script will handle do the NN training via keras
	// This C++ system will generate data	
	std::string filename = "../training.py";
	std::string command = "python3 ";
	command += filename;
	system(command.c_str());

	Player myPlayer;
	
	Group myGroup;
	Move myMove(1, 4);
	myGroup.addPiece(myMove);
	std::cout << myGroup;

	// Start the openGL loop
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
