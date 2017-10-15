#!/usr/bin/env python3

import itertools

def obtain_palindromes(word):
    char_ocurrences = {}
    for ch in word:
        if ch not in char_ocurrences:
            char_ocurrences[ch] = 1
        else:
            char_ocurrences[ch] += 1

    odd_ocurrences = 0
    for ch in char_ocurrences:
        if char_ocurrences[ch] % 2 != 0:
            odd_ocurrences += 1

    if odd_ocurrences > 1:
        return []
    else:
        word_permutations = list({''.join(w) for w in itertools.permutations(word)})
        return [w for w in word_permutations if is_palindrome(w)]


def is_palindrome(word):
    # we just need to check half of the string
    for i in range(len(word) // 2):
        if word[i] is not word[-(i+1)]:
            return False
    return True


if __name__ == '__main__':
    word = input("Introduce a word: ")
    palindromes = obtain_palindromes(word.split(' ')[0])
    print('Palindromes of %s:'.format(word))
    for w in palindromes:
        print(w)
    print('\n')
