

def quicksort(local_numbers):
    if (len(local_numbers)) <= 1:
        return local_numbers
    less_then_pivot = []
    greater_then_pivot = []
    pivot = local_numbers[0]

    for number in local_numbers[1:]:
        if number <= pivot:
            less_then_pivot.append(number)
        else:
            greater_then_pivot.append(number)
    print("%15s %ls %15s"% (less_then_pivot, pivot, greater_then_pivot))
    return quicksort(less_then_pivot) + [pivot] + quicksort(greater_then_pivot)


numbers = [5, 34, 2, 1, 5, 76, 3, 23, 56, 22, 11, 44, 77, 432, 23, 345, 6]
print(numbers)
sorted_numbers = quicksort(numbers)
print(sorted_numbers)
