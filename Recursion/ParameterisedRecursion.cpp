#include<bits/stdc++.h>
using namespace std;

class solution{

    public:

    void calc(int n,int sum){
        if(n==0){
            cout<<sum<<endl;
            return;
        }

        calc(n-1,sum+n);
        return;
    }

};

int main(){

    solution sol;

    sol.calc(10,0);
    
}