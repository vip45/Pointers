#include "bits/stdc++.h"
using namespace std;
int main()
{

    int a = 10;
    int *p = &a;

    cout << p << endl;
    cout << &a << endl;
    cout << *p << endl;
    cout<<"pss "<<&p<<endl;

    *p = 11;

    cout << *p << endl;
    cout << a << endl;

    cout << "b is from herw" << endl;
    int b = 20;

    *p = b;
    p = &b;

    cout << b << endl;
    cout << *p << endl;
    cout << p << endl;
    cout << &b << endl;
    cout<<&p<<endl;
}