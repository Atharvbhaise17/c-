#include<iostream>
using namespace std;

int main(){
 
   int savings ;
   cin>>savings;

 if(savings>5000){
     if(savings>10000){
         cout<<"go for road trip \n";
     }
         else{
             cout<<"go for shopping \n";
         }
     }
 else if(savings>2000){
     cout<<"go with neha \n";
 }else{

     cout<<"go with friends";
 }

    return 0;
}