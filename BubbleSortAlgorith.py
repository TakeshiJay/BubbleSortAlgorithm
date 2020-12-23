def bubbleSort(arr):
    lengthArr = len(arr)
    retArry = []

    for i in range(lengthArr):
        for j in range(0, lengthArr-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1]= arr[j+1], arr[j]
    for i in range(len(arr)):
        retArry.append(arr[i])
    print(retArry)

i = [1,7,4,3,2,1]
bubbleSort(i)            