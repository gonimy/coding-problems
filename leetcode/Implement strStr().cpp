class Solution {
public:
	int strStr(string str1, string str2) {
		if (str2.length()>str1.length())
			return -1;
		if (str1.length()==0 && str2.length()==0)
			return 0;
		if (str1.size()==0)
			return -1;
		for (int i=0, j=0;i<str1.length()-str2.length()+1;i++)
		{
			while (str1[i+j]==str2[j] && j<str2.length())
			{
				j++;
			}
			if (j==str2.length())
				return i;
			else
			{
				j=0;
			}
		}
		return -1;
	}


};
