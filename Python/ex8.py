formatter = "%r %r %r %r"

print formatter % (1,2,3,4);
#print formatter % (1,2,3,4,5);
print formatter % (True, False, False, True);
print formatter % (formatter,formatter,formatter,formatter);
print formatter % ("I had this thing", "That could type up right", "But it didn't sing", "So I said goodbye"); 


# example 9
print """
There's something going on here.
With the three double-quotes.
We'll be able to type as much as we like.
Even 4 lines if we want, or 5, or 6.
"""

#example 10
tabby_cat="\tI'm tabbed in"
persian_cat="I'm split \non a line."
backslash_cat="I'm \\ a \\ cat"


print ''' I wanna know.
can you show me
I wanna know about these strangers like me
Can you show me
'''
