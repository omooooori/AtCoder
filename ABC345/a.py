def solve(S):
    equal_count = S.count('=')
    if (equal_count == 0):
        print("No")
        return
    
    s = S.replace('=', '')
    if (len(s) == 0):
        print("No")
        return
    
    if (s[0] != '<' or s[-1] != '>'):
        print("No")
        return
        
    left_arrow_count = s.count('<')
    right_arrow_count = s.count('>')    
    if (left_arrow_count != right_arrow_count):
        print("No")
    else:
        print("Yes")

#S = input()
#solve(S)

solve("<====>")
solve("==>")
solve("<>>")
solve(">==<")
solve("<<>>")
solve("===")