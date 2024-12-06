class Solution {
    public boolean isAnagram(String s, String t) {

        if (s.length() != t.length())
            return false;

        HashMap<Character, Integer> mp = new HashMap<>();
        for (int i = 0; i < t.length(); i++) {
            mp.put(t.charAt(i), mp.getOrDefault(t.charAt(i), 0) + 1);
        }


        for (int i = 0; i < s.length(); i++) {
            if (!mp.containsKey(s.charAt(i)) || mp.getOrDefault(s.charAt(i), 0) == 0) {
                return false;
            }
            mp.put(s.charAt(i), mp.get(s.charAt(i)) - 1) ;
        }
        return true;
    }
}