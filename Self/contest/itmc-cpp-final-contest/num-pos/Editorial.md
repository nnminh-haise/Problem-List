
# E - Điền số vào vị trí | Editorial - Lời giải

> *Tags: Array, Binary Search, Searching*

## Statement - Đề bài

Cho một dãy số nguyên dương có $n$ phần tử được đánh chỉ số từ $0$. Dãy số đã cho đảm bảo đã được sắp xếp theo thứ tự tăng ngặt (nghĩa là $a_0 < a_1 < a_2 < a_3 < \ldots < a_{n - 1}$). Với một số nguyên dương $k$ hãy cho biết vị trí xuất hiện của số $k$ trong dãy. Nếu số $k$ không tồn tại số $k$ trong dãy đã cho hãy in ra vị trí sẽ xuất hiện của số $k$ mà vẫn giữ được thứ tự sắp xếp của dãy đã cho.

***Yêu cầu:*** Cho trước dãy và số $k$ hãy đưa ra vị trí cần tìm như đã yêu cầu.

### Input - Dữ liệu vào

- Dòng đầu tiên là số nguyên dương $n \; (1 \le n \le 10^4)$ và số nguyên dương $k \; (1 \le k \le 10^4)$.
- Dòng thứ hai gồm $n$ số nguyên dương $a_0, a_1, a_2, a_3, \ldots, a_{n - 1} \; (1 \le a_i \le 10^4)$ là các phần tử của dãy cho trước được ngăn cách nhau bởi dấu cách.

### Output - Dữ liệu ra

- Một số nguyên duy nhất là vị trí cần tìm.

---

## Solution - Giải thuật

### Naive solution - Giải thuật ngây thơ

Sử dụng vòng lặp `for` để duyệt qua dãy đã cho, lưu lại vị trí $p$ thỏa mãn tính chất $k \le a_p$ và $p$ nhỏ nhất có thể. Sau khi kết thúc vòng lặp, giá trị $p$ tìm được chính là kết quả bài toán.

**Độ phức tạp thời gian:** $O(n)$.

***C++:***

```cpp
#include <iostream>

using namespace std;

int solution(const int *arr, const unsigned int arrSize, unsigned int target)
{
    int position = arrSize;

    for (int i = 0; i < arrSize; ++i)
    {
        if (arr[i] >= target)
        {
            position = min(position, i);
        }
    }

    return position;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int *a = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    cout << solution(a, n, k) << endl;

    return 0;
}
```

***Python:***

```py
def solution(arr: list[int], target: int) -> int:
    position = len(arr)
    for i in range(len(arr)):
        if arr[i] >= target:
            position = min(position, i)
    
    return position


def main() -> None:
    arrSize, target = list(input().strip().split(' '))
    arr = list(input().strip().split(' '))

    print(solution(arr, target))



if __name__ == "__main__":
    main()
```

### Optimized solution - Giải thuật tối ưu

Dựa vào dữ kiện đề bài cho, có thể giảm thời gian tìm kiếm kết quả bằng cách áp dụng thuật toán tìm kiếm nhị phân trên dãy đã cho.

Đáp án của bài toán chính là `lower_bound(a, target)`. Có thể xây dựng hàm `lower_bound()` như đoạn code mẫu dưới đây.

***C++:***

```cpp
int lowerBound(const int* arr, int left, int right, int target) {
    if (left > right) {
        return -1;
    }

    int l = left, r = right, ans = right + 1;
    while (l <= r) {
        int mid = (r - l + 1) / 2 + l;
        if (target <= arr[mid]) {
            r = mid - 1;
            ans = min(ans, mid);
        }
        else {
            l = mid + 1;
        }
    }
    return (ans == right + 1 ? -1 : ans);
}
```

***Python:***

```py
def lower_bound(arr: list[int], left: int, right: int, target: int) -> int:
    if left > right:
        return -1
    
    ans = right + 1
    while left <= right:
        mid = (right - left + 1) // 2 + left
        
        if target <= arr[mid]:
            right = mid - 1
            ans = min(ans, mid)
        else:
            left = mid + 1
    
    return ans
```