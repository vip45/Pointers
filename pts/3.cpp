#include "bits/stdc++.h"
using namespace std;
int main(){

    int a=10;
    int* p=&a;

    //Pointer arithmetic

    cout<<p<<endl;
    cout<<sizeof(int)<<endl;
    cout<<p+1<<endl; // it takes us to the address of the next integer
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;


}