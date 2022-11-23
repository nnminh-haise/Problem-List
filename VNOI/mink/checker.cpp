#include <bits/stdc++.h>

using namespace std;

string answer_output = "", result_output = "";

int main() {
    ifstream answer ("mink.out");
    ifstream result ("mink_result.out");
    
    while (!answer.eof()) {
        char x;
        answer >> x;
        answer_output += x;
    }
    cout << answer_output << endl;
    answer.close();
    result.close();
}