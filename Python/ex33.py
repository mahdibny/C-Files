i=0
numbers=[]

while i<6:
    print "Al the top i is %d" % i
    numbers.append(i)

    i=i+1
    print "Numbers now:", numbers
    print "at the bottom i is %d" % i

print "The numbers: "

for numb in numbers:
    print numb
