#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

    if (argc != 3) {
        fprintf(stderr, "Error: requires two arguments\n");
        return 1;
    }

    string str = argv[1];

    bool parity = 0;

    for (char& c : str) {
        if (c == '1' && parity == false) parity=true;
        else if (c == '1' && parity == true) parity=false;
    }

    cout << "Parity:" << parity << endl;

    if (parity) {
        if (*argv[2] == '1') cout << "Correct" << endl;
        else cout << "Incorrect" << endl;
    } else {
        if (*argv[2] == '0') cout << "Correct" << endl;
        else cout << "Incorrect" << endl;
    }
}
