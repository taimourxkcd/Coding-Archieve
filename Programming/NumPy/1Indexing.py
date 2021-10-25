import numpy as np


#initiazlize the arrays
d = np.array([1,2,3], dtype='int16')
a = np.array([[1,2,3], [4,5,6]])
print(a)

#get dimension
print(a.ndim)

#get shape
print(a.shape)

#get type
print(a.dtype)

#get size
print(d.itemsize)

#get total size
print(a.size)
print(a.nbytes)

# accessing/changing specific elements rows and columns etc
a = np.array([[1,2,3,4,5,6,7,8],[9,10,11,12,15,12,233,43]])
print(a)
print(a.shape)

#get specific element [r,c]
print(a[1,5])

#get a specific row
print(a[0,:])

#get a specific column
print(a[:,2])

#gettinhg a little more fancy [startIndex:endindex:stepsize]
print(a[0, 1:6:2])
print(a[0, 1:-1:2])

#changing an element in an array 
a[1,5] = 29
print(a)

#placing a new column in an array
a[:,2] = [5]
print(a)

#3d example 
k = np.array([[[1,2],[4,5],[7,6],[11,23]]])
print(k)

#get specific element (work outside in)
print(k[0,1,1])

# replace 
k[:,0,:] = [[9,9],[8,8]] 