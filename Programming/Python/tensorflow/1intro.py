import tensorflow as tf

# creating tensors 
string = tf.Variable("this is a string", tf.string)
number = tf.Variable(324, tf.int16)
floating = tf.Variable(3.567j, tf.float64)

# rank/degree of tensors (degree is basically the deepest level of nesting  )
rank1_tensor = tf.Variable(["test","ok"], tf.string)
rank2_tensor = tf.Variable([["test"],["ok"]], tf.string)
tf.rank(rank2_tensor)

# shapes of the tensor 
rank2_tensor.shape

# reshape 
tensor1 = tf.ones([1,2,3])
tensor2 = tf.reshape(tensor1, [2,3,1])
tensor3 = tf.reshape(tensor2, [3,-1])
print(tensor1)
print(tensor2)
print(tensor3)  


t = tf.zeros([5,5,5,5])
print(t)
t = tf.reshape(t, [625])
print(t)