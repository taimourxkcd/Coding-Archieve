class Node:
    def __init__(self,value):
        self.value=value
        self.left=None
        self.right=None

    def insert(self,data):
        if self.value == data:
            return False
        elif self.value > data:
            if self.left:
                return self.left.insert(data) 
            else:
                self.left = Node(data)
                return True
        else:
            if self.right:
                return self.right.insert(data) 
            else:
                self.right = Node(data)
                return True           
    def find(self,data):
        if self.value > data:
           return True
        elif self.value > data:
            if self.left:
                return self.left.find(data)
            else:
                return False 
        else:
            if self.right:
                return self.right.find(data)
            else:
                return False
            
    def preorder(self):
        if self:
            print(str(self.value))
        if self.left:
            self.left.preorder()
        if self.right:
            self.right.preorder()        

    def postorder(self):

        if self.left:
            self.left.preorder()
        if self.right:
            self.right.preorder()
        print(str(self.value))


    def inorder(self):
            
        if self.left:
            self.left.preorder()
        print(str(self.value))    
        if self.right:
            self.right.preorder()        

class BTree:
    def __init__(self):
        self.root=None

    def insert(self,data):
        if (self.root.value==data):
            return False
        elif self.root.value > data:
            if self.root.left:
                return self.root.left.insert(data)
            else:
                self.left=Node(data)
                return True


    def find(self,data):
        if self.root:
            return self.root.find(data)
        else:
            return False    


    def preorder(self):
        print("PREORDER")
        self.root.preorder()

    def postorder(self):
        print("POSTORDER")
        self.root.preorder()

    def inorder(self):
        print("INORDER")
        self.root.preorder()
                



bst= BTree()
bst.insert(10)
print(bst.insert(15))
bst.preorder()
bst.postorder()
bst.inorder()                