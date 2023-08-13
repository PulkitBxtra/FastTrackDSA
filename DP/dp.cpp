#include<bits/stdc++.h>
using namespace std;

int fibb(int n, vector<int> &dp){

    if(n==1 || n==2){
        return n+1;
    }

    if(dp[n]!=-1){
        return dp[n];
    }

    return dp[n]= fibb(n-1,dp)+ fibb(n-2,dp);
}


int main(){

    int n=5;

    vector<int> dp(n+1,-1);

    cout<<fibb(5,dp)<<endl;

}