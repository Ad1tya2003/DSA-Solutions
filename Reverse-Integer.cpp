class Solution {
public:
    int reverse(int x) {
        long long rev=0;
        int z=abs(x);
        

        while(z>0)
        {
            int y=z%10;
            rev=rev*10 + y;
            z/=10;
        }

        if(x<0 && rev< pow(2,31))
        {
            return -rev;
        }
        else if(x>0 && rev<pow(2,31))
        {
            return rev;
        }
        else
        {
            return 0;
        }
        
    }
};