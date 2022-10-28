v_num = 0
n = int(input())
number_list = list(map(int, input().split()))
v = int(input())
for i in range(n):
    if(number_list[i] == v):
        v_num += 1
print(v_num)
