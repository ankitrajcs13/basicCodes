#include <iostream>
using namespace std;

int fact(int n){

     // base case
    if(n == 1)
        return 1;

    // Recursive Relation

    return n * fact(n-1);

}


int main(){

    int n;
    cout<<"Enter the number to find factorial for: ";
    cin>>n;

    cout<< fact(n);

return 0;
}