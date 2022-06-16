def binary_search(list , target):
    first = 0;
    last = len(list)-1;

    while first <= last:
        midpoint = (first + last)//2

        if list[midpoint] == target:
            return midpoint

        elif list[midpoint] < target:
            first = midpoint + 1
        else:
            last = midpoint - 1
    return None


def recursive_binary_search(list , target):
    if len(list) == 0:
        return False
    else:
        midpoint = (len(list))//2

        if list[midpoint] == target:
            return True
        else:
            if list[midpoint] < target:
                return recursive_binary_search(list[midpoint+1:],target)
            else:
                return recursive_binary_search(list[:midpoint],target)






def Verify(index):
    if index is not None:
        print("Target is found at the index: ", index)
    else:
        print("Target is not found in the list ")

numbers = [1,2,3,4,5,6,7,8,9,10]

result = recursive_binary_search(numbers, 12)
Verify(result)
result = recursive_binary_search(numbers, 6)
Verify(result)



