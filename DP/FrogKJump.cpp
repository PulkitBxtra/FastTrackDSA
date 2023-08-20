#include<bits/stdc++.h>
using namespace std;

class solution{
    
    public:

    int FrogK(int n,vector<int> &arr,int k,vector<int> &dp){

        if(n==0){
            return 0;
        }

        if(dp[n]!=-1){
            return dp[n];
        }

        int mmStep=INT_MAX;

        for(int i=1;i<=k;i++){
            

            if(n-i>=0){
                int left = FrogK(n-i, arr, k, dp)+ abs(arr[n]- arr[n-i]);
                mmStep=min(mmStep,left);
            }
        }

        return dp[n]=mmStep;

    }

    int solve(int n,vector<int> arr,int k){
        vector<int> dp(n,-1);
        return FrogK(n-1,arr,k,dp);
    }
};

int main(){

    solution sol;

    vector<int> arr{30,10,60 , 10 , 60 , 50};
    int n=arr.size();
    int k=3;

    vector<int> dp(n+1,-1);

    cout<<sol.solve(n,arr,k)<<endl;


}