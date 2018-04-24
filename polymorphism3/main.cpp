#include <iostream>

using namespace std;
class Animal
{
   public:
    void Eat()
    {
        cout<<"forest";
    }
};
class Lion : public Animal
{
public:
void Eaten()
{
    cout<<"trees";
}
};
int main()
{ Lion l1 = Lion();
l1.Eaten();
 Animal a1= Animal();
 a1.Eat();


    return 0;
}
