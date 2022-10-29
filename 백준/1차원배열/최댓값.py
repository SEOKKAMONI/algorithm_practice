number_arr = []
for i in range(9):
    number_arr.append(int(input()))

print(max(number_arr))
print(number_arr.index(max(number_arr))+1)