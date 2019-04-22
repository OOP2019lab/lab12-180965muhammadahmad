#pragma once
#include"rectangle.h"

#include "shape.h"

rectangle::rectangle(float a,float b,string abc):shape(abc)
{
	width=a;
	height=b;
}
float rectangle::area()
{
	float xyz= height*width;
	return xyz;
}