# close - closes the file on the program
# read - reads the conents of the file
# readline - reads a line of a text file
# truncate - Empties the file.
# write('stuff') - writes stuff to the file

from sys import argv

script,filename=argv

print "We're going to erase %r." % filename
print "If you dont want to do that hit CTRL-C"
print "If you do want that, hit enter"

raw_input("?")

print "Opening the file..."
target = open(filename,'w')

print "Truncating the file. Goodbye!"
target.truncate()

print "Now I'm going to ask you for three lines"
line1=raw_input("Line 1: ");
line2=raw_input("Line 2: ");
line3=raw_input("Line 2: ");

print "I'm going to write these to the file."

target.write(line1 + "\n");
target.write(line2 + "\n");
target.write(line3 + "\n");

print "And finally, we close it"
target.close()
