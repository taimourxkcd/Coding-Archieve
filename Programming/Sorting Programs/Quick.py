def quicksort(x):
    if len(x) == 1 or len(x) == 0:
        return x
    else:
        pivot = x[0]
        i = 0
        for j in range(len(x)-1):
            if x[j+1] < pivot:
                x[j+1],x[i+1] = x[i+1], x[j+1]
                i += 1
        x[0],x[i] = x[i],x[0]
        first_part = quicksort(x[:i])
        second_part = quicksort(x[i+1:])
        first_part.append(x[i])
        return first_part + second_part

alist = [54,26,93,17,77,31,44,55,20]
print(quicksort(alist))

# Another method 

def quicksort(x):
      if len(x) < 2:
          return x
      else:
          pivot = x[0]
          less = [i for i in x[1:] if i <= pivot]
          greater = [i for i in x[1:] if i > pivot]
          return quicksort(less) + [pivot] + quicksort(greater)

#ANOTHER METHOD

#First partition the input array into two groups
# Partitioning alogorithm creates smaller array with elements on left and 
# right being smaller and greater than the pivot

def partiton(a, left, right):
  i = left + 1 # Initialiase i to one more assuming pivot is at position left
	pivot = a[left]

	for j in range(left+1, right+1): #Iterate over the remaining array
		if (a[j] < pivot):
			a[i], a[j] = a[j], a[i] #Swap the values
			i = i+1 #Increment i


	pos = i - 1
	a[left], a[pos] =  a[pos], a[left]
	return pos



def quickSort(a, left, right):
	if(left <  right):
		pivot = partiton(a, left, right)
		quickSort(a, left, pivot-1)
		quickSort(a, pivot+1, right)


if __name__ == '__main__':
	a = [3, 4, 8, 0, 6, 7, 4, 2, 1, 9, 4, 5]
	quickSort(a ,0 , len(a)-1)
	print a


#ANOTHER METHOD 

class Quicksort():
    def __init__(self,array, start, end):
        self.ar = array
        self.quick_sort(array,start, end)
        print array
    def quick_sort(self, array, start, end):
        if start < end:
            pivot = self.partition(array,start,end)
            self.quick_sort(array,start,pivot-1)
            self.quick_sort(array,pivot+1,end)

    def partition(self,array,start,end):
        x = array[end]
        i = start-1
        for j in range(start, end+1, 1):
             print array
             if array[j] <= x:
                 i += 1
                 if i<j:
                     z = array[i]
                     array[i] = array[j]
                     array[j] = z    
        return i

#ANOTHER METHOD

# A = Array 
# s = start index
# e = end index
# p = pivot index
# g = greater than pivot boundary index

def swap(A,i1,i2):
  A[i1], A[i2] = A[i2], A[i1]

def partition(A,g,p):
    # O(n) - just one for loop that visits each element once
    for j in range(g,p):
      if A[j] <= A[p]:
        swap(A,j,g)
        g += 1
      
    swap(A,p,g)
    return g
    
def _quicksort(A,s,e):
    # Base case - we are sorting an array of size 1
    if s >= e:
      return
    
    # Partition current array
    p = partition(A,s,e)
    _quicksort(A,s,p-1) # Left side of pivot
    _quicksort(A,p+1,e) # Right side of pivot

# Wrapper function for the recursive one
def quicksort(A):
    _quicksort(A,0,len(A)-1)

A = [3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,-1]

print(A)
quicksort(A)
print(A)        