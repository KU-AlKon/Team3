import sys


def solution():
    N, C = map(int, sys.stdin.readline().rstrip().split())
    number_list = []

    for i in range(N):
        number_list.append(int(sys.stdin.readline().rstrip()))
    result = 0

    for i in range(1, C + 1):
        for num in number_list:
            if i % num == 0:
                result += 1
                break
    return result


print(solution())