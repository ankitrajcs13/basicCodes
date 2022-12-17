#include <iostream>
using namespace std;

// Using Iterative Approach
int fibo(int n)
{

    int fib1 = 0, fib2 = 1;
    cout << fib1 << " " << fib2 << " ";

    for (int i = 0; i < n; i++)
    {
        int fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
        cout << fib3 << " ";
    }
}

// Using Recursion
int fiborec(int n)
{

    int fib1 = 0, fib2 = 1;
    // base case
    if (n == 0 || n == 1)
    {
        return 1;
    }

    int ans = fiborec(n - 1) + fiborec(n - 2);
    return ans;
}

int main()
{

    int n;
    cout << "Enter the number to find fibonacci for: ";
    cin >> n;

    // fibo(n);

    cout << fiborec(n);

    return 0;
}
