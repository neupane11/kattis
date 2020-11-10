n=int(input())
while(n!=-1):
    
    lst1=[]
    lst2=[]
    for i in range(n):
        a,b=input().split()
        lst1.append(a)
        lst2.append(b)
        
    lst1 = [int(i) for i in lst1]
    lst2 = [int(i) for i in lst2]
    #print(lst1)
    #print(lst2)
    
    
    diff_list = []
    
    for i in range(1,len(lst2)):
        x = lst2[i] - lst2[i-1]
        diff_list.append(x)
    a=lst2.pop(0)
    diff_list.insert(0,a)
    #print(diff_list)
        
    
    ab = []                        #Create empty list
    for i in range(0, len(lst1)):
        ab.append(lst1[i]*diff_list[i])
    #print(ab)
    ans=sum(ab)
    #print(ans)
    ans=str(ans)
    print(ans+' miles')
    n=int(input())

