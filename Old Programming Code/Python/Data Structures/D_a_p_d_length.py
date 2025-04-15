class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None


class DoublyLinkedList:
    def __init__(self):
        self.head = None

    def append(self, data):
        if self.head is None:
            new_node = Node(data)
            new_node.prev = None
            self.head = new_node
        else:
            new_node = Node(data)
            cur = self.head
            while cur.next:
                cur = cur.next
            cur.next = new_node
            new_node.prev = cur
            new_node.next = None

    def prepend(self, data):
        if self.head is None:
            new_node = Node(data)
            new_node.prev = None 
            self.head = new_node
        else:
            new_node = Node(data)
            self.head.prev = new_node
            new_node.next = self.head
            self.head = new_node
            new_node.prev = None

    def print_list(self):
        cur = self.head
        while cur:
            print(cur.data)
            cur = cur.next

    def del_at_pos(self,pos):
        cur_node=self.head 

        if pos == 0:
            self.head = self.head.next
            cur_node=None
            return 

        prev=None
        count=0

        while cur_node and count != pos:
            prev=cur_node
            cur_node=cur_node.next
            count += 1

        if cur_node is None:
            return 
        prev.next=cur_node.next
        cur_node=None         
    def deleteNode(self,key):
        cur_node=self.head
        if cur_node and cur_node.data == key:
            self.head=cur_node.next
            cur_node=None
            return 
        prev=None

        while cur_node and cur_node.data != key:
            prev=cur_node
            cur_node=cur_node.next
        if cur_node is None:
            return 
        prev.next=cur_node.next
        cur_node=None

    def len_iterative(self):
        count = 0
        cur_node=self.head

        while cur_node:
            count +=1
            cur_node=cur_node.next
        return count
       





dllist = DoublyLinkedList()
dllist.prepend(0)
dllist.append(1)
dllist.append(2)
dllist.append(3)
dllist.append(4)
dllist.append(4)
dllist.append(4)
dllist.append(4)
dllist.append(4)


print(dllist.len_iterative())
dllist.print_list()