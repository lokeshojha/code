class Solution {
public:
    int reverse(int x) {
        
        int y=x;
        long  rev=0;
        while(y!=0){
            int rem=y%10;
            if(rev * 10 > INT_MAX || rev*10 <INT_MIN)
                return 0;
            rev=rev*10+rem;
            
            y=y/10;
        }
        return rev;
    }
};
