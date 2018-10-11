#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "type word: ";
    cin >> word;

    char temp;
    int i, j;

    for(i = 0, j = word.size() - 1; i < j; i++, j--) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }

    cout << word;

    return 0;
}