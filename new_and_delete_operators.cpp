//program for new and delete operators..

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char *x;
    x = new char[10];
    strcpy(x, "COMPUTER");      //add the string

    cout<<"\n the string is:"<<x<<endl;
    delete x;                   //delete the string

    cout<<"\n the string after the delete:"<<x<<endl;
    return 0;
}