N = int(input())

if N % 2 == 1:
    print("")
else:
    answer_list = []
    digit = N
    # print(digit)
    for i in range(2**N):
        binary = format(i, 'b').zfill(digit)
        le = 0
        ri = 0
        string = ''
        for b in binary:
            # print(b)
            if b == '0':
                le += 1
                string += '('
            else:
                ri += 1
                string += ')'
            # print(le)
            # print(ri)
            if le - ri < 0: # 右カッコのほうが多くなる
                break
        if ri != le: # 左カッコの数が右カッコの数と等しくない
            pass
        else:
            answer_list.append(string)
    answer_list.sort()
    for l in answer_list:
        print(l)
