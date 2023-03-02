
# A - Số đối xứng | Editorial - Lời giải

> *Tags:*

## Statement - Đề bài

Số đối xứng là số khi đọc từ trái sang phải cũng giống như khi đọc từ phải sang trái. Cho một dãy $A$ gồm $n$ số nguyên dương $a_1, a_2, a_3, \ldots, a_n$, đếm số lượng số đối xứng có trong dãy $A$.

***Yêu cầu:*** Đếm số lượng số đối xứng có trong dãy $A$.

### Input - Dữ liệu vào

- Dòng đầu tiên là số nguyên dương $n \; (1 \le n \le 10000)$ - số lượng phần tử của dãy $A$.
- $n$ dòng tiếp theo, mỗi dòng là một số nguyên dương $a_i \; (1 \le a_i \le 10^5)$ là một số trong dãy $A$.

### Output - Dữ liệu ra

- Một số nguyên duy nhất là số lượng số đối xứng có trong dãy $A$.

---

## Solution - Giải thuật

Thấy rằng số lượng chữ số tối đa của $a_i$ là $5$. Do vậy chỉ cần một hàm kiểm tra tính đối xứng tuyến tình kết hợp với vòng lặp `for` để kiểm tra tính đối xứng của từng giá trị $a_i$ trong dãy $A$ là đủ để hoàn thành bài toán.

**Độ phức tạp thời gian:** $O(n)$.

***C++:***

```cpp
#include <iostream  >

using namespace std;

bool isPalin(string s) {
    int n = s.length() - 1;
    for (int i = 0; i < n; ++i) {
        if (s[i] != s[n - i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;
    string* a = new string [n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int counter = 0;
    for (int i = 0; i < n; ++i) {
        if (isPalin(a[i]) == true) {
            ++counter;
        }
    }
    cout << counter << endl;

    return 0;
}
```

***Python:***

```py
def is_palin(s: str) -> bool:
    n = len(s)
    for i in range(n):
        if s[i] is not s[n - 1 - i]:
            return False
    
    return True


n: int = int(input())
ans: int = 0
for i in range(n):
    val: str = input()
    if is_palin(val) is True:
        ans += 1

print(ans)
```