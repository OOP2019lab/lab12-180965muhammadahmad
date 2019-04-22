#include <iostream>
using namespace std;
#include<string>

#include "shape.h"

class circle:public shape
{
private:
	float radius;
public:
	float area();
	circle(float,string);
	~circle() { cout << "~ circle () called."<<endl;  	}

};