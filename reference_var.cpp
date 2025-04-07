#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    //referance variables
    // shubham ----> shubh ----> duggu 
    //point same value to different variables

    float x=455;
    float &y=x;
    cout<<x<<endl;
    cout<<y<<endl;

    //Typecasting
    int a=45;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"THe value of a is: "<<(float)a<<endl;

    //proof
    cout<<sizeof(a)<<endl; //4
    cout<<sizeof((float)a)<<endl; //4

    //examples
    float abc=22.344;
    cout<<"The value of abc as integer is:"<<(int)abc<<endl; //22

    //similar
    float xxy=22.747;
    cout<<int(xxy)<<endl; //22
    cout<<(int)xxy<<endl; //22

    int xx = int(xxy);
    cout<<xx<<endl; //22

    cout<<"The expression is "<<xxy+abc<<endl; //45.091
    cout<<"THe expression is "<<xxy+int(abc)<<endl; //44.747
    cout<<"The expression is "<<int(xxy)+int(abc)<<endl; //44












    return 0;
}
