#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

    if (argc != 2) {
        fprintf(stderr, "Error: requires an argument\n");
        return 1;
    }

    string str = argv[1];

    bool parity = 0;
    for (char& c : str) {
        if (c == '1' && parity == false) parity=true;
        else if (c == '1' && parity == true) parity=false;
    }
    cout << parity << endl;

}
