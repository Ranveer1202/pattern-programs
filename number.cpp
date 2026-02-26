#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<i;
        if(i==1){
            cout<<endl;
            continue;
        }
        else{
        for(int j=1;j<=2*i-3;j++){
            cout<<" ";
        }
        cout<<i<<endl;}


    }
     for(int i=n-1;i>0;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<i;
        if(i==1){
            cout<<endl;
            continue;
        }
        else{
        for(int j=1;j<=2*i-3;j++){
            cout<<" ";
        }
        cout<<i<<endl;}


    }
}