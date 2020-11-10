import sys

def candies():

    n=int(input()) #number of testsecases

    for i in range(n):
        candy=[] #list of candy
        input()
        student=int(input()) #number of student 
        for j in range(student):
            candy.append(int(input()))
        print(solve(student,candy))

def solve(student,candy):
    #print(candy)
    total=sum(candy)
    if total%student==0:
        return 'YES'
    else:
        return 'NO'

if __name__ == "__main__" :
    if len(sys.argv)> 1 and sys.argv[1]== 'test' :
        test()  
    else:
        candies()
            

