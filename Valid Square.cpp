class Solution {
public:
    long sdistance(vector<int>& pi1, vector<int>& pi2)
    {
        
        return ( (((long)pi1[0]-pi2[0] )* ((long)pi1[0]-pi2[0]) )+( ((long)pi1[1]-pi2[1] )* ((long)pi1[1]-pi2[1]) ));
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        
        long d1 = sdistance(p1, p2);
        long d2 = sdistance(p3, p2);
        long d3 = sdistance(p4, p2);
        long d4 = sdistance(p3, p4);
        long d5 = sdistance(p1, p4);
        long d6 = sdistance(p1, p3);
        
        map<long,int> hash; 
        hash[d1]++;
        hash[d2]++;
        hash[d3]++;
        hash[d4]++;
        hash[d5]++;
        hash[d6]++;
       // cout<<hash.size()<<endl; 
        if(hash.size() != 2) return false; 
        for(auto a:hash)
        {
           // cout<<a.second<<endl; 
            if((a.second == 4) || ((a.second == 2)))
            {
                continue;
            }
            else
            {
                return false; 
            }
        }
        return true;
        
    }
};