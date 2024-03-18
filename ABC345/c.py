def solve(S):
    N = len(S)
    
    # 文字列が全て同じ文字で構成されている場合、操作後も同じ文字列になるため0を返す
    if S.count(S[0]) == N:
        return 1
    
    # 文字列の中でユニークな文字の数をカウント
    unique_chars = len(set(S))
    
    # 全ての文字が異なる場合、任意の2文字を入れ替えることができるため、
    # 入れ替え可能な組み合わせの数は N*(N-1)/2 となる
    if unique_chars == N:
        return N * (N - 1) // 2
    
    # それ以外の場合、全ての入れ替え可能な組み合わせから、
    # 同じ文字を入れ替える組み合わせを除外する
    total_swaps = N * (N - 1) // 2
    for char in set(S):
        char_count = S.count(char)
        # 同じ文字の入れ替え組み合わせを減算
        total_swaps -= char_count * (char_count - 1) // 2
    
    return total_swaps

S = input()
print(solve(S))
