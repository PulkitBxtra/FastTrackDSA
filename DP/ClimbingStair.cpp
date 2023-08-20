#include<iostream>
using namespace std;

int count_stair(int n){
    if(n==0 || n==1){
        return n;
    }


    int left=count_stair(n-1);
    int right=count_stair(n-2);

    return left+right;
}

int main(){

    int n=5;

    cout<<count_stair(n)<<endl;
}