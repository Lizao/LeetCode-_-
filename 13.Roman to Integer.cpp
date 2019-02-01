#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
#include <vector>
#include <stdlib.h>
#include <math.h>
#include <cctype>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int len = s.length();
        int result=0;
		for(int i=0;i<len;++i)
		{
			switch(s[i])
			{
				case 'I':
					if(s[i+1]=='V')
					{
						result += 4;
					    ++i;
					} 
					else if(s[i+1]=='X')
					{
						result += 9;
						++i;
					} 
					else
						result += 1;  
					break;
				case 'V':
					result += 5;
					break;
				case 'X':
				    if(s[i+1]=='L')
				    {
				    	result += 40;
					    i++;
				    } 
					else if(s[i+1]=='C')
					{
						result += 90;
						i++;
					}
					else
						result += 10;
					break;
				case 'L':
					result += 50;
					break;
				case 'C':
				    if(s[i+1]=='D')
				    {
				   	    result += 400;
					    i++;
				    }
				    else if(s[i+1]=='M')
				    {
						result += 900;
						i++;
				    }  
				    else
						result += 100;
					break;
				case 'D':
					result +=500;
					break;
				case 'M':
				    result +=1000;
					break;
				default:
					break;
			}
			
		}
		return result;
	}
};

int main()
{
	Solution *A = new Solution();
	int number = A->romanToInt("MCMXCIV");
	printf("atoi result is %d\n",number);
}
