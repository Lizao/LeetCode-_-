Way 1:

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int num=0;
        for(int i=0;i<S.length();i++)
        {
		for(int j=0;j<J.length();j++)
		{
		    if(S[i]==J[j])
			num++;
		}
        }
        return num;
};

Way 2:
	
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        char alphabet[58] = {0};
	int index = -1,total = 0;

	for (int ix = 0;ix < J.length(); ++ix){
		alphabet[J[ix] - 0x41] = 1;
		std::cout<<J[ix] - 0x41<<endl;
	}

	for (int ix = 0;ix < S.length(); ++ix){
		index = S[ix] - 0x41;
		total = alphabet[index] ==1 ? ++total:total;
	}
	return total;
};
