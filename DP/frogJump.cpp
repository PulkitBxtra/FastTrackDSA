#include<bits/stdc++.h>
using namespace std;

class solution{
    public:

    int jump(int n,int arr[]){
        
        if(n==0){
            return 0;
        }

        int left=jump(n-1,arr)+ abs(arr[n] - arr[n-1]);
        int right=INT_MAX;

        if(n>1){
            right=jump(n-2,arr)+ abs(arr[n] - arr[n-2]);
        }

        return min(right,left);
        

    }

};


int main(){
    int n;
    n=5;

    solution sol;

    int arr[5]={1,2,3,4,5};
    cout<<sol.jump(n,arr)<<endl;

}