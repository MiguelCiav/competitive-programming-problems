t = int(input())
for _ in range(t):
    n = int(input())
    count_min = int(0)
    count_max = int(0)
    min = int(1000000)
    max = int(0)
    v = input().split()
    v = [int(i) for i in v]
    for i in range(n):
        if v[i] < min:
            min = v[i]
            count_min = 1
        elif v[i] == min:
            count_min += 1
        if v[i] > max:
            max = v[i]
            count_max = 1
        elif v[i] == max:
            count_max += 1
    if(min == max):
        print(int(n*(n-1)))
    else:
        print(int(count_min*count_max*2))