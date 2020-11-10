#! /user/bin/env python3
# Sandip Neupane
# kattis: Army_Streangth(Easy)
#Difficulty Level: 2.0

import sys

def solve(Ag,Am):
    #print(Ag)
    #print(Am)
    if max(Ag)>=max(Am):
        return "Godzilla"
    else:
        return "MechaGodzilla"
def Army():
    n=int(input())
    
    for i in range(n):
        input()
        team = [int(x) for x in input().split()]
        Ag=list(map(int,input().split(' ')))
        #print(Ag)
        Am=list(map(int,input().split(' ')))
        #print(Am)
        print(solve(Ag,Am))

if __name__ == "__main__" :
    if len(sys.argv)> 1 and sys.argv[1]== 'test' :
        test()  
    else:
        Army()
            