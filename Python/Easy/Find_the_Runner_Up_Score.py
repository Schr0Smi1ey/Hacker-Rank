if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split())) # Typecasting to list
    
first = second = -200
for i in range(n):
    if arr[i] > first:
        second = first
        first = arr[i]
    elif arr[i] > second and arr[i] != first:
        second = arr[i]
print(second)
