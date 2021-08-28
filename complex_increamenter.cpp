#include<iostream>
using namespace std;

int main(){
int k;
int i=1;
int  j=2;

k=i + j + i++ + j++ + ++i + ++j ;
cout<<k<<endl;

cout<<i<<j <<k;

}