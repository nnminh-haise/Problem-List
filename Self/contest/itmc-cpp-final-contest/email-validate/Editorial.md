
# B - Kiểm tra email | Editorial - Lời giải

> *Tags:*

## Statement - Đề bài

Một chuỗi là email được gọi là đúng nếu nó dạng `p` + `@gmail.com` (hậu tố `@gmail.com` được cố định với bài toán này) và chuỗi con `p` là chuỗi chỉ gồm các kí tự là chữ cái (in thường lẫn in hoa) và các chữ số từ `0` đến `9`.

***Yêu cầu:*** Cho một chuỗi `s` là một email có độ dài không quá $10000$ kí tự.

### Input - Dữ liệu vào

- Dòng đầu tiên là chuỗi `s` duy nhất.

### Output - Dữ liệu ra

- In ra `True` nếu `s` là một chuỗi email đúng, ngược lại in `False`.

---

## Solution - Giải thuật

Sau khi tách chuỗi `p` khỏi hậu tố `@gmail.com`, cần kiểm tra từng kí tự có phải là các kí tự hợp lệ hay không.

***C++:***

```cpp
#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    string p = "";
    int index = 0;
    while (index < s.length() && s[index] != '@') {
        p += s[index++];
    }

    bool flag = true;
    for (int i = 0; i < p.length(); ++i) {
        if (isalnum(p[i]) == false) {
            flag = false;
        }
    }

    cout << (flag ? "True\n" : "False\n");

    return 0;
}
```

***Python:***

```py
s = input().split("@gmail.com")[0]

flag: bool = True

for chr in s:
    if chr.isalnum() is not True:
        flag = False

print(flag)
```