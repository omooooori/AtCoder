def solve(N, S):
    result = []
    for i in range(N-1):
        result.append(S[i] * S[i+1])
    
    answer = " ".join(map(str, result))
    print(answer)
    

N = int(input())
S = list(map(int, input().split()))
solve(N, S)

#solve(3, [3, 4, 6])
#solve(5, [22, 75, 26, 45, 72])
