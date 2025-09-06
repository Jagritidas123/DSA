#include<iostream>
using namespace std;
int main(){
    int a ,b;

    cout << "Enter the value of a : "<< endl;

    cin >> a;
    
    cout << "Enter the value of b : " << endl;

    cin >> b;

    if (a>b){
        cout << " a is greater then b" << endl;

    }
    if(a<b){
        cout << "b is graeter then a"<< endl;

    }
    else{
        cout << "a and b are equal"<< endl;
    }


}