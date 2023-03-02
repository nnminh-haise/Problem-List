
# C - Đếm số | Editorial - Lời giải

> *Tags:*

## Statement - Đề bài

Cho một số nguyên dương $n$ có giá trị không quá $10^5$.

***Yêu cầu:*** Hãy đếm tất cả các số nguyên dương có giá trị bé hơn hoặc bằng $n$ có số lượng chữ số là một số lẻ.

### Input - Dữ liệu vào

- Một số nguyên dương $n$ duy nhất.

### Output - Dữ liệu ra

- Một số $m$ duy nhất là số lượng số nguyên dương bé hơn hoặc bằng $n$ có số lượng chữ số là một số lẻ.

---

## Solution - Giải thuật

Duyệt qua tất cả các số nguyên dương $x$ bé hơn hoặc bằng $n$, đếm số lượng chữ số của $x$ và kiểm tra số lượng chữ số vừa đếm được là số chẵn hay số lẻ.

***C++:***

```cpp
#include <iostream>

using namespace std;

int count(int val) {
    int counter = 0;

    while (val > 0) {
        ++counter;
        val /= 10;
    }

    return counter;
}

int main() {
    int n, ans = 0;
    cin >> n;
    for (int num = 1; num <= n; ++num) {
        int digit = count(num);
        if (digit % 2 == 1) {
            ++ans;
        }
    }

    cout << ans << endl;

    return 0;
}
```

***Python:***

```py
def count(val: int) -> int:
    counter: int = 0
    
    while val > 0:
        counter += 1
        val //= 10
    
    return counter


def main():
    n = int(input())
    ans: int = 0
    for num in range(1, n + 1):
        if count(num) % 2 == 1:
            ans += 1
    
    print(ans)


if __name__ == "__main__":
    main()
```