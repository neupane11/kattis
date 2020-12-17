import sys
def falling(l):
    alice = 0
    bob = 0
    while l:
        alice += max(l)
        l.remove(max(l))
        if l:
            bob += max(l)
            l.remove(max(l))
    return alice,bob
def helper():
        n = int(input())
    
        l = [int(x) for x in input().split()]#l=list of pieces
        result=falling(l)
        if result!=None:
            print(*result,sep=' ')
def test():
    assert(falling([1,2,2,1])==(3,3))
    assert(falling([2,3,4])==(6,3))
    assert(falling([3,2,1,4])==(6,4))
    print("all test passed")

if __name__ == '__main__':
    if len(sys.argv) > 1 and sys.argv[1] == 'test':
        test()
    else:
        helper()