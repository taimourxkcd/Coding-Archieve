from LinkedList import LinkedList

def merge_sort(LinkedList):
    """
    Sorts a linked list into ascending order
    Recursivily divides the sublist containing a single node
    Repeatedly merge the sublists to produce the sorted sublists until one remians

    Returns a sorted linked list

    Runs in O(kn log n) time
    """

    if LinkedList.size() == 1:
        return LinkedList
    elif LinkedList is None:
        return LinkedList

    left_half, right_half = split(LinkedList)
    left = merge_sort(left_half)
    right = merge_sort(right_half)

    return merge(left, right)

def split(LinkedList1):
    """
    divide the unsorted list at midpoint into sublists

    Takes O(k log n) time
    """

    if LinkedList1 == None or LinkedList1.head == None:
        left_half = LinkedList1
        right_half = None
        return left_half, right_half
    else:
        size = LinkedList1.size()
        mid = size//2

        mid_node = LinkedList1.node_at_index(mid-1)

        left_half = LinkedList1
        right_half = LinkedList()
        right_half.head = mid_node.next_node
        mid_node.next_node = None

        return left_half, right_half

def merge(left, right):
    """
    Merges two linked lists , sorting by the data in the nodes
    Returns a new , merged list

    Runs in O(n) time
    """
    # create a new linked list that contains the nodes from the

    # merging of the left and the right
    merged = LinkedList()

    # Add a fake head that is discarded later
    merged.add(0)

    # set current to the head of the linked list
    current = merged.head

    # Obtain head nodes for left and the right linked lists
    left_head = left.head
    right_head = right.head

    # Iterate over left and the right until we reach the tail node of either
    while left_head or right_head:
        # if the head node of the left is None , we're past the tail
        # Add the node from the right to merged Linked list
        if left_head is None:
            current.next_node = right_head
            # call next  on the right to set the loop condition to the False
            right_head = right_head.next_node
        # if the head node of the right is None , we're past the tail
        # Add the node from the left to the merged linked list
        elif right_head is None:
            current.next_node = left_head
            # Call next on the left to set the loop condition to False
            left_head = left_head.next_node
        else:
            # Node at either tail node
            # Obtain node data to perform comparison operations

            left_data = left_head.data
            right_data = right_head.data

            # if data on left is less on the right , set current node to left node
            if left_data < right_head:
                current.next_node = left_head
                # Move left head to next node
                left_head = left_head.next_node
            # if data on left is greater then right , set current to right node
            else:
                current.next_node = right_head
                # Move right head to the next node
                right_head = right_head.next_node
    # Move current to next node
    current = current.next_node

    # Discard fake head and set first merged node as head
    head = merged.head.next_node
    merged.head = head

    return merged




l = LinkedList()
l.add(26)
l.add(21)
l.add(22)
l.add(23)
print(l)
sorted_linked_list = merge_sort(l)
print(sorted_linked_list)











