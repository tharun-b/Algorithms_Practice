class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c < 0) return false; 
        if(c<3) return true; 
        int ref = (int)sqrt(c/2);
        
        for(;ref >=0; ref--)
        {
            int rem = c - (ref*ref);
            int b = sqrt(rem);
            if(b*b == rem) 
            {
             return true; 
            }
        }
        return false; 
    }
};