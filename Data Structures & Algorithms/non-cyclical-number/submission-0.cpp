class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        while(n != 1){
            int num = n;
            int sum = 0;
            while(num != 0){
                int dig = num % 10;
                num = num / 10;
                sum = sum + (dig * dig);
            }
            n = sum;
            if(s.find(n) != s.end()){
                return false;
            }
            s.insert(n);
        }
        return true;
    }
};
