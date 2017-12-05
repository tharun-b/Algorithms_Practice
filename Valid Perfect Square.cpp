class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<0) return false; 
        if(num<2) return true;
         unordered_set<int> a = {0,1, 4, 5, 6, 9};
        
        
        if(a.find(num%10) == a.end()) return false; 
        
        int ct = 1; 
        int val = 1; 
        while(val < num)
        {
            val+= ((ct<<1) +1);
            if(val==num) return true;
            ct++;
        }
        return false; 
    }
};