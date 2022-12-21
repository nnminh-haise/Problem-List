def dictionary_solution(a: list[int]):
    f = {}

    for item in a:
        f[item] = 1 if f.get(item) == None else f[item] + 1

    return len(f)


def quick_sort(arr: list, left: int, right: int):
    i = left
    j = right
    pivot = arr[(right - left) // 2 + left]

    while i <= j:
        while arr[i] < pivot:
            i += 1

        while arr[j] > pivot:
            j -= 1

        if i <= j:
            arr[i], arr[j] = arr[j], arr[i]
            i += 1
            j -= 1

    if left < j:
        quick_sort(arr, left, j)
    if i < right:
        quick_sort(arr, i, right)

    return arr


def sorting_solution(a: list[int]):
    a = quick_sort(a, 0, len(a) - 1)
    ans = 1
    for i in range(len(a) - 1):
        if a[i] != a[i + 1]:
            ans += 1

    return ans


n = int(input())
a = list(map(int, input().split(' ')))

print(sorting_solution(a))
