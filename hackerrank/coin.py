(number,m) = [int(x) for x in input().split()]
den = [int(x) for x in input().split()]

cases = {0:0}

def perm(n) :
    if n in cases.keys() :
        return cases[n]
    
    cases[n] = 0;
    
    for x in den :
        if (x == 0) :
            return 0
        n_img = n-x;
        
        #while n_img > 0 :
        cases[n] = cases[n] + perm(n_img)
        #    n_img = n_img - x
        
        if (n_img == 0) :
            cases[n] = cases[n] +1
    
    return cases[n]
            

print(perm(number))

print(cases)
