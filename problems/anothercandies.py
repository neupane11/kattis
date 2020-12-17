n=int(input()) #number of tasecases

for i in range(n):
    candy=[] #list of candy
    input()
    student=int(input()) #number of student 
    for j in range(student):
        candy.append(int(input()))
    total=sum(candy)
    if total%student==0:
        print('YES')
    else:
        print('NO')
