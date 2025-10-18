#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(){
    array <char, 6> vowels = {'A', 'O', 'Y', 'E', 'U', 'I'};
    string s;
    cin >> s;
    string result= "";
    for (char c : s) {
        char lower = tolower(c);
        bool isVowel = false;
        for (char v : vowels){
            if (lower == tolower(v)){
                isVowel = true;
                break;
            }
        }

        if(!isVowel){
            result += '.';
            result += lower;
        }
    }
    cout << result << endl;
    return 0;
}