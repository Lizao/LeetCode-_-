#include <iostream>
#include <cstring>
#include <string>

using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        int ix = 0,jx = 0;
		for(ix = len-1;ix >=0 && s[ix]==' '; --ix){}
		for(jx = ix;jx >=0 && s[jx]!=' '; --jx){}
        return ix - jx;
	} 
};

int main(int argc, char** argv) {
	std::cout << "Hello world!\n";
	Solution s;
	int lenth = s.lengthOfLastWord("dfhsjfhsk  idfjld letrel   ");
	std::cout << lenth << endl; 
}
