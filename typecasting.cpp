#include<iostream>
using namespace std;

int c=45;

int main()
{
    int a,b,c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;

    c=a+b;

    cout<<"The sum is c "<<c<<endl;

    //taking value of global c, 35
    cout<<"The value of global c is: "<<::c; //:: scope resolution operator

    cout<<endl;
    float d=34.4;
    long double e=34.4;
    cout<<"The value of d is "<<d<<endl<<"The value of e is:"<<e<<endl;

    //Here 34.4 is treated as DOUBLE in C++ BY DEFAULT, NOT float
    //specify as floating point number
    //34.4f = will pass as floating number NOT double

    float k=34.4f;
    long double ld=34.4l; //small l is used
    cout<<"The value of k is: "<<k<<endl;
    cout<<"The value of long double is: "<<ld<<endl;

    //proof
    // cout<<"The size of 34.4f is: "<<sizeof(k)<<endl;
    // cout<<"The size of 34.4l is: "<<sizeof(ld)<<endl;
    // cout<<"The size of 34.4 in d is: "<<sizeof(d)<<endl;
    // cout<<"The size of 34.4 in e is: "<<sizeof(e)<<endl;

    cout<<"The size of 34.4f is: "<<sizeof(34.4f)<<endl; //4
    cout<<"The size of 34.4l is: "<<sizeof(34.4l)<<endl; //16
    cout<<"The size of 34.4 in d is: "<<sizeof(34.4)<<endl; //8
    cout<<"The size of 34.4 in e is: "<<sizeof(34.4)<<endl; //8

    











    return 0;
}
