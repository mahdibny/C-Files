# arrays in python are called list it seems

the_count=[1,2,3,4,5]
fruits=["apples","oranges","pears","apricots"]
change=[1,"pennies",2,"'dimes",3,"quarter"]

# this first kind of for-loop goes through a list
for number in the_count:
    print "This is count %d" % number

for fruit in fruits:
    print "A fruit of type: %s" % fruit

#also we can go thriugh mixed lists too
#notice we have to use %r since we don't know what's on it
for i in change:
    print "I got %r" % i

#building an empty list
elements=[]

for i in range(0,6):
    print "Adding %d to the list." %i
    elements.append(i)

for i in elements:
    print "Element was: %d" % i
