import numpy as np

a = np.array([[[[[1,1,1,1,1],
[1,0,0,0,1],
[1,0,9,0,1],
[1,0,0,0,1],
[1,1,1,1,1]]]]])

output = np.ones((5,5))
print(output)

z = np.zeros((3,3))
z[1,1] = 9
print(z)

output[ 1:4,1:4] = z
print(output)

# be careful when copying arrays

a =np.array([1,2,3])
b = a
#b[0] = 100 
print(a)    # gives wrong output b/c we said that b is pointing to the same output as a

b = a.copy()
b[0] = 100 
print(a)    
