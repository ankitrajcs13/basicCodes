#include <iostream>
using namespace std;


// Iterative Approach
int checkPrime(int n){
    int flag =0;
    for (int i = 2; i < n/2; i++)
    {
        if(n % i == 0){
            flag = 1;
        }
    }
    if(flag == 1){
        cout<<n<<" is not a Prime Number";
    }
    else{
        cout<<n<< " is a Prime Number";
    }
}

int checkPrimeRec(int n){


    // base case
    if(n == 1)
        return 1;

    // Recursive Relation

    return checkPrimeRec(n-1);
}






int main(){

    int n;
    cout<<"Enter to number to check for Prime: ";
    cin>>n;

    //checkPrime(n);

    checkPrimeRec(n);


return 0;
}