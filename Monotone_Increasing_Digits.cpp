class Solution {
public:
    int monotoneIncreasingDigits(int N) {
        int x = N;  
        string s = to_string(N);
        int n = s.size(); 
        int nflag = -1; 
        
        for(int i = n-1; i>0; i--)
        {
            if(s[i] >= s[i-1])
            {
                
            }
            else
            {
                nflag = i; 
                s[i-1] -= 1; 
            }
        }
        
        if(nflag>0)
        {
            for(int i = nflag ; i<n ; i++)
            {
                s[i] = '9'; 
            }
        }
        else 
            return N; 
        
        return stoi(s);
        
        
    }
};