//https://leetcode.com/problems/two-sum/description/

class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] out = new int[2];
        int ipos = 0;
        int kpos = 0;
        int nums2[] = new int[nums.length];
        for (int i = 0; i < nums.length; i++){
            nums2[i] = nums[i];
        }
        for(int i = 0; i < nums.length; i++){
            ipos = i;
            for (int k = 0; k < i; k++){
                kpos = k;
                if(nums[i] + nums2[k] == target){
                    out[0] = ipos;
                    out[1] = kpos;
                    return out;
                }
            }
        }
        return new int[2];
    }
}
