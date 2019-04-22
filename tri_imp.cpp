#pragma once

#include "shape.h"
#include "triangle.h"

triangle::triangle(float x,float y,string abc):shape(abc)
{
	base=x;
	height=y;

}

float triangle::area()
{

	float xyz=0.5*base*height;
	return xyz;
}