#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    //do-while loop
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=40);

    //infinite loop example
    do{
        cout<<i<<endl;
        i++;
    }while(1);
    return 0;
}
