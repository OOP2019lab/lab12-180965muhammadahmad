// lab 12.cpp : Defines the entry point for the console application.
//
#pragma once
#include<conio.h>
#include "circle.h"
#include "shape.h"
#include "rectangle.h"
#include "triangle.h"
using namespace std;
#include<iostream>

float sumArea(shape *shape1,shape *shape2)
{
	float abc=shape1->area()+shape2->area();
	return abc;
}
int main()
{
	triangle t1(1.0,9.0, "Red");
	circle c1(2, "Blue");
	rectangle r1(6,2, "Orange");
	cout<<t1.area()<<endl;
	cout<<t1.color<<endl;
	cout<<c1.area()<<endl;
	cout<<r1.area()<<endl;

	shape *sptr1= &t1;
	shape &sref=r1;
	cout<< sptr1->area()<<endl;
	cout<< sptr1->color<<endl;
	cout<< sref.color<<endl;
	cout<< sref.area()<<endl;
	shape s1("Purple");
	cout<<sumArea(&t1,&c1)<<endl;
	cout<<sumArea(&s1,&r1)<<endl;
	cout<<sumArea(&s1,&t1)<<endl;
	int count=5;
	string abc;
	float BASE=0.0,HEIGHT=0.0;
	shape** shapesArray=new shape*[count];
	for(int i=0; i<count;)
	{
		cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
		switch (_getch())
		{
		case '1':

			cout<<"Enter the height and base respectively"<<endl;
			cin>>BASE>>HEIGHT;
			cout<<"Enter the color"<<endl;
			cin>>abc;
			shapesArray[i]=new triangle(BASE,HEIGHT,abc);

			i++;
			break;
		case '2':
			cout<<"Enter the height and width respectively"<<endl;
			cin>>BASE>>HEIGHT;
			cout<<"Enter the color"<<endl;
			cin>>abc;
			shapesArray[i]=new rectangle(BASE,HEIGHT,abc);
			//get color from user as input
			// create new rectangle object and add to shapesArray[i]
			i++;
			break;

		case '3':
			float RADIUS;
			cout<<"enter the radius of circle"<<endl;
			cin>>RADIUS;
			cout<<"enter the color"<<endl;
			cin>>abc;
			shapesArray[i]=new circle(RADIUS,abc);

			i++;
			break;

		default:
			cout<<"Invalid input. Enter again." <<endl<<endl;
			break;
		}

	}

	for(int i=0;i<count;i++)
	{
		cout<<shapesArray[i]->area()<<endl;
	}
	for(int i=0;i<count;i++)
	{
		delete shapesArray[i];
	}
	delete shapesArray;
	shapesArray=nullptr;

	shape *s2= new triangle(1.0,9.0, "Red");// constructor of triangle invoked
	delete s2; //identify which destructor in invoked




	return 0;
}

