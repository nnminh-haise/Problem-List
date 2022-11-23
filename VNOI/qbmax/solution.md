Tác giả: Nguyễn Nhật Minh
Ngày viết: 1/12/2021
Tag: Quy hoạch động

Yêu cầu: Tính tổng đường đi lớn nhất
Giới hạn:
- 1 <= N, M <= 100
- -100 <= a[i][j] <= 100

Gợi ý: Gọi f(i, j) là tổng đường đi lớn nhất từ cột 1 đến cột j ở hàng i bất kì.

Giải thuật:
Với f(i, j) là tổng đường đi lớn nhất từ cột 1 dòng i bất kì đến cột j dòng i bất kì.
Theo đề bài thì từ ô (i, j) đi được đến các ô (i, j + 1), (i - 1, j + 1), (i + 1, j + 1).
Ta có thể suy ra ô (i, j) được cập nhật giá trị lớn nhất từ các ô (i, j - 1), (i - 1, j - 1), (i + 1, j - 1).
Như vậy f(i, j) = a[i][j] + max(f[i][j - 1], max(f[i - 1][j - 1], f[i + 1][j - 1])) 
Lưu ý: ta sẽ cập nhật từng cột từ cột 2 đến cột n.