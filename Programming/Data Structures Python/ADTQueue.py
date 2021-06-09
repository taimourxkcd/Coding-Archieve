class Queue(object):
    def __init__(self):
        self.item= []
    def enqueue(self,item):
        self.item.insert(0,item)
    def dequeue(self):
        if not self.is_empty():
                return self.item.pop()

    def is_empty(self):
        return len(self.item) == 0
    def peek(self):
        if not self.is_empty:
            return self.item[-1].value

    def __len__(self):
        return self.size()

    def size(self):
        return len(self.item)    

q = Queue()
q.enqueue(1)
q.enqueue(2)
q.enqueue(3)
q.enqueue(4)
print(q.peek())