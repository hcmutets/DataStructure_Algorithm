arr  = []
n = 0

def arrayInit():
    n = int(input('Nhap n :'))
    print(n)
    for i in range(n):
        arr.append(int(input('Nhap phan tu thu ' + str(i) + ' :')))
    return n


def showArray():
    for i in range(n):
        print('{} '.format(arr[i]))



def swap(arr,i,j):
    arr[i], arr[j] = arr[j] , arr[i]


def quickSort(l,r,arr):
    i = l
    j = r
    pivot = arr[r]
    while (i <= j):
        while (arr[i]) < pivot: i += 1
        while (arr[j] > pivot): j -= 1

        if (i <= j ):
            swap(arr,i,j)
            i+=1
            j-=1

    if (l < j) : quickSort(l , j , arr)
    if (i < r): quickSort(i , r, arr)



n = arrayInit()
quickSort(0,n-1,arr)
showArray()

