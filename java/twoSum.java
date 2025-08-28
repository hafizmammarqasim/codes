import java.util.HashMap;

public class twoSum {
    public int[] solution(int[] nums, int target) {
       HashMap<Integer,Integer> elements = new HashMap<>();
        int[] result = new int[2];
    //if i add all elements first and then find the diff from that hashmap
    //by looping through array, then:
    //it would be costly
    //there is a risk of returning the same index, that's why we use this       approach 
        for(int i=0; i<nums.length; i++){
            if(!elements.isEmpty()){
                int difference = target - nums[i];
                if(elements.containsKey(difference)){
                    result[0] = i;
                    result[1] = elements.get(difference);

                    return result;
                }
            }
            elements.put(nums[i],i);
        }
        return null;
    }
}