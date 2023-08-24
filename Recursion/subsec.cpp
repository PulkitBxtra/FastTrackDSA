#include<bits/stdc++.h>
using namespace std;

void f(vector<int> arr,vector<int> &ans,int n,int ind){
    if(ind==n){

        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<endl;

        return;
    }

    // if you want to print in reverse
    f(arr,ans,n,ind+1);

    ans.push_back(arr[ind]);
    f(arr,ans,n,ind+1);

    ans.pop_back();


    // // if you want to print in forward
    // ans.push_back(arr[ind]);
    // f(arr,ans,n,ind+1);

    // ans.pop_back();
    // f(arr,ans,n,ind+1);

}



int main(){
    vector<int> arr={1,2,3,4,5};
    vector<int> ans;
    f(arr,ans,5,0);


}