class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> data; 
        int n = temperatures.size(); 
        if(n<1) return temperatures; 
        
        vector<int> result(n,0);
        
        data.push(0);
        int prv = temperatures[0];
        for(int i =1; i< n; i++)
        {
            
            int cur = temperatures[i];
            if(prv < cur)
            {
                while(!data.empty())
                {
                    int t = data.top();
                    if(temperatures[t] < cur)
                    {
                        result[t] =  i-t; 
                        data.pop(); 
                    }
                    else
                    {
                        break;
                    }
                    
                }
            }
            
            data.push(i);
            prv = cur; 
            
        }
        
         while(!data.empty())
            {
                int t = data.top();
               
                    result[t] =  0; 
                    data.pop(); 
                

            }
        return result; 
        
    }
};