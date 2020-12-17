import sys

def solve(registrationList):
    indexList = []        
    for i in range(len(registrationList)):
        if 'FBI' in registrationList[i]:
            indexList.append(i + 1)
    return indexList

def test():
    assert(solve(["SANDIP"]) == [])
    assert(solve(["SANFBIDIP", "HELLO", "MANFBI"]) == [1, 3])
    assert(solve(["344DKF", "HDFDFOFBI", "DF5-233"]) == [2])
    print("Test cases passed..") 

def helper():
    registrationList = []
    for i in range(5):
        registrationNumber = input()
        registrationList.append(registrationNumber)
    resultList = solve(registrationList)
    if len(resultList) == 0:
        print("HE GOT AWAY!")
    else:
        for elem in resultList:
            print(elem, end=" ")

if __name__ == "__main__":
    if len(sys.argv) > 1 and sys.argv[1] == 'test':
        test()
    else:
        helper()