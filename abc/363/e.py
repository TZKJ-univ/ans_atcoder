import numpy as np
from itertools import permutations

def next_permutation(arr):
    i = len(arr) - 2
    while i >= 0 and arr[i] >= arr[i + 1]:
        i -= 1
    if i == -1:
        return False
    j = len(arr) - 1
    while arr[j] <= arr[i]:
        j -= 1
    arr[i], arr[j] = arr[j], arr[i]
    arr[i + 1:] = reversed(arr[i + 1:])
    return True

def is_palindrome(s):
    return s == s[::-1]

def get_substrings(s, K):
    for i in range(len(s) - K + 1):
        substr = s[i:i + K]
        if is_palindrome(substr):
            return True
    return False
N, K = map(int, input().split())
s = input().strip()

arr = sorted(s)
ans_list = []

while True:
    perm_str = ''.join(arr)
    if not get_substrings(perm_str, K):
        ans_list.append(perm_str)
    if not next_permutation(arr):
        break

print(len(ans_list))
