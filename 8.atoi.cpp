class Solution {
public:
    int myAtoi(string str) {
		    static const int MAX = (int)((unsigned)~0 >> 1);
        static const int MIN = (-MAX - 1);
        static const int MAX_R = (int)((unsigned)~0 >> 1) % 10;  
    	  static const int MIN_R = (int)((((unsigned)~0 >> 1) + 1) % 10);
    	  static const int MAX_DIV = (int)((unsigned)~0 >> 1) / 10;  
    	  static const int MIN_DIV = (int)((((unsigned)~0 >> 1) + 1) / 10); 

        int len = str.length(), ix = 0, result=0, sign=1;

        for (; ix < len && str[ix] == ' '; ++ix) {}

        if (ix == len || !(isdigit(str[ix]) || str[ix] == '+' || str[ix] == '-')) {
          return 0;
        }

        sign = str[ix] == '-' ? -1 : 1;
        int step = str[ix] == '+' || str[ix] == '-' ? 1 : 0;
        ix += step;

        for(;ix < len; ++ix)
        {
          if( !isdigit(str[ix]))
          {
            break;
          }
          // to skip overflow
          if(sign>0 && (result > MAX_DIV || result==MAX_DIV && (str[ix]-'0')>MAX_R))
          {
            return MAX;
          }
          else if(sign<0 && (result > MIN_DIV) || (result==MIN_DIV && (str[ix]-'0')>MIN_R))
          {
            return MIN;
          }
              result = result*10 + str[ix]-'0'; 
        }
        return sign*result;
    }
};
