n= int (raw_input())
a=[]
for i in range(1,10):
    if len(str(i**n))==n:
    a.insert(len(a),i**n)
for i in a:
    print i
