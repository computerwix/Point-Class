#include "point.h"
#include <iostream>
#include <math.h>

 point :: point(double p1,double p2)
{
	x = p1;
	y = p2;
}

double point :: getX()
{
	return x;
}

double point :: getY()
{
	return y;
}

void point :: showPoint() //puts the two cooridantes in point form
{
	cout << "("<< x << "," << y << ")" << endl;
}

double point:: calcDistance(point p1, point p2) //contains the arithmetic to calculte the distance 
{
	double x1 = p1.getX();
	double x2 = p2.getX();
	double y1 = p1.getY();
	double y2 = p2.getY();
	
	double distance = sqrt(pow((x1-x2),2)+ pow((y1-y2),2));// distance formula
	
	cout << "The distance is between" << 
		" ("<< x1 << "," << y1 << ")" << " and " << 
			"("<< x2 << "," << y2 << ")" 
				<< " is: " << distance;
				
}
