#include<iostream>
using namespace std;
class ABC;
class XYZ
{
private:
    int x;
public:
    void setvalue(int i)
    {
        x=i;
    }
    friend void max(ABC,XYZ);
};
// new class definiton
class ABC
{
private:
    int y;
public:
    void setvalue(int j)
    {
        y=j;
    }
    friend void max(ABC,XYZ);
};
void max (ABC Y1,XYZ X1)
{
if (X1.x>Y1.y)
cout<< "greatest number is:"<<X1.x;
else
cout<<"greatest number is:"<<Y1.y;
}

// main function
int main()
{
XYZ a;
ABC b;
a.setvalue(10);
b.setvalue(9);
max(b,a);
return 0;
}