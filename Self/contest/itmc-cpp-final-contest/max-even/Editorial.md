
# D - Số đại diện | Editorial - Lời giải

> *Tags:*

## Statement - Đề bài

Cho một dãy $A$ có độ dài $n$, gồm các số nguyên dương phân biệt $a_1, a_2, a_3, \ldots, a_n$. Số $p$ được gọi là số đại diện cho dãy $A$ nếu $p$ là một số chẵn và là tổng của hai số khác nhau trong dãy $A$. Nếu số $p$ không tồn tại thì in $-1$.

***Yêu cầu:*** Đưa ra giá trị số $p$.

### Input - Dữ liệu vào

- Dòng đầu tiên là số nguyên dương $n \; (1 \le n \le 2 \cdot 10^5)$ - số lượng phần tử trong dãy $A$.
- Dòng thứ hai gồm $n$ số nguyên dương $a_1, a_2, a_3, \ldots, a_n \; (1 \le a_i \le 10^9)$.

### Output - Dữ liệu ra

- Một số nguyên $p$ duy nhất.

---

## Solution - Giải thuật

Dựa vào định nghĩa của số $p$ suy ra, $p$ là tổng của hai số chẵn lớn nhất và lớn nhì hoặc là tổng của hai số lẻ lớn nhất và lớn nhì. Nếu không tồn tại hai tổng đó thì $p = -1$.

***C++:***

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int* a = new int [n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int odds[2] = {-10, -10};
    int evens[2] = {-10, -10};
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 1) {
            odds[0] = max(odds[0], a[i]);
        }
    }

    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 1 && a[i] != odds[0]) {
            odds[1] = max(odds[1], a[i]);
        }
    }

    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) {
            evens[0] = max(evens[0], a[i]);
        }
    }

    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0 && a[i] != evens[0]) {
            evens[1] = max(evens[1], a[i]);
        }
    }

    int ans = -1;
    if (odds[0] != -10 && odds[1] != -10) {
        ans = max(ans, odds[0] + odds[1]);
    }
    if (evens[0] != -10 && evens[1] != -10) {
        ans = max(ans, evens[0] + evens[1]);
    }
    cout << ans << endl;

    return 0;
}
```

***Python:***

```py
def main():
    n = int(input())
    a = list(map(int, input().strip().split()))
    odds = list()
    evens = list()
    for item in a:
        if item % 2 == 0:
            evens.append(item)
        else:
            odds.append(item)

    odds = list(reversed(sorted(odds)))
    evens = list(reversed(sorted(evens)))

    ans = -1
    if len(odds) >= 2:
        ans = max(ans, sum(odds[0:2]))
    if len(evens) >= 2:
        ans = max(ans, sum(evens[0:2]))

    print(ans)


if __name__ == "__main__":
    main()
```