import QuickSort

names = ["ali", "ayesha", "zainab", "qasim", "priya", "lily", "lucy"]


def binary_search(local_names, target):
    first = 0
    last = len(local_names) - 1
    while first <= last:
        midpoint = (first + last) // 2
        if local_names[midpoint] == target:
            return midpoint
        elif local_names[midpoint] < target:
            first = midpoint + 1
        else:
            last = midpoint - 1
    return None


q = QuickSort
sorted_names = q.quicksort(names)
for n in names:
    index = binary_search(sorted_names, n)
    print(index)

#print(binary_search(names, "lucy"))
