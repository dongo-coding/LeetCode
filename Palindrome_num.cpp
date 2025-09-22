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
    int temp=x;
    long long res=0;
    while(temp){
        int rem=temp%10;
        res=res*10+rem;
        temp/=10;
    }
    if (x==0) return true;
    else if (x==res && x>0) return true;
    else return false;
    }
}; //use Mathematical approach way to check Palindrome string
