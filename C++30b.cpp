#include <iostream>
#include <math.h>

using namespace std;

class Point{
    int x,y;
    friend void distanceBetPoints(Point,Point);
    public:
        Point(int a,int b){
            x = a;
            y = b;
        }
        void displayPoint(void){
            cout<<"The point is ("<<x<<","<<y<<")"<<endl;
        };

        
};
//Create a function which takes 2 point objects and computes the distance between two points.(Hint:Make it a friend function).
void distanceBetPoints(Point i,Point j){
    float dist = pow(pow((i.x-j.x),2) + pow((i.y-j.y),2) ,0.5);
    cout<<"The distance between the points ("<<i.x<<","<<i.y<<") and ("<<j.x<<","<<j.y<<") is "<<dist<<endl;
}

int main()
{
    Point p(0,2);
    Point q(0,6);
    p.displayPoint();
    q.displayPoint();
    distanceBetPoints(p,q);
    return 0;
}
