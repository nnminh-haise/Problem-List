#include <bits/stdc++.h>

using namespace std;

const char TEMPLATESTRING[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890wertyuiopasdfghjklzxcvbnm";

/**
 * It returns a random integer between min_value and max_value, inclusive
 * 
 * @param min_value The minimum value that the random number can be.
 * @param max_value The maximum value that the random number can be.
 * 
 * @return A random integer between min_value and max_value.
 */
int randInteger(int min_value, int max_value) {
    return rand() % (max_value - min_value + 1) + min_value;
}

/**
 * Return a random character from the given string.
 * 
 * @param template_string The string that contains the characters that you want to choose from.
 * @param template_length The length of the template string.
 * 
 * @return A random character from the template string.
 */
char randCharacter(const char* template_string, const int left, const int right) {
    return template_string[randInteger(left, right)];
}

/**
 * It generates a random string.
 * 
 * @param string_length the length of the string you want to generate.
 * @param include_letter whether to include letters in the string
 * @param include_capital whether to include capital letters
 * @param include_number whether to include numbers in the string
 * 
 * @return A pointer to a char array.
 */
char* getRandomCSTring(const int string_length = 18, bool include_letter = true, bool include_capital = false, bool include_number = false) {
    char* str = new char [string_length];
    int left = -1, right = -1;
    
    if (include_letter and include_capital and include_number)
        left = 0, right = 61;

    if (include_letter and include_capital and !include_number)
        left = 0, right = 51;

    if (include_letter and !include_capital and include_number)
        left = 52, right = 87;

    if (include_letter and !include_capital and !include_number)
        left = 0, right = 25;

    if (!include_letter and include_capital and include_number)
        left = 26, right = 61;

    if (!include_letter and include_capital and !include_number)
        left = 26, right = 51;

    if (!include_letter and !include_capital and include_number)
        left = 52, right = 61;

    if (!include_letter and !include_capital and !include_number) {
        cout << "Error\n";
        return str;
    }

    for (int i = 0; i < string_length; ++i) {
        str[i] = randCharacter(TEMPLATESTRING, left, right);
    }

    return str;
}

/**
 * Get the length of a C-style string.
 * 
 * @param str The string to check.
 * 
 * @return The length of the string.
 */
int getCStringLength(char* str) {
    int index = 0;
    while ((str[index] >= 'a' and str[index] <= 'z') or (str[index] >= 'A' and str[index] <= 'Z') or (str[index] >= '0' and str[index] <= '9') or (str[index] == ' ')) {
        ++index;
    }
    return index;
}

void printCString(char* str) {
    int n = getCStringLength(str);
    cout << "\"";
    for (int i = 0; i < n; ++i) {
        cout << str[i];
    }
    cout << "\"\n";
    return;
}

class Bai1 {
    public:
        char* upper(char* str) {
            int n = getCStringLength(str);
            char* res = new char[n];
            for (int i = 0; i < n; ++i) {
                res[i] = (str[i] < 'A' or str[i] > 'Z' ? (char)(str[i] - abs('a' - 'A')) : str[i]);
            }
            return res;
        }

        Bai1() {
            cout << __func__ << "\n\n";

            char* s = getRandomCSTring(18, true, true, false);
            cout << "Chuoi s: ";
            printCString(s);
            cout << "Chuoi upper(s): ";
            printCString(upper(s));

            return;
        }
};

class Bai2 {
    public:
        char* lower(char* str) {
            int n = getCStringLength(str);
            char* res = new char[n];
            for (int i = 0; i < n; ++i) {
                res[i] = (str[i] < 'a' or str[i] > 'z' ? (char)(str[i] + abs('a' - 'A')) : str[i]);
            }
            return res;
        }

        Bai2() {
            cout << __func__ << "\n\n";

            char* s = getRandomCSTring(18, true, true, false);
            cout << "Chuoi s: ";
            printCString(s);
            cout << "Chuoi lower(s): ";
            printCString(lower(s));

            return;
        }
};

class Bai3 {
    public:
        char* proper(char* str) {
            int n = getCStringLength(str);
            char* res = new char[n];

            for (int i = 0; i < n; ++i) {
                res[i] = str[i];
                if ((i == 0) or (str[i - 1] == ' ' and str[i] != ' ')) {
                    res[i] = (str[i] < 'A' or str[i] > 'Z' ? (char)(str[i] - abs('a' - 'A')) : str[i]);
                }
            }

            return res;
        }

        Bai3() {
            cout << __func__ << "\n\n";

            // char* s = getRandomCSTring();
            char s[10000];
            cout << "Nhap chuoi s: ";
            scanf ("%[^\n]%*c", s);

            cout << "Chuoi s: ";
            printCString(s);

            cout << "Chuoi proper(s): ";
            printCString(proper(s));

            return;
        }
};

class Bai4 {
    public:
        char* standard(char* str) {
            int n = getCStringLength(str);
            int index = 0, id = 0;
            char *res = new char[n];
            while (index < n) {
                while (index < n and str[index] == ' ') {
                    ++index;
                }
                while (index < n and str[index] != ' ') {
                    res[id++] = str[index++];
                }
                cout << "bug: " << index << " - " << str[index]<< endl;
                if (str[index] == ' ') {
                    res[id++] = ' ';
                }
            }

            return res;
        }

        Bai4() {
            cout << __func__ << "\n\n";

            // char* s = getRandomCSTring();
            char s[10000];
            cout << "Nhap chuoi s: ";
            scanf ("%[^\n]%*c", s);

            cout << "Chuoi s: ";
            printCString(s);

            cout << "Chuoi standard(s): ";
            printCString(standard(s));

            return;
        }
};

int main() {
    srand(time(NULL));

    Bai4 bt;

    return 0;
}