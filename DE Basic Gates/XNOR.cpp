#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter the first input: ";
    cin >> a;
    cout << "Enter the second input: ";
    cin >> b;
   int result = !(a ^ b);
   cout<<"The Output is: "<<result;
    return 0;
}
