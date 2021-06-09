class Node:
    def __init__(self,value):
        self.value=value
        self.left=None
        self.right=None
class BinaryTree(object):
    def __init__(self,root):
        self.root=Node(root)

    def print_tree(self, traversal_type):

        if traversal_type == "preorder":
            return self.preorder_print(tree.root,"")      # INTERSTING THING TO NOTE THAT WE HAVE USED OBJECT DIRECTLY
        elif traversal_type == "inorder":
            return self.inorder_print(tree.root,"")
        elif traversal_type == "postorder":
            return self.postorder_print(tree.root,"")
        else:
            print("Traversal type is wrong ...")

    def preorder_print(self, start, traversal):
        if start:
            traversal += (str(start.value) + "-") 
            traversal =self.preorder_print(start.left, traversal)
            traversal =self.preorder_print(start.right, traversal)
        return traversal 
    def postorder_print(self, start, traversal):
        if start:
            traversal=self.postorder_print(start.left , traversal)
            traversal=self.postorder_print(start.right, traversal)
            traversal += (str(start.value) + "-")
        return traversal

    def inorder_print(self, start, traversal):
        if start:
            traversal=self.postorder_print(start.left , traversal)
            traversal += (str(start.value) + "-")
            traversal=self.postorder_print(start.right, traversal)
        return traversal


    def printLevelOrder(self,root): 
      
        
        if root is None: 
            return
        q = [] 
        q.append(root)     
        while q:   
            count = len(q) 
            while count > 0: 
                temp = q.pop(0) 
                print(temp.value, end = ' ') 
                if temp.left: 
                    q.append(temp.left) 
                if temp.right: 
                    q.append(temp.right) 
    
                count -= 1
            print(' ')     
        

# #                1
#               2     3
#              4 5   6  7 



tree = BinaryTree(1)
tree.root.left = Node(2)
tree.root.right = Node(3)
tree.root.left.left = Node(4)
tree.root.left.right = Node(5)
tree.root.right.left = Node(6)
tree.root.right.right = Node(7)
tree.root.right.right.right = Node(8)

print(tree.print_tree("preorder"))
print(tree.print_tree("postorder"))
print(tree.print_tree("inorder"))
tree.printLevelOrder(tree.root)
    