#ifndef RANDOMIZE_H
#define RANDOMIZE_H

#include <iostream>
#include <cstdlib>

using namespace std;

//  * Function's prototypes

int randInt(int, int);
long randInt(long, long);
long long randInt(long long, long long);
vector < int > randIntList(int, int, int);
vector < long long > randIntList(int, long long, long long);
string randStr(int, string);
// float randDouble(float a, float b);
// double randDouble(double a, double b);


//  * Function's definitions 

int randInt(int a, int b) {
    return rand() % (b - a + 1) + a;
}

long randInt(long a, long b) {
    return rand() % (b - a + 1) + a;
}

long long randInt(long long a, long long b) {
    return rand() % (b - a + 1) + a;
}

vector < int > randIntList(int arr_size = 0, int min_value = 0, int max_value = 0) {
    vector < int > result;
    if (arr_size == 0) {
        return result;
    }

    for (int i = 1; i <= arr_size; ++i) {
        result.push_back(randInt(min_value, max_value));
    }

    return result;
}

vector < long long > randIntList(int arr_size = 0, long long min_value = 0, long long max_value = 0) {
    vector < long long > result;
    if (arr_size == 0) {
        return result;
    }

    for (int i = 1; i <= arr_size; ++i) {
        result.push_back(randInt(min_value, max_value));
    }

    return result;
}

string randStr(int str_size = 0, string template_string = "qwertyuiopasdfghjklzxcvbnm") {
    if (str_size == 0) {
        return "";
    }

    string result = "";

    for (int i = 1; i <= str_size; ++i) {
        char chr = template_string[randInt(0, template_string.length() - 1)];
        result = result + chr;
    }

    return result;
}

#endif