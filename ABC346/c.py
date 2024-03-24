def solve(K, A):
    total_sum = K * (K + 1) // 2
    sum_in_A = sum(num for num in set(A) if 1 <= num <= K)
    print(total_sum - sum_in_A)
    
N, K = map(int, input().split())
A = list(map(int, input().split()))
solve(K, A)

solve(5, [1, 6, 3, 1])
solve(3, [346])
solve(158260522, [877914575, 24979445, 623690081, 262703497, 24979445, 1822804784, 1430302156, 1161735902, 923078537, 1189330739])
