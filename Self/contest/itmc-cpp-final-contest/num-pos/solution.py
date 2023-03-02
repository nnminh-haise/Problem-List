def lower_bound(arr: list[int], left: int, right: int, target: int) -> int:
    if left > right:
        return -1
    
    ans = right + 1
    while left <= right:
        mid = (right - left + 1) // 2 + left
        
        if target <= arr[mid]:
            right = mid - 1
            ans = min(ans, mid)
        else:
            left = mid + 1
    
    return ans


def solution(arr: list[int], target: int) -> int:
    position = len(arr)
    for i in range(len(arr)):
        if arr[i] >= target:
            position = min(position, i)
    
    return position


def main() -> None:
    arrSize, target = list(input().strip().split(' '))
    arr = list(input().strip().split(' '))

    # print(solution(arr, target))
    print(lower_bound(arr, 0, len(arr) - 1, target))



if __name__ == "__main__":
    main()
