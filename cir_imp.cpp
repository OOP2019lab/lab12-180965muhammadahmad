#pragma once
#include "circle.h"
#include "shape.h"

circle::circle(float x,string xyz):shape(xyz)
{
	if(x>0)
	{
		radius=x;
	}
	else 
		cout<<"error"<<endl;
}

float circle::area()
{
	float xyz=3.14*radius*radius;
	return xyz;
}