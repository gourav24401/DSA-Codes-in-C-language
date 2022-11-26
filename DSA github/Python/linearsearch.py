def linear_search(arr,key):
    for i in range(len(arr)):
        if arr[i]==key:
            return i
    return -1
print(" ")
print("Linear Search")
key = int(input("enter element to be searched: "))
size = int(input("enter size of list: "))
arr = []
i = 0
for i in range(size):
    val = int(input("enter the value: "))
    arr.append(val)
x=linear_search(arr,key)
if x != -1:
	print(f"Element is found at {x+1} index position")
else:
	print("Element is not present in array")