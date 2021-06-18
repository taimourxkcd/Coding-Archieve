class Node:
    data = None
    next_node = None

    def __init__(self, data):
        self.head = None
        self.data = data


class LinkedList:

    def node_at_index(self, index):
        if index == 0:
            return self.head
        else:
            current = self.head
            position = 0

            while position < index:
                current = current.next_node
                position += 1
            return current

    def __repr__(self):
        """
       Return a string representation of the list
       Takes O(n) time

       """
        nodes = []
        current = self.head

        while current:
            if current is self.head:
                nodes.append("[Head: %s]" % current.data)
            elif current.next_node is None:
                nodes.append("Tail: %s" % current.data)
            else:
                nodes.append("[%s]" % current.data)
            current = current.next_node

        return "->".join(nodes)

    def __init__(self):
        self.head = None  # it is the same as head = None

    def is_empty(self):
        return self.head == None

    def size(self):
        """
        takes the numnber os nodes in the list
        Takes O(n) time
        :return:
        """
        current = self.head
        count = 0
        while current:
            count = count + 1
            current = current.next_node
        return count

    def add(self, data):
        """
        Takes O(1) of time

        """
        new_node = Node(data)
        new_node.next_node = self.head
        self.head = new_node

    def print_list(self):
        """
        dont know why it is printing in the reverse order hahaha
        :return:
        """
        cur_node = self.head
        while cur_node:
            print(cur_node.data)
            cur_node = cur_node.next_node

    def search(self, key):
        """
        Search for the first element in the list and if not found returns NONE
        Takes O(n) time

        """

        current = self.head

        while current:
            if current.data == key:
                return current
            else:
                current = current.next_node
        return None

    def insert(self, data, index):

        """

        Inserts a new node containing the data at index position
        Insertion takes O(1) time but finding the node at the inaertion point takes O(n) time

         Therefore takes O(n) time

        THIS FUNCTION DOES NOT HANDLE THE CASE WHEN YOU WANT TO INSERT AN ELEMENT AT THE VERY END OF THE LIST
        """
        if index == 0:
            self.add(data)
        if index > 0:
            new = Node(data)

            position = index
            current = self.head

            while position > 1:
                current = Node.next_node
                position -= 1
            prev_N = current
            next_N = current.next_node

            prev_N.next_node = new
            new.next_node = next_N

    def remove(self, key):
        """
        Takess O(n) time
        """
        current = self.head
        previous = None
        found = False

        while current and not found:
            if current.data == key and current is self.head:
                found = True
                self.head = current.next_node
            elif current.data == key:
                found = True
                previous.next_node = current.next_node
            else:
                previous = current
                current = current.next_node
            return current


l = LinkedList()
# print(l.size())
# l.print_list()
