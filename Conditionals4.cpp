// Seeing if a charecter is Lowercase,Uppercase,Numeric
#include<iostream>
using namespace std;
int main(){
    char C;
    cout << "Enter the charecter:"<<endl;
    cin>>C;
    if(C >='A' and C<= 'Z'){
        cout<<"Its Uppercase"<<endl;

    }
    if(C >= 'a' and C<= 'z'){
        cout<<"Its LowerCase"<<endl;

    }
else(C>=0 and C<=9);{
    cout<<"Its Numeric"<<endl;
}

}