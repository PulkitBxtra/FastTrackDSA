#include<bits/stdc++.h>
using namespace std;

class solution{

    public:

    int functional(int n){
        if(n==0){
            return 0;
        }

        return n + functional(n-1);
    }

};


int main(){
    solution sol;

    cout<<sol.functional(10)<<endl;
}