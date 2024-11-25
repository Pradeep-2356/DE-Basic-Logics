#include<iostream>
using namespace std;
int main(){
    int binary[4];
    cout<<"Enter 4 bit binary number: ";
    for(int i=0;i<4;i++){
         cin>>binary[i];
    }

    cout<<"Your Binary Number is: ";

    for(int i=0; i<4; i++){
        cout<<binary[i];
    }
        cout<<endl;

    cout<<"Converting to Gray Code..."<<endl;

    int temp[4];
    temp[0] = binary[0];
    temp[1] = binary[0] ^ binary[1];
    temp[2] = binary[1] ^ binary[2];
    temp[3] = binary[2] ^ binary[3];
    cout<<"Gray Code is: ";
    for(int i=0; i<4; i++){
    cout<<temp[i];
    }
    return 0;
}