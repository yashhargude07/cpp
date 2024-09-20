// program for reference variable..

#include<iostream>
using namespace std;
int main()
{
    int p = 50;
    int *a = &p;
    int &b = *a;
    cout<<"*a="<<*a<<"b="<<b<<endl;
    int x = 10;
    int &y = x;
    x =x + 10;
    cout<<"x="<<x<<"y="<<y<<endl;
    return 0;

}