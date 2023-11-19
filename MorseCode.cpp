#include <bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
map<char,string>mpp1={
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."}, {'F', "..-."}, 
    {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."}, 
    {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, 
    {'S', "..."}, {'T', "-"}, {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, 
    {'Y', "-.--"}, {'Z', "--.."}, {'0', "-----"}, {'1', ".----"}, {'2', "..---"}, 
    {'3', "...--"}, {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."}, 
    {'8', "---.."}, {'9', "----."},{' ',"/"}
};
map<string,char>mpp2{
    {".-", 'A'}, {"-...", 'B'}, {"-.-.", 'C'}, {"-..", 'D'}, {".", 'E'},
    {"..-.", 'F'}, {"--.", 'G'}, {"....", 'H'}, {"..", 'I'}, {".---", 'J'},
    {"-.-", 'K'}, {".-..", 'L'}, {"--", 'M'}, {"-.", 'N'}, {"---", 'O'},
    {".--.", 'P'}, {"--.-", 'Q'}, {".-.", 'R'}, {"...", 'S'}, {"-", 'T'},
    {"..-", 'U'}, {"...-", 'V'}, {".--", 'W'}, {"-..-", 'X'}, {"-.--", 'Y'},
    {"--..", 'Z'}, {"-----", '0'}, {".----", '1'}, {"..---", '2'},
    {"...--", '3'}, {"....-", '4'}, {".....", '5'}, {"-....", '6'},
    {"--...", '7'}, {"---..", '8'}, {"----.", '9'}, {"/", ' '}
};
int main() {
    int choice;
    cout<<"MENU\nType 1 to convert text to morse Code\nType 2 to convert morse Code to text\nType 3 to exit"<<endl;
    while(true){
    cout<<"Enter your choice: ";
    cin>>choice;
        if(choice==1){
                string input="";
                cout <<"Enter the text you want to convert: ";
                cin.ignore();
                getline(cin,input);
                string result=" ";
                for(char it:input){
                    if(isalpha(it)||isdigit(it)||it==' '){
                        result+=mpp1[toupper(it)]+" ";
                    }
                    else{
                        result+=" ";
                    }
                }
                cout<<input<<" in Morse Code is: "<<result<<endl;
            }
        else if(choice==2){
                string input="";
                cout<<"Enter the morse code with space for letter: ";
                cin.ignore();
                getline(cin,input);
                string result=" ";
                stringstream compare(input);
                string sminput;
                
                while (compare >> sminput) { 
                    auto it = mpp2.find(sminput);
                if (it != mpp2.end()) {
                result += it->second;
                } else {
            result += '?';  
        }
    }
            cout<<input<<" in Text is: "<<result<<endl;
        } 
        else if(choice==3){
                break;
            }
        else {
                cout<<"Invalid Choice"<<endl;
                break;
            }
    }
    return 0;
}
