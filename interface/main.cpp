#include <iostream>

using namespace std;
class Shape
{
public :
    void setwidth( int w)
    {
        width=w;
    }
    void setheight( int h)
    {
        height=h;
    }
protected :
    int width;
    int height;
};
 class Rectangle : public Shape
 {
 public:
    int getarea()
    {
        return(width*height);
    }
 };
int main()
{
   Rectangle r;
   r.setwidth(6);
   r.setheight(8);
   cout<<"total area:"<<r.getarea()<<endl;
    return 0;
}
