#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=34;
    cout<<"The value of a was:"<<a<<endl;
    a=45;
    cout<<"The value of a is:"<<a<<endl;

    char c='k';
    c='s';
    cout<<c<<endl;

    //But i want to fix it. DOnt want to change value.
    const int als=3;
    cout<<als<<endl;

    const float flt=3.22;
    cout<<flt<<endl;

    //manupulators - used to format code in proper way

    //including <iomanip>
    //fist is endl(from iostream), second is setw(from iomanip)
    int x=2,y=3,z=4;
    cout<<"The value of x is: "<<x<<endl;
    cout<<"The value of y is: "<<y<<endl;
    cout<<"The value of z is: "<<z<<endl;

    cout<<"The value of x is: "<<setw(4)<<x<<endl;
    cout<<"The value of y is: "<<setw(4)<<y<<endl;
    cout<<"The value of z is: "<<setw(4)<<z<<endl;
    //setwidth gives width of 4 character to forward entities

    //operator precidence
    int alpha=3,beta=4;
    int gamma=alpha*5+beta;
    cout<<gamma<<endl;
    


    return 0;
}
