class Solution {
    public boolean containsDuplicate(int[] nums) {
         HashMap <Integer , Integer> mp = new HashMap<Integer , Integer>() ;
        for(int i : nums){
            mp.put(i , mp.getOrDefault(i , 0) + 1) ;
            if(mp.get(i) > 1)
            {
                return true ;
            }
        }

        return false ;
    }
}