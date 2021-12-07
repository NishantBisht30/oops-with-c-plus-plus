#include<iostream>
using namespace std;

class hello1
{
    int a,b;
    public:
        void setData(int x,int y)
        {
            a = x;b = y;
        }
        void getData()
        {
            cout<<"a: "<<a<<" b: "<<b<<endl;
        }
};

int main()
{
    hello1 op1;
    return 0;
}
