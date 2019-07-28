class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> temp;
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 != 0) {
                //cout << "Fizz";
                temp.push_back("Fizz");
            }
            else if (i % 5 == 0 && i % 3 != 0) {
                //cout << "Buzz";
                temp.push_back("Buzz");
            }
            else if (i % 5 == 0 && i % 3 == 0) {
                //cout << "FizzBuzz";
                temp.push_back("FizzBuzz");
            }
            else {
                //cout << to_string(i);
                temp.push_back(to_string(i));
            }
        }
        return temp;
    }
};