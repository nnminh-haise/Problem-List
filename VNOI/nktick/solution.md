Tác giả: Nguyễn Nhật Minh
Ngày viết: 1/12/2021
Tag: Quy hoạch động

Yêu cầu: Tính thời gian mua vé ít nhất
Giới hạn:
- 1 <= N <= 60000
- 1 <= t_{i} <= 30000
- 1 <= r_{i} <= 30000

Gợi ý: gọi f(i) là thời gian mua vé ít nhất của người mua vé thứ i. Kết quả bài toán sẽ là f(n).

Giải thuật:
Với f(x) là thời gian mua vé nhỏ nhất của người mua vé thứ i thì sẽ có hai trường hợp.
Trường hợp đầu tiên là người thứ i quyết định ở lại mua vé. Theo đề bài lúc này f(i) = a[i] + f[i - 1].
Trường hợp thứ hai người thứ i nhờ người đứng trước mua giùm thì tổng thời gian mua của người thứ i và i - 1 = b[i - 1]. Như vậy f[i] = b[i] + f[i - 2].
