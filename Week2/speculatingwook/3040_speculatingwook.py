from itertools import combinations
import sys


def data_input():
    dwarf_list = []
    for i in range(9):
        dwarf_list.append(int(sys.stdin.readline().rstrip()))
    return dwarf_list


def get_real_dwarf():
    dwarf_list = data_input()
    seven_dwarf = list(combinations(dwarf_list, 7))
    print(seven_dwarf)

    for dwarfs in seven_dwarf:
        if sum(dwarfs) == 100:
            return dwarfs


def solution():
    dwarfs = get_real_dwarf()

    for dwarf in dwarfs:
        print(dwarf)


solution()

# 조합 직접 구현
#
# def combination(arr, r):
#     # 1.
#     arr = sorted(arr)
#
#     # 2.
#     def generate(chosen):
#         if len(chosen) == r:
#             print(chosen)
#             return
#
#         # 3.
#         start = arr.index(chosen[-1]) + 1 if chosen else 0
#         for nxt in range(start, len(arr)):
#             chosen.append(arr[nxt])
#             generate(chosen)
#             chosen.pop()
#
#     generate([])
