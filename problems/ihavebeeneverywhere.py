testCase=int(input())
for i in range(testCase):
    lst=[]
    num=int(input())
    for i in range(num):
        trip=input()
        lst.append(trip)
    lst=list(set(lst))
    #print(lst)
    print(len(lst))
        
