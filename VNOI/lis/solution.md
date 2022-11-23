Tác giả: Nguyễn Nhật Minh
Ngày viết: 26/11/2021
Tag: Quy hoạch động

Yêu cầu: Tìm dãy con tăng dài nhất
Giới hạn:
- 1 <= N <= 30000;
- 1 <= a[i] <= 10000;

Gợi ý: Xuất phát từ bài liq với hàm f(i) là độ dài của dãy con tăng dài nhất với a[i] là phần tử cuối cùng. Ta gọi g(i) là giá trị cuối cùng của dãy con tăng với độ dài i.

Giải thuật:
Gọi g(i) là giá trị cuối của dãy con tăng dài nhất với độ dài i. Với cách định nghĩa này thì dãy g[] sẽ là dãy tăng.
Để chứng minh dãy g[] là dãy tăng ta liên hệ lại với định nghĩa của hàm f() ở bài trước. Ta có f(i) = f(j) + 1 khi và chỉ khi j < i và a[j] < a[i]. Với cách định nghĩa của ta về hàm g() ta được: g(j) = a[j] và g(i) = a[i] và g(j) < g(i) (vì a[j] < a[i]) và j < i. Như vậy dãy g[] là một dãy tăng.
Vậy m là độ dài của dãy con tăng dài nhất của a nếu tồn tại f(m).
Ta khởi tạo dãy g[] ban đầu với g[0] = -inf và g[i] = inf với mọi i = {1...n}
Vạy khi xét đến a[i], ta sẽ tìm kiếm giá trị g[j] nhỏ nhất vừa lớn hơn a[i]. Sau đó cập nhật lại mảng g[].
