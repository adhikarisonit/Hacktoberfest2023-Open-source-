#include <iostream>
using namespace std;

class Mother
{
public:
    Mother()
    {

    };
    void printsomething()
    {
        cout<<"C++ is awesome :"<<endl;
    }
};
class Daughter : public Mother
{
public:
    Daughter()
    {

    };
};
int main()
{
    Daughter p;
    p.printsomething();
}
