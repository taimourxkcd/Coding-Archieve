def merge_sort(local_numbers):
    if len(local_numbers) <= 1:
        return local_numbers
    middle_index = len(local_numbers) // 2
    left_values = merge_sort(local_numbers[:middle_index])
    right_values = merge_sort(local_numbers[middle_index:])
    print("%15s %-15s" % (left_values, right_values))
    sorted_values = []
    left_index = 0
    right_index = 0
    while left_index < len(left_values) and right_index < len(right_values):
        if left_values[left_index] < right_values[right_index]:
            sorted_values.append(left_values[left_index])
            left_index += 1
        else:
            sorted_values.append(right_values[right_index])
            right_index += 1
    sorted_values += left_values[left_index:]
    sorted_values += right_values[right_index:]
    return sorted_values


numbers = [5, 34, 2, 1, 5, 76, 3, 23, 56, 22, 11, 44, 77, 432, 23, 345, 6]
print(numbers)
sorted_numbers = merge_sort(numbers)
print(sorted_numbers)
