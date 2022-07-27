
#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;
using std::cin;
using std::getline;
string WhatisaWoman(string  question) {
    string DefinedAnswer = "Thank you for your non-circular definition........";
    string UserAnswer1;
    string CircularDefinition1 = "a woman is a person who identifies as a woman";
         cout << " \n So what is a woman exactly? \n You can write whatever you want \n as long as you don't use the word woman to define woman \n e.g IF you write these words --> 'a woman is a person who identifies as a woman', the \n program will take it as you having not given it an answer and will ask you again. \n" << endl;
         cout << " Answer :";
         getline(cin, UserAnswer1);
         if (UserAnswer1 == CircularDefinition1)
             return WhatisaWoman(question);
         cout << "\n Thank you for your non-circular definition. Press Enter to exit" << endl;
         return DefinedAnswer;
         system("Pause>0");
}
int main() {
    string UserAnswer;
    string CircularDefinition = "a woman is a person who identifies as a woman";
        cout << "What is a woman? \n \n You can write whatever you want \n as long as you don't use the word woman to define woman \n e.g IF you write these words --> 'a woman is a person who identifies as a woman', the \n program will take it as you having not given it an answer and will ask you again. \n" << endl;
        cout << " Answer : ";
        getline(cin,UserAnswer);
         if (UserAnswer.compare(CircularDefinition) == 0)
            WhatisaWoman("SimpleQuestion");
         else 
            cout << " \n Thank you for giving your non-circular definition. Press Enter to exit" << endl;
          system("Pause>0");
}




