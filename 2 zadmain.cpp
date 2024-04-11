#include <iostream>
#include <math.h>>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class Rectangle {

	public:
    	double a;
    	double b;
    	Rectangle(double a, double b);
    	Rectangle();
    	virtual double calculateArea();
    	double GetA();
    	double GetB();
};
Rectangle::Rectangle()
{
	a=0;
	b=0;
}
double Rectangle::GetA()
{
	return a;
}
double Rectangle::GetB()
{
	return b;
}
Rectangle::Rectangle(double a,double b)
{
	this->a=a;
	this->b=b;
}

double Rectangle::calculateArea()
{
	return a*b;
}

class RightTriangle : public Rectangle {
	public:
	    double h;
	    double GetH();
	    RightTriangle(double b,double h);
	    RightTriangle();
	    virtual double calculateArea();
};

RightTriangle::RightTriangle()
{
	h=0;
}
RightTriangle::RightTriangle(double b,double h):Rectangle(b,h)
{
	this->h=h;
}
double RightTriangle::GetH()
{
	return h;
}
double RightTriangle::calculateArea()
{
	return 0.5*b*h;
}


int main() {
	double a,b,h;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	cout<<"Enter h:";
	cin>>h;
	
    Rectangle rectangle(a, b);
    RightTriangle triangle(b, h);

    std::cout << "Area of rectangle: " << rectangle.calculateArea()<<endl;
    std::cout << "Area of right triangle: " << triangle.calculateArea()<<endl;

    return 0;
}
