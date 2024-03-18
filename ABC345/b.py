def solve(S):
    result = (S + 10 - 1) // 10
    if (result == 0):
        print(result + 1)
    else:
        print(result)

S = int(input())
solve(S)

solve(27)
solve(-13)
solve(40)
solve(-20)
solve(123456789123456789)
solve(123456789123456781)
solve(0)
solve(1)
solve(-1)
solve(10)
solve(-10)
solve(-12345678912345679)
solve(101)
solve(109)