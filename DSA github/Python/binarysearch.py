def binary_search(arr, low, high, key):

	if high >= low:

		mid = (high + low) // 2

		if arr[mid] == key:
			return mid

		elif arr[mid] > key:
			return binary_search(arr, low, mid - 1, key)

		
		else:
			return binary_search(arr, mid + 1, high, key)

	else:
		return -1

print(" ")
print("Binary Search")
key = int(input("enter element to be searched: "))
size = int(input("enter size of list: "))
arr = []
i = 0
for i in range(size):
    val = int(input("enter the value: "))
    arr.append(val)
result = binary_search(arr, 0, len(arr)-1, key)
if result != -1:
	print(f"Element is found at {result+1} index position")
else:
	print("Element is not present in array")
