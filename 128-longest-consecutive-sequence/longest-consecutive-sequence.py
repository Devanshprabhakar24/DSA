class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        n=len(nums)
        l,r=0,0
        if not nums:
            return 0
        nums.sort()
        length=0
        common=0
        while r<n-1:
            if (nums[r]+1==nums[r+1]):
                r+=1
            elif(nums[r]==nums[r+1]):
                common+=1
                r+=1
            else:
                length=max(length,r-l+1-common)
                l=r+1
                r+=1
                common=0
        length=max(length,r-l+1-common)
        return length