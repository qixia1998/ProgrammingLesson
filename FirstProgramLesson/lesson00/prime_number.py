# coding=utf-8
x = int(input())
i = 2
while i * i <= x:
    if x % i == 0:
        print("F")
        break
    i = i + 1
else:
    print("T")