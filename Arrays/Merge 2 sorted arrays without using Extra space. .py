class Solution(object):
    def merge(self, nums1, m, nums2, n):
        k = m + n - 1
        i = m - 1
        j = n - 1

        while (i > -1 and j > -1):
            if nums1[i] > nums2[j]:
                nums1[k] = nums1[i]
                i -= 1
                k -= 1
            else:
                nums1[k] = nums2[j]
                j -= 1
                k -= 1
        if j >= 0:
            for i in range(k + 1):
                nums1[i] = nums2[i]


s = Solution()
nums1 = [1]
m = 1
nums2 = []
n = 0
s.merge(nums1, m, nums2, n)
print(nums1)