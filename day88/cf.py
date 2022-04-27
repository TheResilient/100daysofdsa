#string building

# You are given a string s. You have to determine whether it is possible to build the string s out of strings aa, aaa, bb and/or bbb by concatenating them. You can use the strings aa, aaa, bb and/or bbb any number of times and in any order.

def checkio(string):
    flag=True
    for i in range(len(string)):
        
        if string[i] == 'a' and i+2 or i+3<len(string):
            if string[i:i+2] == 'aa' or string[i:i+3] == 'aaa':
                print(string[i:i+2], string[i:i+3])
                flag=True
                continue
            else:
                flag=False
        elif string[i] == 'b' and i+2 or i+3<len(string):
            if string[i:i+2] == 'bb' or string[i:i+3] == 'bbb':
                print(string[i:i+2], string[i:i+3])
                flag=True
                continue
            else:
                flag=False

    return flag

string = input()
print(checkio(string))

