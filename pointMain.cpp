#include "point.h"
#include <iostream>

using namespace std;


int main()
{
	point p1 (7,16);
	point p2 (4,20);
	p1.showPoint();
	p2.showPoint();
	p2.calcDistance(p1,p2);
	
	return 0;
}
