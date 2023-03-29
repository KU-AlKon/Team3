def count_score_string(string_input):
    new_list = string_input.split("X")
    result = 0
    for os in new_list:
        result += get_num_sum(len(os))
    return result


def get_num_sum(num):
    result = 0
    for i in range(1, num + 1):
        result += i
    return result


def solution():
    C = int(input())
    for i in range(C):
        input_string = str(input())
        make_o_list_count = count_score_string(input_string)
        print(make_o_list_count)


solution()
