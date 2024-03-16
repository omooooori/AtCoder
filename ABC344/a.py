def solve(S):
    first_pipe = S.find('|')
    second_pipe = S.find('|', first_pipe + 1)
    return S[:first_pipe] + S[second_pipe + 1:]

S = input()
print(solve(S))

test1 = "atcoder|beginner|contest"
print(solve(test1))
test2 = "|spoiler|"
print(solve(test2))
test3 = "||xyz"
print(solve(test3))
