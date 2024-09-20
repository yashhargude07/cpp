    //Program for working of function..

#include<iostream>
using namespace std;
int add(int x, int y)   //declaration of function
{
    int z;
    z = x + y;
    return(z);
}

int main()
{
    int a;
    a =add(100,200);  //calling a function
    cout<<"The result is :"<<a;
    return 0;
}