class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        string str=to_string(x);
        string dao_nguoc_chuoi=str;
        reverse(dao_nguoc_chuoi.begin(), dao_nguoc_chuoi.end());
        return str==dao_nguoc_chuoi;
    }
}; //check Palindrome string

---------------------------------------------------

class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0 || (x%10==0 && x!=0)) return false;
        int nua_dx=0;
        while(x>nua_dx){
            nua_dx=nua_dx*10+nua_dx%10;
            x/=10;
        }
        return x==nua_dx || x==nua_dx/10;
    }
}; //use Mathematical approach way to check Palindrome string
