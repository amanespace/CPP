#include<iostream>
#include "this.h"
//hower <iostream> press ENTER
// There are two types of header files
// system header files - comes with compiler 
// user defined header files - written by programmer 

int main(int argc, char const *argv[])
{
    std::cout<<"This is hello world program.\n";
    //newline new way
    std::cout<<"New line using endl."<<std::endl;
    // operators 
    std::cout<<"Operators in c++"<<std::endl;
    std::cout<<"Following are the list of operators in cpp"<<std::endl;

    //aritmetic operator
    int a=2,b=4;
    std::cout<<"THe value of a+b is "<<a+b<<std::endl;
    std::cout<<"THe value of a-b is "<<a-b<<std::endl;
    std::cout<<"THe value of a*b is "<<a*b<<std::endl;
    std::cout<<"THe value of a/b is "<<a/b<<std::endl;
    std::cout<<"The value of a%b is "<<a%b<<std::endl;

    std::cout<<"The value of a++ is "<<a++<<std::endl; //a (2) print hoga, pr aage 3 bnkr jayega
    std::cout<<"The value of a-- is "<<a--<<std::endl; //3 print hoga pr aage 2 bnkr jayega(1 km hokr)
    std::cout<<"The value of ++a is "<<++a<<std::endl; //wo 2 pehle 3 banega fr print hoga( 3 print hoga)
    std::cout<<"The value of --a is "<<--a<<std::endl; // wo 3 pehle 2 banega fr 2 print hoga

    /*
    THe value of a+b is 6
    THe value of a-b is -2
    THe value of a*b is 8
    THe value of a/b is 0
    The value of a%b is 2
    The value of a++ is 2
    The value of a-- is 3
    The value of ++a is 3
    The value of --a is 2
    */

    //assignment operators
    int A=3,B=5;
    char character = 'f';


    //comparison operator
    std::cout<<std::endl;
    std::cout<<"Following are the comparison oparators:\n";
    std::cout<<"The value of A==B is "<<(A==B)<<std::endl; //0
    std::cout<<"The value of A!=B is "<<(A!=B)<<std::endl; //1
    std::cout<<"The value of A>B is "<<(A>B)<<std::endl; //0
    std::cout<<"The value of A<B is "<<(A<B)<<std::endl; //1
    std::cout<<"The value of A>=B is "<<(A>=B)<<std::endl; //0
    std::cout<<"The value of A<=B is "<<(A<=B)<<std::endl; //1

    //logical operators
    std::cout<<std::endl;
    std::cout<<"Following are the logical operators"<<std::endl;
    int k=10,l=20;
    std::cout<<"The value of (k==l)&&(k<l) is: "<<((k==l)&&(k<l))<<std::endl;
    std::cout<<"The value of (k==l)or(k<l) is: "<<((k==l)||(k<l))<<std::endl;
    std::cout<<"The value of (!(k==l)) is "<<(!(k==l))<<std::endl; //1 //it just reverse the answer if (k==l)

    

    
    return 0;
}
