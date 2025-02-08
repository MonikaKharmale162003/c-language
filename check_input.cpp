#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character";
    cin>>ch;
    if(ch>='A'&& ch<='Z'|| ch>='a'&& ch<='z'){
        cout<<"it is alphabate";
    }
    else if(ch>'0'&& ch<='9'){
        cout<<"it is number";
    }
    else{
        cout<<"it is special character";
    }
    return 0;
}