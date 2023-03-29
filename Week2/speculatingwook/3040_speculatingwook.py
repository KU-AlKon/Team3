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

    for dwarfs in seven_dwarf:
        if sum(dwarfs) == 100:
            return dwarfs


def solution():
    dwarfs = get_real_dwarf()

    for dwarf in dwarfs:
        print(dwarf)


solution()
