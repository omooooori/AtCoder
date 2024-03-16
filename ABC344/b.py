import sys

def solve(S):
    reversed = S[::-1]
    for s in reversed:
        print(s)

list = []
for line in sys.stdin:
    list.append(int(line.strip()))

solve(list)

def stringToList(string):
    int_list = []
    for line in string.splitlines():
        int_list.append(line)
    return int_list
    

test1 = """0
1
2
3"""
print(solve(stringToList(test1)))
test2 = """0"""
print(solve(stringToList(test2)))
test3 = """123
456
789
987
654
321
0"""
print(solve(stringToList(test3)))
