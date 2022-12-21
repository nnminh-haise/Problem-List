
# Đồng xu và tam giác - Coin and triangle | Editorial - Lời giải

> *Tags: Binary Search*

## Statement - Đề bài

> *Đề bài: [Coin and Triangle | Codechef](https://www.codechef.com/problems/TRICOIN?tab=statement)*

---

## Solution - Giải thuật

Từ cách tạo tam giác từ những đồng xu, suy ra được số lượng đồng xu cần thiết để tạo ra một tam giác có chiều cao $n$ sẽ là:

$$\dfrac{p \times (p + 1)}{2} = n \Leftrightarrow p \times (p + 1) = 2 \times n$$

Dễ thấy rằng giá trị lớn nhất của $p$ sẽ gần bằng $\sqrt{n}$. Với $n = 10^9$ thì giá trị lớn nhất của $p$ sẽ gần bằng $10^3$. Có thể sử dụng thuật toán tìm kiếm tuyến tính để giải quyết. Nhưng nếu giá trị $n$ lớn hơn thì cần một thuật tìm kiếm tối ưu hơn. Lúc này cần sử dụng thuật toán Tìm kiếm nhị phân.

Không gian tìm kiếm lúc này sẽ là giá trị của $p$ và được xác định là $[1, n]$. May thay không gian tìm kiếm này đã được sắp xếp theo thứ tự và thứ tự này có thể được sử dụng để xác định được đối tượng cần tìm.

Gọi $m = (r - l + 1) \div 2 + l$ là phần tử được chọn để so sánh. Lúc này, giả sử $m = p$, kiểm tra $m \times (m + 1) \le 2 \times n$. Nếu thỏa mãn thì sẽ bỏ đi không gian bên trái và tiếp tục tìm kiếm ở không gian bên phải nhằm tìm thêm giá trị $p$ lớn hơn. Ngược lại, bỏ đi không gian bên phải để tìm giá trị $p$ nhỏ hơn thỏa mãn điều kiện cần tìm.

**Độ phức tạp thuật toán:** $O(q \log{n})$.

***C++:***

```cpp
#include <iostream>

using namespace std;

int main() {
    int queries;
    cin >> queries;
    while (queries--) {
        long long n;
        cin >> n;
        long long ans = 1;
        long long left = 1, right = n;
        while (left <= right) {
            long long mid = (right - left + 1) / 2 + left;
            if (mid * (mid + 1) <= 2 * n) {
                ans = max(ans, mid);
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

```

***Python:***

```py
queries = int(input())

while queries:
    queries -= 1
    
    n = int(input())
    
    ans = 1
    
    left, right = 1, n
    
    while left <= right:
        mid = (right - left + 1) // 2 + left
        
        if mid * (mid + 1) <= 2 * n:
            ans = max(ans, mid)
            left = mid + 1
        else:
            right = mid - 1
    
    print(ans)

```
