
# E - Điền số vào vị trí

Cho một dãy số nguyên dương có $n$ phần tử được đánh chỉ số từ $0$. Dãy số đã cho đảm bảo đã được sắp xếp theo thứ tự tăng ngặt (nghĩa là $a_0 < a_1 < a_2 < a_3 < \ldots < a_{n - 1}$). Với một số nguyên dương $k$ hãy cho biết vị trí xuất hiện của số $k$ trong dãy. Nếu số $k$ không tồn tại số $k$ trong dãy đã cho hãy in ra vị trí sẽ xuất hiện của số $k$ mà vẫn giữ được thứ tự sắp xếp của dãy đã cho.

***Yêu cầu:*** Cho trước dãy và số $k$ hãy đưa ra vị trí cần tìm như đã yêu cầu.

## Input - Dữ liệu vào

- Dòng đầu tiên là số nguyên dương $n \; (1 \le n \le 10^4)$ và số nguyên dương $k \; (1 \le k \le 10^4)$.
- Dòng thứ hai gồm $n$ số nguyên dương $a_0, a_1, a_2, a_3, \ldots, a_{n - 1} \; (1 \le a_i \le 10^4)$ là các phần tử của dãy cho trước được ngăn cách nhau bởi dấu cách.

## Output - Dữ liệu ra

- Một số nguyên duy nhất là vị trí cần tìm.

## Sample - Ví dụ

**Input:**

```
4 2
1 2 3 5
```

**Output:**

```
1
```

**Explanation:**

Ta có dãy số: $[1, 2, 3, 5]$ có chỉ số theo thứ tự là $0, 1, 2, 3$ và số $k = 2$.

Vì $k = 2$ tồn tại trong dãy ở vị trí (chỉ số) $1$ nên kết quả cần tìm là $1$.

**Input:**

```
4 2
1 3 5 6
```

**Output:**

```
1
```

**Explanation:**

Ta có dãy số: $[1, 3, 5, 6]$ có chỉ số theo thứ tự là $0, 1, 2, 3$ và số $k = 2$.

Vì $k = 2$ không tồn tại trong dãy do đó nếu thêm số $k = 2$ vào dãy sao cho dãy vẫn giữ nguyên tính chất tăng dần thì sẽ thêm vào vị trí $1$. Khi đó ta được dãy số mới là $[1, 2, 3, 5, 6]$ và có chỉ số lần lượt là $0, 1, 2, 3, 4$.

