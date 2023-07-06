// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
char str[20];int n,i,x,y;
void encode(){
    cout<<"Type the message: ";
    cin>>str;
    cout<<"Enter the number of shifts: ";
    cin>>n;
   for(i=0;str[i]!='\0';i++)
    {
        if(islower(str[i])){
        x=str[i]-'a';
        y=((x+n)%26)+'a';
    }
        else{
        x=str[i]-'A';
        y=((x+n)%26)+'A';
        }
    str[i]=y;
    }
    cout<<"The encoded message is "<<str;
}
void decode(){
    cout<<"Type the message: ";
    cin>>str;
    cout<<"Enter the number of shifts: ";
    cin>>n;
    for(i=0;str[i]!='\0';i++)
    {
        if(islower(str[i])){
        x=str[i]-'a';
        y=((x-n)%26)+'a';
    }
        else{
        x=str[i]-'A';
        y=((x-n)%26)+'A';
        }
    str[i]=y;
    }
    cout<<"The decoded message is "<<str;
}
int main() {
    string a;
    cout<<"Type encode to encrpt and decode to decrypt: ";
    cin>>a;
    if(a=="encode")
    encode();
    else if(a=="decode")
    decode();
    else{
    cout<<"Error\nExiting";
    return 0;
    }
    return 0;
}
    