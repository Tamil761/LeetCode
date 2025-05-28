class Solution {
    public int lengthOfLongestSubstring(String s) {
        int left = 0, right = 0, maxLen = 0;
        HashSet<Character> hash_set = new HashSet();
        while(right < s.length()){
            if(!hash_set.contains(s.charAt(right))){
                hash_set.add(s.charAt(right));
                right++;
                maxLen = Math.max(hash_set.size(),maxLen);
            }
            else{
                hash_set.remove(s.charAt(left));
                left++;
            }
        }
        return maxLen;
    }
}