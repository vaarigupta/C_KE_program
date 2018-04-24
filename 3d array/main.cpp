#include <iostream>

using namespace std;
class Area
{
public :
    double length;
    double width;
};
int main()
{ Area a1;
Area a2;
double rectangle;

a1.length=23;
a1.width=67;

a2.length=34;
a2.width=12;

 rectangle=a1.length*a1.width;
 {
     cout<<"area of rectangle:"<<rectangle<<endl;

 }

 rectangle=a2.length*a2.width;
 {
     cout << "area of rectangle:" << rectangle<<endl;
 }

    return 0;
}
