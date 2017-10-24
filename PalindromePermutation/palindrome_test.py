#!/usr/bin/env python3

import unittest
from palindrome import obtain_palindromes


class PalindromeTestCase(unittest.TestCase):
    def test_palindrome(self):
        self.check_lists_equal(["abba", "baab"], obtain_palindromes("baba"))
        self.check_lists_equal(obtain_palindromes("abab"), obtain_palindromes("baba"))
        self.check_lists_equal([], obtain_palindromes("abc"))
        self.check_lists_equal(["hannah", "hnaanh", "anhhna", "ahnnha", "nahhan", "nhaahn"],
                               obtain_palindromes("nhahan"))


    def check_lists_equal(self, a_list, other_list):
        if len(a_list) != len(other_list):
            return False

        for element in a_list:
            if element not in other_list:
                return False

        for element in other_list:
            if element not in a_list:
                return False

        return True


if __name__ == '__main__':
    unittest.main()
