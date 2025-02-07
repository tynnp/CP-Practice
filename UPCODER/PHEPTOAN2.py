a, b = map(int, input().split())
c = list(input().split())

for kt in c:
    if kt is '+': print("{0}+{1}={2}".format(a, b, a + b))
    if kt is '-': print("{0}-{1}={2}".format(a, b, a - b))
    if kt is '*': print("{0}*{1}={2}".format(a, b, a * b))
    if kt is '/': print("{0}/{1}={2}".format(a, b, a // b))
    if kt is '%': print("{0}%{1}={2}".format(a, b, a % b))