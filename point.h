#ifndef POINT_H
#define POINT_H

using namespace std;

class point
{
	public:
		double getX(); //returns x value
		double getY(); //returns y value
		void showPoint();//displays point
		double calcDistance(point p1, point p2);//calculates distance between two points
	
	point(double p1= 0,double p2 = 0);//contrust with x and y set to 0
	
	private:
		double x;
		double y;	
};

#endif
