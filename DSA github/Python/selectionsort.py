print(" ")
print("SELECTION SORT\n")
size = int(input("enter size of list: "))
a = []
i = 0
for i in range(size):
    val = int(input("enter the value: "))
    a.append(val)
for i in range(size):
    for j in range (i+1,size):
        if a[i]>a[j]:
            key = a[j]
            a[j] = a[i]
            a[i] = key    
print(a)