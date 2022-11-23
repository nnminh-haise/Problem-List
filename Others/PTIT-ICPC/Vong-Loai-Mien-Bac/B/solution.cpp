#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define FILEIO freopen("data.txt", "r", stdin);
#define FOR_EACH(s) for (int i = 0; i < (int)s.size(); ++i)
#define REP(i, n) for (int i = 0; i < n; ++i)
#define FOR(i, l, r) for (int i = l; i <= r; ++i)
#define REV(i, r, l) for (int i = r; i >= l; --i)
#define FI first
#define SE second

typedef long long LL;
typedef pair < int, int > II;
typedef vector < int > VI;
typedef vector < pair < int, int > > VII;

const int INF = 1e9 + 7;
const int dx[] = {0, 0, -1, 1};
const int dy[] = {-1, 1, 0, 0};

class Fraction {
    private:
        int gcd (int a, int b) {
            return b ? gcd (b, a % b) : a;
        }

    public:
        int bot, top;

        Fraction(int _top = 0, int _bot = 1) {
            top = _top;
            bot = _bot;
            if (_bot == 0)
                bot = 1;
            return;
        }

        Fraction optimize() {
            int _gcd = gcd(top, bot);
            return Fraction(top / _gcd, bot / _gcd);
        }

        friend ostream& operator<<(ostream& cout, Fraction target);
        friend Fraction operator+(const Fraction a, const Fraction b);
        friend Fraction operator*(const Fraction a, const Fraction b);
};

ostream& operator<<(ostream& cout, Fraction target) {
    if (target.bot == 1)
        cout << target.top;
    else {
        int a = target.top / target.bot;
        cout << a << " " << target.top - a * target.bot << "/" << target.bot;
    }
    return cout;
}

Fraction operator+(const Fraction a, const Fraction b) {
    Fraction result = Fraction(a.top * b.bot + a.bot * b.top, a.bot * b.bot);
    return result.optimize();
}

Fraction operator*(const Fraction a, const Fraction b) {
    Fraction result = Fraction(a.top * b.top, a.bot * b.bot);
    return result.optimize();
}

Fraction pow(Fraction a, int b) {
    if (b == 0)
        return Fraction(1, 1);
    
    if (b == 1)
        return a;

    Fraction result = Fraction(1, 1);
    REP(i, b) {
        result.top *= a.top;
        result.bot *= a.bot;
    }
    return result.optimize();
}

class Solution {
    public:
        Solution() {
            string s;
            cin >> s;
            reverse(s.begin(), s.end());
            int n = s.length();

            Fraction sum;
            REP(i, n) {
                sum = sum + Fraction((int)(s[i] - '0'), 1) * pow(Fraction(3, 2), i);
                sum.optimize();
            }

            cout << sum << "\n";

            return;
        }
};

int main() {
    FASTIO;
    FILEIO;

    int queries = 1;
    while (queries--) {
        Solution solution;
    }

    return 0;
}