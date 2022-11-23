#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <iomanip>
#include <bits/stdc++.h>
#include "input.cpp"
#include "output.cpp"

#define BLANK_ROW cerr << "\n";

using namespace std;

const int NUMBER_OF_TESTCASES = 20;

int main() {
    for (int i = 1; i <= NUMBER_OF_TESTCASES; ++i) {
        cerr << "Working on test " << setw(2) << i << "-th" << "\n";

        //  * Input Generating Provess

        ofstream in_file ((to_string(i) + ".in").c_str());
        bool input_generated = generateInput(i, in_file);

        if (input_generated) {
            cerr << "\tSUCCESS!\n";
        }
        else {
            cerr << "\tERROR!\n";
        }

        in_file.close();

        //  * Output Generating Process

        ifstream inp_file ((to_string(i) + ".in").c_str());
        ofstream out_file ((to_string(i) + ".out").c_str());
        bool output_generated = generateOutput(i, inp_file, out_file);

        if (output_generated) {
            cerr << "\tSUCCESS!\n";
        }
        else {
            cerr << "\tERROR!\n";
        }

        inp_file.close();
        out_file.close();

        BLANK_ROW
    }

    return 0;
}