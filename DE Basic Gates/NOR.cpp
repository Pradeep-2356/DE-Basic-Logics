#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter the first input: ";
    cin >> a;
    cout << "Enter the second input: ";
    cin >> b;
    if(!(a|b))
        cout<<"The Output is: 1";
    else
    cout<<"The Output is: 0";
    return 0;
}
