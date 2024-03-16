import bisect

def solve(A, B, C, X):
    # AとBの全ての和の組み合わせを計算し、リストに保存
    AB_sums = [a + b for a in A for b in B]
    # AB_sumsをソートする
    AB_sums.sort()
    
    # Cの各要素について、Xの要素から引いた値がAB_sumsに含まれているか確認
    for x in X:
        # Xの要素からCの要素を引いた値がAB_sumsに含まれているか二分探索で確認
        can_make_sum = False
        for c in C:
            if x - c < 0:
                continue
            idx = bisect.bisect_left(AB_sums, x - c)
            # もしAB_sumsの中にx - cが見つかれば、和を作ることができる
            if idx < len(AB_sums) and AB_sums[idx] == x - c:
                can_make_sum = True
                break
        if can_make_sum:
            print("Yes")
        else:
            print("No")

input()
A = map(int, input().split())
input()
B = map(int, input().split())
input()
C = map(int, input().split())
input()
X = map(int, input().split())

solve(A, B, C, X)


A = [1, 2, 3]
B = [2, 4]
C = [1, 2, 4, 8, 16, 32]
X = [1, 5, 10, 50]
solve(A, B, C, X)