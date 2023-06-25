#include <string>
#include <iostream>
#include <list>
#include <cassert>

using namespace std;

string reverseWords(string str) {
    list<string> words;

    string word = "";

    for (char ch : str) {
        if (ch == ' ') {
            words.push_front(word);
            word = ""; //.clear();
        }
        word += ch;
    }

    // Last word
    if (!word.empty())
        words.push_front(word);

    string reverseWords;

    bool isFirstWord = true;
    for (const string wrd : words) {
        if (!isFirstWord) {
            reverseWords += ' ';
        }
        reverseWords += wrd;
        isFirstWord = false;
     }

    string result;
    int i = 0;
    while (reverseWords[i] == ' ') i++;
    while (i < reverseWords.length()) {
        if (reverseWords[i] == ' ') {
            result.push_back(reverseWords[i]);
            i++;
            while (reverseWords[i] == ' ') i++;
        } else {
            result.push_back(reverseWords[i]);
            i++;
            
        }
    }
    if (result.back() == ' ') result.pop_back();

    return result;
}

  /*  if (!reverseWords.empty()) {
       reverseWords.pop_back();
       
       int start_pos = reverseWords.find_first_not_of(' ');
       int end_pos = reverseWords.find_last_not_of(' ');
       reverseWords = reverseWords.substr(start_pos, end_pos - start_pos + 1);
    }
    
     return reverseWords;

}
*/
int main() {

    string cities = "pune bangalore hyderabad chennai mumbai";

    string reverse = "mumbai chennai hyderabad bangalore pune";

    assert(reverseWords(cities) == reverse);

    return 0;
}

// C++ Template
