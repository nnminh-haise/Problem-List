#include <iostream>
#include <map>

using namespace std;

int main() {
	string s;
	cin >> s;

	if (s.length() == 0) {
		cout << "NO\n";
		return 0;
	}

	map < char, string > f;
	f['A'] = f['a'] = ".-";
	f['B'] = f['b'] = "-...";
	f['C'] = f['c'] = "-.-.";
	f['D'] = f['d'] = "-..";
	f['E'] = f['e'] = ".";
	f['F'] = f['f'] = "..-.";
	f['G'] = f['g'] = "--.";
	f['H'] = f['h'] = "....";
	f['I'] = f['i'] = "..";
	f['J'] = f['j'] = ".---";
	f['K'] = f['k'] = "-.-";
	f['L'] = f['l'] = ".-..";
	f['M'] = f['m'] = "--";
	f['N'] = f['n'] = "-.";
	f['O'] = f['o'] = "---";
	f['P'] = f['p'] = ".--.";
	f['Q'] = f['q'] = "--.-";
	f['R'] = f['r'] = ".-.";
	f['S'] = f['s'] = "...";
	f['T'] = f['t'] = "-";
	f['U'] = f['u'] = "..-";
	f['V'] = f['v'] = "...-";
	f['W'] = f['w'] = ".--";
	f['X'] = f['x'] = "-..-";
	f['Y'] = f['y'] = "-.--";
	f['Z'] = f['z'] = "--..";
	f['1'] = ".----";
	f['2'] = "..---";
	f['3'] = "...--";
	f['4'] = "....-";
	f['5'] = ".....";
	f['6'] = "-....";
	f['7'] = "--...";
	f['8'] = "---..";
	f['9'] = "----.";
	f['0'] = "-----";

	string res = "";
	for (int i = 0; i < s.length(); ++i) {
		if (isalnum(s[i])) {
			res = res + f[s[i]];
		}
	}

	if (res.length() == 0) {
		cout << "NO\n";
		return 0;
	}

	for (int i = 0; i < res.length() / 2; ++i) {
		if (res[i] != res[(int)res.length() - 1 - i]) {
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";

	return 0;
}
