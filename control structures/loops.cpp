#include<iostream>
using namespace std;
int main(){
    //three types of loops in cpp
    // 1.while loop 
    //2. for loop
    //3 . do-while loop

    //for loop in cpp

    // for (initialisation; condition; updation)
    //i+0 ko ek baar run krega, fr kabhi ni krega
    for(int i=0;i<10;i++)
    {
        cout<<i<<endl;
    }

    //example of infinite loop
    for (int i=1;54<55;i++){
        cout<<"aabra ka dabra: "<<i<<endl;
    }
    
    return 0;
}