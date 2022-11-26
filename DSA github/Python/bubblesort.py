print(" ")
print("BUBBLE SORT\n")
size = int(input("enter size of list: "))
a = []
i = 0
for i in range(size):
    val = int(input("enter the value: "))
    a.append(val)
for i in range(size):
    for j in range(0, size-i-1):
        if a[j] > a[j+1]:
            key = a[j]
            a[j] = a[j+1]
            a[j+1] = key
print(a)