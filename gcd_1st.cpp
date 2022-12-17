#include <iostream>
using namespace std;

int gcd(int a, int b){
    //base case
    if(a == b){
        return a;
    }

    // Recursive Relation
    if(a > b){
        gcd(a-b,a);
    }
    else{
        gcd(a,b-a);
    }

}

int main(){

    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);


return 0;
}