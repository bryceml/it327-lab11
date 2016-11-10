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
    //Reverse String
    int n = str.length();
    for (int i=0; i<n/2; i++) {
        swap (str[i], str[n-i-1]);
    }

    bool crc[8] = {false};
    bool crcnext[8];

    for (char& c : str) {
        bool b = c == '1';
        crcnext[0] = b;
        crcnext[1] = crc[0];
        crcnext[2] = crc[1] ^ crc[7];
        crcnext[3] = crc[2] ^ crc[7];
        crcnext[4] = crc[3] ^ crc[7];
        crcnext[5] = crc[4];
        crcnext[6] = crc[5];
        crcnext[7] = crc[6];
        for (int i = 0; i<8; i++) {
            crc[i] = crcnext[i];
        }
        for (int i = 0; i<8; i++) {
            cout << crc[i];
        }
        cout << endl;
    }

    for (int i = 0; i<8; i++) {
        cout << crc[i];
    }

    cout << endl;

}
