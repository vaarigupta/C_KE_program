#include <iostream>

using namespace std;
class Point
{
public:
int x,y;
Point(int x1,int y1)
{
    x=x1;
    y=y1;

}
Point ( const Point &p2)

    {
        x=p2.x;
        y=p2.y;

    }
    int vaari()
    {
        return x;
    }
   int raavi ()
    {
        return y;
    }
};
int main()
{
    Point p1(10,14);
    Point p2=p1;

    cout<<p1.vaari()<<"\n"<<p1.raavi()<<endl;
    cout<<p2.vaari()<<"\n"<<p2.raavi()<<endl;

    return 0;
}
