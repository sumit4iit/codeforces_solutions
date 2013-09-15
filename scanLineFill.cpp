/*
**************************************************
Author: Sumit Agrawal.
Roll No: 1000101
Date  :30-1-2013.
**************************************************
Graphics Lab Assignment II:
2D Transformation on the objects.
By default this programs supports transitions on objects with 100 vetrtices.
For more tou can edit size variable which is constant and globally declared and set it to the number of vertices you want.
This source file combines solution two both of the problems mentioned in the assignment.
This program can be used for any educational purpose.
(c) Sumit Agrawal. 2013.
*/
#include "stdafx.h"
#include <windows.h>
#include <GL/GL.h>
#include <GL/GLU.h>
#include <GL/glut.h>
#include <iostream>
#include <math.h>
#include <list>
#include<vector>
using namespace std;
struct vertex
{
	double x;
	double y;
};
struct color
{
	float r; 
	float g; 
	float b;
};
float x_max =0;
float x_min = 100000;
float y_max =0;
float y_min = 100000;
int size;
color boundry,flood;
vertex v1,v2;
vertex object[10];
void myInit(void)
{
     glClearColor(1.0,1.0,1.0,0.0);
     glColor3f(0.0f, 0.0f, 0.0f);
     glPointSize(1.0);
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
     gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

struct node
{
	node *next;
	float val;
};
class List{
	node* root;
	node* end;
	List()
	{
		root = NULL;
		end = NULL;
	}
	void add(float val)
	{
		if(root=NULL)
		{
			root = new node();
			root->val = val;
		}
		else
		{
			end = new node();
			end->val = val;
			end->next = NULL;
			end = end->next;
		}
	}

}
;
void flood_fill(GLfloat x, GLfloat y, color boundry, color flood)
{
	float y_range = y_max-y_min; // total range of y values.
	float x_range = x_max-x_min;
	float data[3];
	for(int i=0 ;i<y_range; i++)
	{
		for(int j=0 ; j< x_range;  j++ )
		{
			glReadPixels(x+j,y+i,1,1,GL_RGB, GL_FLOAT, data);
			if(data[0] == boundry.r && data[0] == boundry.g && data[0] == boundry.b)
			{
			
			}
		}
	}
}
void myDisplay(void)
{
	glColor3d(boundry.r,boundry.g,boundry.b);	
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_LOOP);
	for(int i=0 ; i< size ; i++)
	{
		glVertex2d(object[i].x, object[i].y);
	}
	glEnd();
	flood_fill(v1.x,v1.y,boundry,flood);
	glFlush();
}



void initialize()
{
	cout<<"Please enter the number of vertices\n";
	cin>>size;
	for(int i=0 ; i< size ; i++)
	{
		cout<<"X, Y:\n";
		cin>>object[i].x>>object[i].y;
		if(object[i].x > x_max) x_max = object[i].x;
		if(object[i].y > y_max) y_max = object[i].y;
		if(object[i].x < x_min) x_min = object[i].x;
		if(object[i].x < y_min) y_min = object[i].y;

	}
	cout << "Color_boundry : r , g , b :";
	cin>>boundry.r>>boundry.g>>boundry.b;
	cout<<"color_flood : r , g , b : ";
	cin>>flood.r>>flood.g>>flood.b;
	cout<<"seed\n X , Y :";
	cin>>v1.x>>v1.y;

}

void main(int argc, char **argv)
{
	initialize();
     glutInit(&argc, argv);
     glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
     glutInitWindowSize(640, 480);
     glutInitWindowPosition(100, 150);               
     glutCreateWindow("my first attempt");
     glutDisplayFunc(myDisplay);
     myInit();
     glutMainLoop();
}     
     
