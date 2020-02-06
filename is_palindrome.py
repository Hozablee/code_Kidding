def is_palindrome(words):
    first =0
    last = len(words)-1
    while first<=len(words)//2 and last > 0:
        if words[first]==words[last]:
            first=first+1
            last=last-1
        else:
            return False
    if words[first]==words[last]:
        return True
