class Solution {
public:
		string fixString(string str){
			string s = "";
			for(int i = 0 ; i<str.length() ; i++){
				if(str[i]>=97 and str[i]<=122) s = s + str[i];
				else if(str[i]>=65 and str[i]<=90){ 
					char c = str[i] + 32;
					s = (s + c);
				}
			}
			return s;
		}
    bool isPalindrome(string s) {
        s = fixString(s);
				int i = 0 , j = s.length()-1;
				while(i<=j){
					if(s[i]!=s[j]) return false;
					i++;
					j--;
				}
				return true;
    }
};