#include "bits/stdc++.h"
using namespace std;

int main()
{
    int a = 1025;
    int *p = &a;

    cout<<sizeof(int)<<endl;
    cout<<p<<" "<<endl<<*p<<endl;

    cout << "char" << endl;

    char *p0;
    p0 = (char *)p; // typecasting

    cout << sizeof(char) << endl;
    cout <<"address : "<< p0 << endl;
    cout <<"value : "<< *p0 << endl;
}