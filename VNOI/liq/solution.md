# Longest increase subsequence

Tác giả Nguyễn Nhật Minh
Thời gian: 26/11/2021
Tag: Quy hoạch động

Yêu cầu: tìm dãy con tăng dài nhất
Giới hạn:
1 <= N <= 1000
1 <= a[i] <= 10000

Gợi ý: Khi có hàm f(i) cho ta biết độ dài dãy con tăng với a[i] là phần tử cuối cùng của dãy.

Giải thuật:
Từ gợi ý ta có thể phát triển được giải thuật cho bài toán này như sau: gọi f(i) là độ dài dãy con tăng dài nhất vói a[i] là phần tử kết thúc của dãy.
Với dãy có độ dài bằng 1 thì f(1) = 1. Thật vậy, ví dụ với dãy a[] = {2} thì dãy con tăng dài nhất là 2 và theo cách ta đã định nghĩa hàm f(i) ta được a[1] = 2 và f(1) = 1.
Theo yêu cầu của bài toán ta cũng có nhận xét sau đây: gọi dãy b[] là một dãy con tăng của dãy a[] và b[j] là phần tử cuối cùng của dãy. Khi đó nếu tồn tại a[i] sao cho b[j] < a[i] và j < i thì dãy b[] sẽ nhận a[i] là phần tử cuối cùng mới và độ dài dãy b[] sẽ tăng lên 1.
Như vậy đáp án bài toán dựa theo phát biểu của hàm f() sẽ là max(f(i)) với i = {1...n}.
Công thức:
f(1) = 1;
f(i) = max(f(j)) với mọi j = {1...i - 1} và a[j] < a[i] với mọi i = {2...n}

Đánh giá:
Độ phức tạp thời gian: với lời giải của bài toán này độ phức tạp thời gian sẽ là O(n^2) vì ta đã sử dụng hai vòng lặp lồng nhau.
