#include<bits/stdc++.h>
using namespace std;


//******************************** Tabular Solution **************************

int main(){
    int n=5;

    int prev1=1;
    int prev2=0;

    for(int i=0;i<=n;i++){
        int prev=prev1+prev2;
        prev2=prev1;
        prev1=prev;
    }

    cout<<prev1<<endl;
}



// **************************** Memoisation Solution **************************


// int fibb(int n, vector<int> &dp){

//     if(n==1 || n==2){
//         return n+1;
//     }

//     if(dp[n]!=-1){
//         return dp[n];
//     }

//     return dp[n]= fibb(n-1,dp)+ fibb(n-2,dp);
// }


// int main(){

//     int n=5;

//     vector<int> dp(n+1,-1);

//     cout<<fibb(5,dp)<<endl;

// }