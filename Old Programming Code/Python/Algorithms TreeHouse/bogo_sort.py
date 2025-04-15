import random

# Program is right and everything imo but does not generate results for some reason i don't know.


def is_sorted(local_numbers):
    for index in range(len(local_numbers) - 1):
        if local_numbers[index] > local_numbers[index + 1]:
            return False
        else:
            return True


def bogo_sort(local_numbers):
    attempt = 0
    while not is_sorted(local_numbers):
        print(attempt)
        random.shuffle(local_numbers)
        attempt += 1
    return local_numbers


numbers = [3, 466, 55, 56, 744, 85, 10]
print(bogo_sort(numbers))
