# Two Knights - Editorial

Để tính số cách đặt hai quân mã sao cho hai quân mã không tấn công nhau được thì ta sẽ tính bằng công thức lấy số cách đặt hai quân mã trừ đi số cách đặt hai quân mã có thể tấn công nhau.

***Số cách đặt hai quân mã trên bàn cờ $n \times n$:***

$$C^{2}_{n^2} = \dfrac{n^2!}{(n^2 - 2)! \cdot 2!} = \dfrac{n^2(n^2 - 1)}{2}$$

***Số cách đặt hai quân mã trên bàn cờ $n \times n$ sao cho chúng tấn công được nhau:*** Vì hai quân mã có thể tấn công nhau nên vị trí của chúng sẽ có dạng hình chữ nhật $2 \times 3$ và $3 \times 2$ do đó, số cách đặt hai quân mã sao cho chúng có thể tấn công nhau là số cách đặt các hình chữ nhật kích thước $2 \times 3$ và $3 \times 2$ trên hình chữ nhật kích thước $n \times n$:

$$(n - 1)(n - 2) + (n - 2)(n - 1) = 2(n - 1)(n - 2)$$

Vì mỗi hai quân mã có thể đổi chỗ cho nhau nên ta có kết quả là:

$$2 \cdot 2(n - 1)(n - 2) = 4(n - 1)(n - 2)$$

***Do vậy kết quả bài toán là:***

$$\dfrac{n^2(n^2 - 1)}{2} - 4(n - 1)(n - 2)$$
