class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int A_size = A.size();
        int tmp = 0;
        for(int ix=0,jx = A_size - 1;ix<jx;) {
            if(A[ix]%2==0) {
                ++ix;
            }
            else if(A[jx]%2==1)
            {
            	--jx;
            }
            else {
            	tmp = A[ix];
            	A[ix] = A[jx];
            	A[jx] = tmp;
            	++ix;--jx;
			}
        }
    	return A;   
    }	
};
