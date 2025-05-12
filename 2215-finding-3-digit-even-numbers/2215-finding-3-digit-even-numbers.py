from itertools import permutations
class Solution(object):
    def findEvenNumbers(self, digits):
        result = set()
        for perm in permutations(digits,3):
            if perm[0] == 0:
                continue
            num = perm[0] * 100 + perm[1] * 10 + perm[2]
            if num % 2 == 0:
                result.add(num)
        return sorted(result)
    

        