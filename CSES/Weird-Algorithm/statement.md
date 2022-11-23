# Thuật toán lạ kì

Với một số nguyên dương $n$ thuật toán sẽ thực hiện như sau: nếu $n$ là số chẵn thì thuật toán sẽ chia $n$ cho $2$, ngược lại thuật toán sẽ nhân $n$ cho $3$ và cộng thêm $1$. Thuật toán sẽ thực hiện lặp lại liên tục cho đến khi $n = 1$.

Ví dụ: với $n = 3$ thì ta có dãy số sau

$$3 \to 10 \to 5 \to 16 \to 8 \to 4 \to 2 \to 1$$

***Yêu cầu:*** In ra dãy số ứng với giá trị $n$ tương ứng.

## Input

- Một số nguyên dương $n$.

## Constraints

- $1 \le n \le 10^6$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): có $1 \le n \le 100$.
- Subtask $2$ ($75\%$ số điểm): không có ràng buộc gì thêm.

## Output

- Một dãy các số nguyên cách nhau bởi khoảng trắng (dấu cách) và kết thúc bằng số $1$.

## Sample Input

```
3
```

## Sample Output

```
3 10 5 16 8 4 2 1
```