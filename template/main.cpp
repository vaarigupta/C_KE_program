#include <iostream>

using namespace std;
template <class T> //name of class is T
T Large(T n1, T n2) //we dont use int,float
{
    return (n1 >n2) ? //?  used for comparison
    n1: n2;
}
int main()
{
   int i1,i2;
   float f1,f2;
   char c1,c2;
   cout<<"enter the two numbers :"<<endl;
   cin>>i1>>i2;
   cout<< Large(i1,i2)<<"is larger"<<endl;

    cout<<"enter two floating point numbers:"<<endl;
    cin>>f1>>f2;
    cout<<Large(f1,f2)<<"is larger"<<endl;

    cout<<"enter two charcters"<<endl;
    cin>>c1>>c2;
    cout<<Large(c1,c2)<<"has larger ascii value"<<endl;

    return 0;
}
