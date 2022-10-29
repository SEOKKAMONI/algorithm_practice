from re import S


student_arr = [i for i in range(1,31)]

for i in range(28):
    n = int(input())
    student_arr.remove(n)

print(min(student_arr))
print(max(student_arr))
