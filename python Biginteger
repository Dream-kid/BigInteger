# -*- coding: utf-8 -*-
"""
Created on Fri Sep 27 12:47:57 2019

@author: Imsourav
"""
arr=[0]*10004
arr[1]=1;
arr[2]=3;
temp=10002;
pos=3
while 1:
    arr[pos]=arr[pos-2]+arr[pos-1];
    pos+=1;
    if(pos>=temp):
        break;
while 1:
    try:
        tot=input()
        tot=int(tot)
        print(arr[tot])
    except EOFError:
        break
