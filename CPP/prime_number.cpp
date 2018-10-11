#include <iostream>
using namespace std;

int arr[500000];

int main() {
    const int SIZE = 500001;
    int i, j;

    for(i = 2; i < SIZE; i++)
        arr[i] = i;

    for(i = 2; i * i < SIZE; i++) {
        if(arr[i] == 0)
            continue;
        for(j = i + i; j < SIZE; j += i)
            arr[j] = 0;
    }

    for(i = 2; i < SIZE; i++) {
        if(arr[i] != 0)
            cout << arr[i] << endl;
    }

    return 0;
}