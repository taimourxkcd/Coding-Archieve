class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def print_list(self):
        cur_node = self.head
        while cur_node:
            print(cur_node.data)
            cur_node = cur_node.next

    def append(self, data):
        new_node = Node(data)

        if self.head is None:
            self.head = new_node
            return

        last_node = self.head
        while last_node.next:
            last_node = last_node.next
        last_node.next = new_node

    def prepend(self, data):
        new_node = Node(data)

        new_node.next = self.head
        self.head = new_node

    def delete_node(self, key):

        cur_node = self.head

        if cur_node and cur_node.data == key:
            self.head = cur_node.next
            cur_node = None
            return

        prev = None 
        while cur_node and cur_node.data != key:
            prev = cur_node
            cur_node = cur_node.next

        if cur_node is None:
            return 

        prev.next = cur_node.next
        cur_node = None

    def delete_node_at_pos(self, pos):

        cur_node = self.head

        if pos == 0:
            self.head = cur_node.next
            cur_node = None
            return

        prev = None
        count = 0
        while cur_node and count != pos:
            prev = cur_node 
            cur_node = cur_node.next
            count += 1

        if cur_node is None:
            return 

        prev.next = cur_node.next
        cur_node = None

    def swap_nodes(self, key_1, key_2):

        if key_1 == key_2:
            return 

        prev_1 = None 
        curr_1 = self.head 
        while curr_1 and curr_1.data != key_1:
            prev_1 = curr_1 
            curr_1 = curr_1.next

        prev_2 = None 
        curr_2 = self.head 
        while curr_2 and curr_2.data != key_2:
            prev_2 = curr_2 
            curr_2 = curr_2.next

        if not curr_1 or not curr_2:
            return 

        if prev_1:
            prev_1.next = curr_2
        else:
            self.head = curr_2

        if prev_2:
            prev_2.next = curr_1
        else:
            self.head = curr_1

        curr_1.next, curr_2.next = curr_2.next, curr_1.next

    def reverse_iterative(self):

        prev = None 
        cur = self.head
        while cur:
            nxt = cur.next
            cur.next = prev
            
            self.print_helper(prev, "PREV")
            self.print_helper(cur, "CUR")
            self.print_helper(nxt, "NXT")
            print("\n")

            prev = cur 
            cur = nxt 
        self.head = prev

    def print_helper(self, node, name):
        if node is None:
            print(name + ": None")
        else:
            print(name + ":" + node.data) 

    def reverse_recursive(self):

        def _reverse_recursive(cur, prev):
            if not cur:
                return prev

            nxt = cur.next
            cur.next = prev
            prev = cur 
            cur = nxt 
            return _reverse_recursive(cur, prev)

        self.head = _reverse_recursive(cur=self.head, prev=None)
        
    def remove_duplicates(self):
        
        cur = self.head
        prev = None

        dup_values = dict()

        while cur:
            if cur.data in dup_values:
                # Remove node:
                prev.next = cur.next
                cur = None
            else:
                # Have not encountered element before.
                dup_values[cur.data] = 1
                prev = cur
            cur = prev.next     

    def rotate(self, k):
        p = self.head 
        q = self.head 
        prev = None
        
        count = 0
        
        while p and count < k:
            prev = p
            p = p.next 
            q = q.next 
            count += 1
        p = prev
        while q:
            prev = q 
            q = q.next 
        q = prev 

        q.next = self.head 
        self.head = p.next 
        p.next = None            

    def count_occurences_iterative(self, data):
        count = 0
        cur = self.head
        while cur:
            if cur.data == data:
                count += 1
            cur = cur.next
        return count 

    def is_palindrome(self):
        # Method 1:
        # s = ""
        # p = self.head 
        # while p:
        #     s += p.data
        #     p = p.next
        # return s == s[::-1]

        # Method 2:
        # p = self.head 
        # s = []
        # while p:
        #     s += p.data
        #     p = p.next
        # p = self.head
        # while p:
        #     data = s.pop()
        #     if p.data != data:
        #         return False
        #     p = p.next
        # return True

        # # Method 3
        # p = self.head 
        # q = self.head 
        # prev = []
        
        # i = 0
        # while q:
        #     prev.append(q)
        #     q = q.next
        #     i += 1
        # q = prev[i-1]
    
        # count = 1

        # while count <= i//2 + 1:
        #     if prev[-count].data != p.data:
        #         return False
        #     p = p.next
        #     count += 1
        # return True       
        # 

    # MY METHOD
        s=""
        cur=self.head
        while cur:
            s += cur.data
            cur=cur.next 
        return s == s[::-1]          

   
llist = LinkedList()
llist.append("I")
llist.append("G")
llist.append("I")


print(llist.is_palindrome())






llist.print_list()