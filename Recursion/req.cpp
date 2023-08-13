#include<bits/stdc++.h>
using namespace std;

int factorial(int n){

    //base case (mandatory)
    if(n==0){
        return 1;
    }


    //recurrance relation
    cout<<n<<endl;

    return n* factorial(n-1);
}


int main(){

    int n=5;

    cout<<factorial(5)<<endl;



}