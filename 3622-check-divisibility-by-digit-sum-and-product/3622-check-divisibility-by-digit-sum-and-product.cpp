class Solution {
public:
    bool checkDivisibility(int n) {
        // int count = 0;
        int bac = n;
        int temp=0;
        int sum=0;
        int mul = 1;
        while (n>0){
            temp = n%10;
            sum = sum + temp;
            mul = mul*temp;
            n = n/10;
        }

        // if(bac%sum == 0){
        //     count++;
        // }
        if(bac % (sum + mul) == 0 ){
            return true;
        }
        return false;
        
    }
};