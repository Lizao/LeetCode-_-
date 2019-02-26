#include <iostream>
#include <cstdio>
#include <vector>
#include <string.h>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> result;
		int pos = 0;
        for(int ix = 0;ix<emails.size();++ix)
		{
			int len = strlen(emails[ix].c_str());
			string email = emails[ix];
		    int stop_pos = email.find('@');
		    int plus_pos = email.find('+');
		    if(plus_pos<stop_pos)
		    {
		    	int erase_len = stop_pos-plus_pos;
		    	email.erase(plus_pos,erase_len);
		    	stop_pos -= erase_len; 
			}
			int dot_pos = email.find('.');
			while (dot_pos < stop_pos)
            {
                email.erase(dot_pos, 1);
                stop_pos--;
                dot_pos = email.find('.');
            }
            result.insert(email);
		} 
		return result.size();
    }
};

int main()
{
    vector<string> emails = {"test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};
    cout << Solution().numUniqueEmails(emails);
    return 0;
}
