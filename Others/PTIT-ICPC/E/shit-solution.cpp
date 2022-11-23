#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

void showMinHeap(priority_queue <int, vector <int>, greater <int>> hp) {
    while (hp.empty() == false) {
        cerr << hp.top() << " ";
        hp.pop();
    }
    cerr << endl;
    return;
}

void showMaxHeap(priority_queue <int> hp) {
    while (hp.empty() == false) {
        cerr << hp.top() << " ";
        hp.pop();
    }
    cerr << endl;
    return;
}

long long cal(priority_queue <int> max_heap, priority_queue <int, vector <int>, greater <int>> min_heap) {
    long long res = 1;
    long long x = 1, y = 1, z = 0;
    while (min_heap.empty() == false) {
        x *= min_heap.top();
        if (min_heap.size() == 1) {
            z = min_heap.top();
        }
        min_heap.pop();
    }
    while (max_heap.empty() == false) {
        y *= max_heap.top();
        max_heap.pop();
    }
    // cerr << "x = " << x << endl;
    // cerr << "y = " << y << endl;
    // cerr << "z = " << z << endl;
    res = max(x, y * z);
    return res;
}

int main() {
    FASTIO

    //freopen("data.txt", "r", stdin);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << "0 0 " << a[0] * a[1] * a[2] << " ";

    if (n > 3) {
        priority_queue <int, vector <int>, greater <int>> min_heap;
        priority_queue <int> max_heap;

        for (int i = 0; i < 3; ++i) {
            if (a[i] >= 0) min_heap.push(a[i]);
            if (max_heap.size() > 3) {
                max_heap.pop();
            }
        }
        for (int i = 0; i < 3; ++i) {
            if (a[i] < 0) max_heap.push(a[i]);
            if (max_heap.size() > 2) {
                max_heap.pop();
            }
        }

        // cerr << "Before!\n";
        // showMinHeap(min_heap);
        // showMaxHeap(max_heap);
        // cerr << "After!\n";

        for (int i = 3; i < n; ++i) {
            if (a[i] > min_heap.top() or min_heap.size() <= 3) {
                min_heap.push(a[i]);
                if (min_heap.size() > 3) min_heap.pop();
            }
            if (a[i] < max_heap.top() or max_heap.size() <= 2) {
                max_heap.push(a[i]);
                if (max_heap.size() > 2) max_heap.pop();
            }
            // showMinHeap(min_heap);
            // showMaxHeap(max_heap);
            long long res = cal(max_heap, min_heap);
            cerr << res << " ";
        }
    }
    cout << endl;
    
    return 0;
}