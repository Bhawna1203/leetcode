class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        
        Map<Integer,Integer> temp = new HashMap<>();
        
        for(int i =0; i<nums.length; i++){
            
            Integer index = temp.put(nums[i],i);
            
            if(index!=null && i-index <= k){
                return true;
            }
            
        }
        
        return false;
      
    }
}