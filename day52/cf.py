# find anangram in a list of words

def anagram(word, words):
    """
    find anagram in a list of words
    """
    word_list = []
    for w in words:
        if sorted(w) == sorted(word):
            word_list.append(w)
    return word_list

if __name__ == '__main__':
    words = ['laser', 'lazing', 'lazy', 'lazed']
    word = 'lazy'
    print(anagram(word, words))