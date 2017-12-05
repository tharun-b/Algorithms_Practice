class Solution {
public:
    vector<int> count(vector<int> &v)
    {
        vector<int> result; 
        int ct =1; 
        int p = v[0];
        
        int a ; 
        for(int i =1; i< v.size(); i++)
        {
             a = v[i];
            if(p == a)
            {
                ct++;
                
            }
            else
            {
                result.push_back(ct);
                result.push_back(p);
                ct = 1;
            }
             p = a; 
            
        }
        
        result.push_back(ct);
        result.push_back(a);
        return result; 
        
    }
    string countAndSay(int n) {
        int i =1; 
        vector<int> v(1,1);
        while(i<n)
        {
            v = count(v);
            i++; 
            
        }
        string result; 
        for(auto a:v)
        {
            result+= to_string(a);
        }
        return result; 
    }
};