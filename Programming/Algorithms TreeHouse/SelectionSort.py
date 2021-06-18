import random


def selection_sort(local_numbers):
    sorted_list = []
    for i in range(0, len(local_numbers)):
        index_to_move = index_of_min(local_numbers)
        sorted_list.append(numbers.pop(index_to_move))
    return sorted_list


def index_of_min(local_numbers):
    min_index = 0
    for i in range(1, len(local_numbers)):
        if local_numbers[i] < local_numbers[min_index]:
            min_index = i
    return min_index


numbers = [3, 466, 55, 56, 744, 85, 10]
print(selection_sort(numbers))
