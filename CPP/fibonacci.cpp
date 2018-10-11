#include <iostream>

using namespace std;

unsigned long long dp[1000];

unsigned long long fib(int n) {
    if(n == 0)
        return 0;
    else if(n < 3)
        return 1;
    if(dp[n] != 0)
        return dp[n];
    
    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "숫자 입력: ";
    cin >> n;
    int i;
    for(i = 0; i < n + 1; i++)
        cout << fib(i) << endl;

    return 0;
}