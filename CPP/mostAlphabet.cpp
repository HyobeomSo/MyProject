#include <iostream>
#include <cstring>
#include <string>

int arr[26];

int main() {
    using namespace std;
    string s;
    int i;

    while(getline(cin, s)) {
        int len = s.size();

        for(i = 0; i < len; i++) {
            if(s[i] < 96 && 64 < s[i]) {
                arr[s[i] - 65]++;
            }
            else if(s[i] < 123 && 96 < s[i])
                arr[s[i] - 97]++;
        }
    }

    int max = arr[0];

    for(i = 0; i < 25; i++) {
        if(max < arr[i + 1])
            max = arr[i + 1];
    }

    char c;
    
    for(i = 0; i < 26; i++) {
        if(arr[i] == max) {
            c = i + 97;
            cout << c;
        }
    }

    return 0;
}