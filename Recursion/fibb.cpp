#include<bits/stdc++.h>
using namespace std;

int fibb(int n){

    if(n==1 || n==2){
        return n+1;
    }

    return fibb(n-1)+ fibb(n-2);
}


int main(){

    int n=5;

    cout<<fibb(5)<<endl;

}