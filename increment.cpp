#include<iostream>
using namespace std;

int main(){
 
 int i;
 i=1;
 //1    //3        initially i++ become 1 and i will become 2 and while doing ++ i it will incremented by 1 so it will become 3
 i = i++ + ++i;

cout<<i;

    return 0;
}