#include <iostream>
#include <math.h>
using namespace std;

class ChallengeNine{
public:
    ChallengeNine(){
        Run();
    }

    ~ChallengeNine(){}

    void Run(){
        // positive integer N
        // construct a new number without leading zeros, that is a multiple of 9
        // by inserting EXACTLY one digit(0...9) anywhere in the given number N.
        // It is guaranteed that N does not have any leading zeros.
        // Construct the smallest such number possible!

        /* Input: 
            - first line of input gives the number of test cases, T
            - Each test case has a single line containing a positive integer N

           Output:
            - a line containing "Case #x: y"
        */

       // work forwards on the problem therefore working from smallest to largest

        string test_case_count;
        cin >> test_case_count;

        for(int i = 0; i < stoi(test_case_count); ++i){
            string user_input;
            cin >> user_input;


            vector<char> digits = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

            int global_min = INT_MAX;
            
            string input = user_input;

            for(int i = 0; i < input.size()+1; ++i){
                for(int j = 0; j < digits.size(); ++j){
                    if(i == 0 && j == 0){
                        continue;
                    }

                    string new_input = input.substr(0,i);
                    new_input += digits[j];
                    new_input += input.substr(i,input.size() - i);
                    // cout << new_input << endl;
                    int val = stoi(new_input);
                    if(val % 9 == 0){
                        global_min = min(global_min, val);
                    }
                    // backtrack
                    input = user_input;
                }
            }
            cout << global_min << endl;
        }
    }

};