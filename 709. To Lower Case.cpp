#include <cstring>
#include <string.h>

using namespace std;

class Solution {
public:
    string toLowerCase(string str) {
        int len = strlen(str.c_str());
        for(int ix=0;ix<len;++ix)
        {
        	if(str[ix]<='Z' && str[ix]>='A')
        	    str[ix] += 32; 
		}
		return str; 
    }
};


int main(int argc, char** argv) {
	std::cout << "Hello world!\n";
	Solution s;
	string low = s.toLowerCase("AgjxTUIIOPX");
	printf("low is [%s]",low.c_str());
	return 0;
}
