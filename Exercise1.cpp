#include <iostream>
#include <cmath>
using namespace std;
class Point
{
    double _x,_y;
public:
    //default constructor
    Point();
    //parameterized constructor
    Point(double, double);
    //getter methods for private members
    double getX();
    double getY();
    //overload '-' operator so that it finds the scalar distance between two points
    friend double operator-(Point, Point);
    //implement this method so that it finds the mid point of the line joining two points
    friend Point findMidPoint(Point, Point);
    //overload '<<' operator to print the point in the format (x,y)
    friend ostream& operator<<(ostream &o, Point &p);
};
//You can implement the methods either outside or inside the class definition

//do not change the main function as it is the driver code
int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    Point p1(x1,y1), p2(x2,y2);
    double distance = p2-p1;
    Point p3 = findMidPoint(p1,p2);
    cout<<distance<<endl;
    cout<<p3;
}
