s = input()
x = s.count('E') - s.count('W')
y = s.count('N') - s.count('S')
print("({0}; {1})".format(x, y))