n, x = map(int, input().split())
number_list = list(map(int, input().split()))
for i in range(n):
    if(x > number_list[i]):
        print(number_list[i])
