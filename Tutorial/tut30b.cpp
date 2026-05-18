#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class Point
{
    int x,y;
    public:
        Point(int a,int b)
        {
            x=a;
            y=b;
        }

        void displayPoint()
        {
            cout<<"The point is "<<x<<", "<<y<<endl;
        }
        friend int distance(Point,Point);
};

int distance(Point a,Point b)
{
    int dist;
    if((pow((a.x-b.x),2))>=(pow((a.y-b.y),2)))
    {
        dist=sqrt((pow((a.x-b.x),2))-(pow((a.y-b.y),2)));
    }
    else
    {
        dist=sqrt((pow((a.y-b.y),2))-(pow((a.x-b.x),2))); 
    }
    return dist;
}

int main()
{
    Point p(1,0);
    p.displayPoint();

    Point q(70,0);
    q.displayPoint();

    cout<<"The distance between the points is "<<distance(p,q);
    
    return 0;
}