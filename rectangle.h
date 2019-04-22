#pragma once
#include<iostream>
using namespace std;
#include<string>

#include "shape.h"

class rectangle:public shape
{
private:
	float width;
	float height;

public:
	float area();
	rectangle(float,float,string);
	~rectangle(){ cout << "~rectangle() called."<<endl;   }
};