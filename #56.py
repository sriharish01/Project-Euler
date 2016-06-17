n= int (raw_input())
maxx=0
for i in xrange(1,n):
    for j in xrange(1,n):
        a=sum(map(int,str(i**j)))
        if a>maxx:
            maxx=a
print maxx    
            
            
