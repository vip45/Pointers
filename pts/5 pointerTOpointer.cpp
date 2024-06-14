#include "bits/stdc++.h"
using namespace std;
int main(){

    int x=5;
    int* p =&x;
    *p=6; // dereferencing
    int ** q = &p;
    int *** r = &q;

    cout<<"*p : "<<*p<<endl;
    cout<<"add of p "<<&p<<endl;
    cout<<"p : "<<p<<endl;
    // cout<<"**q : "<<*(*q)<<endl;
    cout<<"*q : "<<*q<<endl;
    cout<<"&q : "<<&q<<endl;
    
}