# 더 쉬운 방법
number_arr = []
for i in range(10):
    n = int(input())
    number_arr.append(n % 42)

number_arr = set(number_arr) # set 하면 중복 제거 해줌
print(len(number_arr))

# 내가 한 방법
# number_old = []
# number_new = []

# for i in range(10):
#     n = int(input())
#     number_old.append(n % 42)

# for i in number_old:
#     if i not in number_new:
#         number_new.append(i)

# print(len(number_new))