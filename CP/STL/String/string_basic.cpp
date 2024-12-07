#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    // Taking string input using getline()
    
    //getline(cin, str);
    str = "Hello World.";
    cout << "The initial string is : ";
    cout << str << endl;

    // Inserting a character
    str.push_back('x');
    cout << "The string after push_back operation is : ";
    cout << str << endl;

    //str[0] = 'G';

    //concating string with character or another string
    
    str = str + "Welcome. ";
    cout <<"String after concatination: " << str << endl;

    // Deleting a character
    str.pop_back();

    // Displaying string
    cout << "The string after pop_back operation is : ";
    cout << str << endl;

    //copying string
    string temp = str;

    str.clear();
    cout <<"string str : " << str << endl;
    cout << "string temp: " << temp << endl;



    return 0;
}