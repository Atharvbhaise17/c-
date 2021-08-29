#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n%2==0 && n%3==0){
        cout<<"the number is divisible by both 2 and 3";
    }
    else if(n%2==0){
        cout<<"number is divisible by 2 only";
    }
    else if(n%3==0){
        cout<<"number is divisible by 3 only";

    }
    else{
        cout<<"number is not divisible";
    }
   
    return 0;
}