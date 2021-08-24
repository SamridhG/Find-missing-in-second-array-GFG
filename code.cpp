class Solution{
	
	
	public:
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    // Your code goes here
	    set<long long>a;
	    vector<long long>res;
	    for(int i=0;i<M;i++)
	    {
	        a.insert(B[i]);
	    }
	    for(int i=0;i<N;i++)
	    {
	        if(a.find(A[i])==a.end())
	        {
	            res.push_back(A[i]);
	        }
	    }
	    return res;
	} 
};
