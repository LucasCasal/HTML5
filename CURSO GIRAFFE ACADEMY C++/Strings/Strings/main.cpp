#include <iostream>

using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
    cout << phrase.length()<<endl;
    cout << phrase [0] <<endl;
    cout << phrase [2] <<endl;
    cout << phrase.find("Academy", 0) <<endl;
    string phrasesub;
    phrasesub = phrase.substr(8,3);
    cout << phrasesub;


    return 0;
}
