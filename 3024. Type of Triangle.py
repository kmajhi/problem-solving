class Solution(object):
    def triangleType(self, nums):
        a,b,c = nums

        if a <= 0 or a>= b <= 0 or c <= 0 or a + b <= c or a + c <= b or b + c <= a:
            return "none"

        if a == b == c:
            return "equilateral"
        elif a == b or b == c or c == a:
            return "isosceles"
        else:
            return "scalene"
