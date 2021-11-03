# you can play as many turns as you want. In one turn, you choose two different blocks that share the same color and swap them.

# def swap(dictionary):
#     sort



def sort_dictionary(dictionary):
    sorted_dictionary = {}
    for key in sorted(dictionary.keys()):
        sorted_dictionary[key] = dictionary[key]
    return sorted_dictionary

def compare_dictionary(dictionary1, dictionary2):
    if(dictionary1.keys() == dictionary2.keys()): return True
    else: return False
    

if __name__ == '__main__':
    n,colors = [int(x) for x in input().split()]
    tdict = {}
    for i in range(n):
        number, color = [int(x) for x in input().split()]
        tdict[number] = color
    print(sort_dictionary(tdict))
    # print(compare_values(tdict, sort_dictionary(tdict)))
    print(compare_dictionary(tdict, sort_dictionary(tdict)))