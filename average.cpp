//WITHOUT FUCTION

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,sum,average;
    cout<<"enter value a";
    cin>>a;
    cout<<"enter value of b";
    cin>>b;
    sum=a+b;
    average=(sum)/2;
    cout<<"sum="<<sum<<"\n";
    cout<<"average="<<average<<"\n";
    return 0;
}


//USING FUNCTION

#include<bits/stdc++.h>
using namespace std;
int add(int m,int n){
    int sum=m+n;
    int average=(sum)/2;
    cout<<"sum="<<sum;
    cout<<"average="<<average;
}
int main(){
    int a=3;
    int b=3;
add(a,b);
}
