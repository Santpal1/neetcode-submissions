class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 0;
        if(digits[n - 1] + 1 > 9){
            digits[n - 1] = (digits[n - 1] + 1) % 10;
            carry = 1;
        }
        else{
            digits[n - 1] = digits[n - 1] + 1;
        }
        if(carry == 1){
            for(int i = n - 2; i >= 0; --i){
                if(digits[i] + carry > 9){
                    digits[i] = (digits[i] + carry) % 10;
                    carry = 1;
                }
                else{
                    digits[i] = digits[i] + carry;
                    carry = 0;
                    break;
                }
            }
        }
        if(carry == 1){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
