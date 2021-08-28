#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter two numbers "<<endl;
    cin>>a>>b;

    char button;
    cout<<"enter a ooperator"<<endl;
    cin>>button;

    switch (button)
    {
 
    case '+':
    cout<<a+b;
    break;


    case '-':
    cout<<a-b;
    break;


      case '*':
    cout<<a*b;
    break;
    
        case '/':
    cout<<a/b;
    break;
    



    }




    return 0;
}