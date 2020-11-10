#sandip neupane
#kattis problem-Yoda 
#diff 2.0

import itertools
import sys

def answer(N,M):
    returnValue=[]
    ans1=[]
    ans2=[]
    lst_tup=Yoda(N,M)
    for i,j in lst_tup:
        if i>j or i==j:
            ans1.append(i)
        if j>i or j==i:
            ans2.append(j)
    
    if len(ans1)==0:
        ans1.append("YODA")
    if len(ans2)==0:
        ans2.append("YODA")
    
    if all(v=='0' for v in ans1):
        returnValue.append('0')
    else:
        result=''.join([str(elem) for elem in ans1])#unlisting the elem
        returnValue.append(result)
    if all(v=='0' for v in ans2):
        returnValue.append('0')
    else:
        result=''.join([str(elem) for elem in ans2])
        returnValue.append(result)
    return returnValue

def take_input():
    
    N=list(input())
    M=list(input())
    
    result=(answer(N,M))
    #print(result)
    for i in result:
        print(i)

def Yoda(N,M):
    lst_tup=[]
    diff_lngth=abs(len(N)-len(M))#difference of length of two lists
    n=diff_lngth*'0'
    #print(list(n))
    if len(N)>len(M):
        M.insert(0,list(n))
    M=(list(itertools.chain(*M))) #unpacking list inside the list
    if len(M)>len(N):
        N.insert(0,list(n))
    N=(list(itertools.chain(*N)))
    #print(M)
    #print(N)
    for i in range(max((len(N),len(M)))):
        tup=(N[i],M[i])
        lst_tup.append(tup)
    return lst_tup
if __name__ == "__main__" :
    if len(sys.argv)> 1 and sys.argv[1]== 'test' :
        test()  
    else:
        take_input()

