#include <iostream>
#include <string>
#include "Ciphertext.h"
using namespace std;

int main() {

    int key;
    string result = "";
    cin >> key;
    string str = "hello";
    cout << str << endl;
    for (int i = 0; i < str.length(); i++)
        result += encryption(transInt(str[i]) + key);

    cout << result << endl; // 密文

    str = "";
    for (int i = 0; i < result.length(); i++)
        str += deciphering(transInt(result[i]) - key);

    cout << str << endl;

    return 0;
}