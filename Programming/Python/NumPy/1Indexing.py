import numpy as np


#initiazlize the arrays
d = np.array([1,2,3], dtype='int16')
a = np.array([[1,2,3], [4,5,6]])
print('****************')
print(a)

#get dimension
print('****************')
print(a.ndim)

#get shape
print('****************')
print(a.shape)

#get type
print('****************')
print(a.dtype)

#get size
print('****************')
print(d.itemsize)

#get total size
print('****************')
print(a.size)
print(a.nbytes)

# accessing/changing specific elements rows and columns etc
print('****************')
a = np.array([[1,2,3,4,5,6,7,8],[9,10,11,12,15,12,233,43]])
print(a)
print(a.shape)

#get specific element [r,c]
print('****************')
print(a[1,5])

#get a specific row
print('****************')
print(a[0,:])

#get a specific column
print('****************')
print(a[:,2])

#gettinhg a little more fancy [startIndex:endindex:stepsize]
print('****************')
print(a[0, 1:6:2])
print(a[0, 1:-1:2])

#changing an element in an array 
a[1,5] = 29
print('****************')
print(a)

#placing a new column in an array
print('****************')
a[:,2] = [5]
print(a)

#3d example 
k = np.array([[[1,2],[4,5]],[[7,6],[11,23]]])
print('****************')
print(k)

#get specific element (work outside in)
print('****************')
print(k[0,1,1])

# replace 
print('****************')
k[:,1,:] = [[9,9],[8,8]] 
print(k)

# All 0s matrix 
print('****************')
print(np.zeros((2,3))) # 2 dimensional 
print(np.zeros((2,3,3))) # 3 dimensional 
print(np.zeros((2,3,3,2))) #  4 dimenisonal

# All 1s matrix 
print('****************')
print(np.ones((4,2,2), dtype='int32')) 

#any other matrix 
print('****************')
print(np.full((2,2),99, dtype='float32'))


#any other number (full like)
print('****************')
print(np.full_like(a,4))

#random decimal numbers 
print('****************')
print(np.random.rand(4,2)) # we pass the actual numbers here instead of the tuple
print('****************')
print(np.random.random_sample(a.shape)) 

#random integer values 
print('****************')
print(np.random.randint(7, size=(3,3))) 
print('****************')
print(np.random.randint(4,7, size=(3,3))) 
print('****************')
print(np.random.randint(-4,7, size=(3,3))) 

#identity matrix 
print('****************')
print(np.identity(5))

#Repeat an array 
print('****************')
arr = np.array([1,2,3])
r1 = np.repeat(arr,3)
print(r1)

# mathematical abilities that numpy can offer 
m = np.array([1,2,3,4,5])
print('****************')
print(m)
print(m+2)
print(m-2)
print(m/2)
print(m ** 2)
print(np.sin(m))

n = np.array([9,8,7,6,5])
print(m + n)

# Linear algebra stuff
print('****************')
q = np.ones((2,3))
print(q)

r = np.full((3,2),2)
print(r)

# multiplication
print('****************')
print(np.matmul(q,r))

# determinant
print('****************')
s = np.identity(3)
print(np.linalg.det(s))

# statistics 
print('****************')
stats = np.array([[1,2,3],[4,5,6]])
print(np.min(stats))
print(np.max(stats))
print(np.min(stats, axis=0))
print(np.sum(stats, axis=0))


# recognizing arrays 
print('****************')
before = np.array([[1,2,3,4],[5,6,7,8]]) 
print(before)

print('****************')
after = before.reshape((8,1))
print(after)

# vertically stacking vectors
print('****************')
v1 = np.array([1,2,3,4])
v2 = np.array([5,6,7,8])

print(np.vstack([v1,v2,v2,v2]))

# horizontal stack
print('****************')
h1 = np.ones((2,4))
h2 = np.zeros((2,2))
print(np.hstack((h1,h2)))

# miscellaneous

#load data from the file
print('****************')
filetext = np.genfromtxt('data.txt',delimiter=',')
filetext = filetext.astype('int32')  #prints the data in int form instead of float in which it already was 
print(filetext)

# boolena masking and advanced indexing 
print('****************')
print(filetext > 50)
print(filetext[filetext > 50] )

# you can index with a list in numpy
print('****************')
Arr = np.array([1,2,3,4,5,6,7,8,9])
print(Arr[[1,2,8]])
print(np.any(filetext > 50, axis = 0))
print('****************')
print(np.all(filetext > 50, axis = 0))
print('****************')
print(( (filetext > 30) & (filetext < 40)))
print('****************')
print(~(( (filetext > 30) & (filetext < 40))))