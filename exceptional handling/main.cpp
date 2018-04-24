#include <iostream>

using namespace std;

int main()
{ int x=50;
int y=0;
float z= x/y;
try {
    cout << z << endl;
}catch(const char* msg)
{
    cout<<"vaari";
}
    return 0;
}
