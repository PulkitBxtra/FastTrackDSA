#include<bits/stdc++.h>
using namespace std;


void f(int i,vector<int> arr,vector<int> &temp,int sum,int s){

    int n=arr.size();

    if(i==n){
        if(s==sum){
            for(auto it:temp){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }

    f(i+1,arr,temp,sum,s+arr[i]);
    temp.push_back(arr[i]);
    f(i+1,arr,temp,sum,s-arr[i]);
    temp.pop_back();

    return;

}

int main(){

    vector<int> arr={1,2,3,4,5};
    vector<int> temp;

    f(0,arr,temp,5,0);

}