class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        arr = sentence.split()
        for index, value in enumerate(arr):
            match = 0
            if len(searchWord) > len(value): continue
            for i in range(len(searchWord)):
                if searchWord[i] == value[i]:
                    continue
                else: 
                    match = -1
            if match == 0:
                return index+1
        return -1