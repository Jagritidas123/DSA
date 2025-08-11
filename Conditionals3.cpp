// Number positive, negative or 0
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number:"<< endl;
    cin>>a;
    if(a>0){
        cout<<"No.is positive"<<endl;
    }
    if(a<0){
        cout<<"No.is negative"<<endl;
    }
    if(a=0){
        cout<<"No.is 0"<<endl;
    }
}