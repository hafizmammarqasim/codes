package java;
import java.util.HashMap;

class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        //this approach may not be true for finding how many duplicates
        //it can just tell that there is a duplicate

        for(int i = 0; i<nums.length; i++){
            if(!map.isEmpty()){
                if(map.containsKey(nums[i])){
                    return true;
                }
            }
            map.put(nums[i],i);
        }
        return false;
    }
}