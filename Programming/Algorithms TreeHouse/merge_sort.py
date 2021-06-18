def merge_sort(list):
    """
sorts a list in the ascending order
Returns a new sorted list

Divide: Find the midpoint of the list and divide into sublists
Concquer: Recursively sort these sublists created in the previous step
Combine: Merge the sorted sublist created in the previous step

Takes overall of O(n logn)

    """

    if len(list) <= 1:
        return list
    left_half, right_half = split(list)
    left = merge_sort(left_half)
    right = merge_sort(right_half)

    return merge(left, right)


def split(list):
    """
    Divide the unsorted list at the midpoint into sublist
    Returns two sublists - left and right

    takes overall O(log n) time
    """
    mid = len(list) // 2
    left = list[:mid]
    right = list[mid:]

    return left, right


def merge(left, right):
    """
    Merges two lists (arrays), sorting them into the procesS

    Runs in overall O(n) time

    """
    l = []
    i = 0
    j = 0

    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            l.append(left[i])
            i += 1
        else:
            l.append(right[j])
            j = j + 1

    while i < len(left):
        l.append(left[i])
        i += 1

    while j < len(right):
        l.append(right[j])
        j += 1

    return l


def verify_sorted(list):
    n = len(list)
    if n == 0 or n == 1:
        return True

    return list[0] < list[1] and verify_sorted(list[1:])


alist = [34, 55, 32, 23, 89, 23, 24, 24, 23, 45, 12]



alist = [9,87,6,5,4,3,2,1]
l = merge_sort(alist)
print(verify_sorted(alist))
print(verify_sorted(l))


