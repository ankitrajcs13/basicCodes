#include <iostream>
#include<math.h>
using namespace std;
int main(){

    int num;
    cout<<"Enter the number to reverse: ";
    cin>>num;
    int ans = 0,digit, i = 0;
 
    while (num!=0)
    {
        digit = num %10;
        ans = ans * 10 + digit;
        num /= 10;
    }
    cout<<ans;
    


return 0;
}