#include<bits/stdc++.h>
using namespace std;

class Basic{

    public:

    void printName5Times(int n){
        if(n==0){
            return;
        }
        
        cout<<"Name"<<endl;
        printName5Times(n-1);
    }

    void PrintLinearlyFrom1toN(int n){
        if(n==0){
            return;
        }

        PrintLinearlyFrom1toN(n-1);
        cout<<n<<endl;
    }

    void PrintLinearlyFromNto1(int n,int i){
        if(i==n){
            return;
        }

        cout<<i+1<<endl;
        PrintLinearlyFromNto1(n,i+1);
    }

};


int main(){

    Basic solution;

    // solution.printName5Times(5);
    // solution.PrintLinearlyFrom1toN(5);
    solution.PrintLinearlyFromNto1(5,0);

}