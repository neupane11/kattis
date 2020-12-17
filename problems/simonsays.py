n=int(input())
lst=[]
for i in range(n):
    saying=input()
    if 'simon says' in saying:
        ans=saying[11:]
        lst.append(ans)
    else:
        lst.append('\n')

for i in lst:
    print(i)
