s1 = input("Enter first string: ")
s2 = input("Enter second string: ")

if len(s1) != len(s2):
    print("Not an anagram")
else:
    if sorted(s1) == sorted(s2):
        print("Strings are anagrams")
    else:
        print("Not an anagram")
