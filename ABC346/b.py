def can_form_sequence(W, B):
    pattern = "wbwbwwbwbwbw"
    pattern_length = len(pattern)
    extended_pattern = pattern * 2    
    if W + B <= pattern_length:
        for i in range(pattern_length):
            substring = extended_pattern[i:i+W+B]
            if substring.count('w') == W and substring.count('b') == B:
                return "Yes"
        return "No"
    
    return "Yes"

W, B = map(int, input().split())
print(can_form_sequence(W, B))
print(can_form_sequence(3, 2))
print(can_form_sequence(3, 0))
print(can_form_sequence(92, 66))