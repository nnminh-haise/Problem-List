#include <iostream>

using namespace std;

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
#ifndef ONLINE_JUDGE
    freopen("data.txt", "r", stdin);
#endif

    int n, k;
    cin >> n >> k;
    int *a = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    cout << solution(a, n, k) << endl;
    // cout << lowerBound(a, 0, n - 1, k) << endl;

    return 0;
}
