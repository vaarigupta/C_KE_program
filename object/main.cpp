#include <iostream>

using namespace std;
class Box
{
public:
    double length;
    double breadth;
    double height;

};
int main()
{
    Box Box1;
    Box Box2;
    double volume;

    Box1.height=6.0;
    Box1.length=7.0;
    Box1.breadth=8.0;

    Box2.height=8.0;
    Box2.length=17.0;
    Box2.breadth=13.0;

    volume=Box1.height*Box1.length*Box1.breadth;
    cout<<"volume of box1:"<<volume<<endl;

    volume=Box2.length*Box2.breadth*Box2.height;
    cout<<"volume of Box2:"<<volume<<endl;
    return 0 ;

}
