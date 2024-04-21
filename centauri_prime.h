#include <iostream>
#include <set>

using namespace std;

class CentauriPrime{
public:
    CentauriPrime(){
        Run();
    }
    ~CentauriPrime(){}

    void Run(){
        string input;
        cin >> input;

        set<char> vowels = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};

        for(int i = 0; i < stoi(input); ++i){
            string kingdom;
            cin >> kingdom;

            size_t len = kingdom.size();

            cout << "Case #" << i+1 << ": " << kingdom << " is ruled by "; 
            if(len == 0){
                cout << "nobody";
            }else if(vowels.find(kingdom[len-1]) != vowels.end()){
                cout << "Alice";
            }else if(kingdom[len-1] == 'Y' || kingdom[len-1] == 'y'){
                cout << "nobody";
            }else{
                cout << "Bob";
            }

            cout << ".\n";

        }
        
    }

};