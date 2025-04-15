class Node:
    def __init__(self,data):
        self.data=data
        self.prev=None
        self.next=None

class DoublyLinkedList:
    def __init__(self): 
        self.head=None


                                                    
    def insert_node(self,data): 
        if self.head is None:
            new_node = Node(data)  
            self.head=new_node
            self.prev=None
        else:
            new_node= Node(data) 
            curr=self.head
            while curr.next:
                curr=curr.next
            curr.next=new_node
            new_node.prev=curr
            new_node.next=None     
        return 

    def insert_at_pos(self,pos,data):
        new_node = Node(data)

        curr=self.head
        previous=None
        temp=0
        while curr.next and temp != pos:
               previous=curr
               curr=curr.next
               temp += 1 

        if  curr.next == None:
            print("the given position is not present in the list ")
            return

        if curr == self.head:
            new_node.prev=None
            new_node.next=curr
            curr.prev=new_node
            self.head=new_node
        else:    
            new_node.prev=previous
            previous.next=new_node
            new_node.next=curr
            curr.prev=new_node


    def getAt(self,index):
        curr=self.head
        temp = 0
        while curr.next and temp!= index :
               curr=curr.next
               temp += 1 
        return curr.data       


    def Contains(self,data):
        curr=self.head
        pos=0
        while curr.next and curr.data != data:
            curr=curr.next
            pos += 1
        if curr.data == data:
            return pos
        else: 
            return -1   

        
    
    def RemoveAt(self,index):
        curr=self.head
        previous=None
        temp = 0
        while curr and temp != index-1:
            previous=curr
            curr=curr.next
            temp=temp+1
        if curr == self.head:
            self.head=curr
            curr.prev=None
            curr=None
        else:
            previous.next=curr.next
            curr.next.prev=curr.prev
            curr=None



    def Show(self,list):
        curr=self.head
        if list == 0:
            while curr:
                print(curr.data)
                curr=curr.next
            return
        else:
            # s=""
            # while curr:
            #     s=s+curr.data    
            # return s
            s=[]
            p=self.head
            while p:       
                s.append(p.data)
                p=p.next
            s.reverse()    
            return s 
                        


    
    def print_list(self):
            curr=self.head
            while curr:
                print(curr.data)
                curr=curr.next
            return


dllist = DoublyLinkedList()
print("Your List Contains the following list of elements \n")
dllist.insert_node('M')
dllist.insert_node('O')
dllist.insert_node('H')
dllist.insert_node('I')
dllist.insert_node('S')
dllist.insert_node('N')
dllist.insert_node('N')

dllist.print_list()

print("Input the Method you want use\n")
print(" 1: getAt() \n 2: Contains() \n 3: Show() \n 4: RemoveAt()")
n=int(input())
if n == 1:
    print("This fuction is showing the the element located at position 4  in the list or not. We can also take input from the user\n\n ")
    print(f"ELEMENT AT LOCATION 4 = {dllist.getAt(4)}")
elif n == 2:
    print("This fuction is showing the if the element I is present in the list or not. We can also take input from the user\n\n ")    
    print(F"ELEMENT I IS PRESENT IN LOCATION {dllist.Contains('I')}")
elif n == 3:        
        print("This fuction is prints the list in reverse order else returns -1. We can also take input from the user\n\n ")
        ans = dllist.Show(1)
        print(f"THE GIVEN LIST WHEN PRINTED IN REVERSE ORDER IS AS FOLLOWS {ans}") 
elif n==4:
    print("This fuction removes the element present at location 4 from the list . We can also take input from the user\n\n ")
    print(F"ELEMENT AT LOCATION 4 IS REMOVEd. NOW THE LIST CONTAINS FOLLOWING ELEMENTS {dllist.RemoveAt(4)}")
    dllist.print_list()



                 
