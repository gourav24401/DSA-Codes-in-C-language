print(" ")
print("INSERTION SORT\n")
size = int(input("enter size of list: "))
a = []
i = 0
for i in range(size):
    val = int(input("enter the value: "))
    a.append(val)
for i in range(1,size):
    key=a[i]
    j=i-1
    while (j>=0)and(a[j]>key):
        a[j+1]=a[j]
        j=j-1
    a[j+1]=key
print(a)    