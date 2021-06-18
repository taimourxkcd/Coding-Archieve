names = ["ali", "ayesha", "zainab", "qasim", "priya", "lily", "lucy"]


def index_of_item(local_names, target):
    for i in range(0, len(local_names)):
        if target == local_names[i]:
            return i
    return None

    for n in names:
        index = index_of_item(names, n)
        print[index]


print(index_of_item(names, "lucy"))
