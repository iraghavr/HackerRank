#!/bin/python

import sys

t = int(raw_input().strip())

for a0 in xrange(t):
    
    count = 0 
    
    n = raw_input()
    
    for digit in n:
        
        if digit != '0' and int(n) % int(digit) == 0:
            
                 count = count + 1       
    print count    