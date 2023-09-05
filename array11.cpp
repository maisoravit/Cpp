// #include <iostream>
// #include <string>
// #include <set>
// using namespace std;
//     int main(){
//     string input;
//     int i = 0;
//     int size = 100;
//     char output[size];
//     getline(cin,input);

//     // Create a set to store the digits found in the input string
//     set<char> digits_found;

//     // Iterate through the characters in the input string
//     for (char c : input) {
//         if (isdigit(c)) {
//             digits_found.insert(c);
//         }
//     }

    
//     for (char c = '0'; c <= '9'; ++c) {
//         if (digits_found.find(c) == digits_found.end()) {
//             output[i] = c;
//             i++;
//         } 
//     }
//     size_t len;
//     len = sizeof(output)/sizeof(output[0]);
//     // len = *(&output + 1) - output;
//     cout<<len<<endl;
//     cout<<output[0]<<endl;
//     cout<<output[1]<<endl;
//     cout<<output[4]<<endl;
//     for (int j = 0; j<len;j++){
//         cout<<output[j]<<",";
//     }
//     cout << endl;
//     }
// #include<iostream>
// using namespace std;
// string input;
// int main(){
//     cout << "Enter a string: ";
//     getline(cin,input);

    
//     set<char> digits_found;

   
//     for (char c : input) {
//         if (isdigit(c)) {
//             digits_found.insert(c);
//         }
//     }

//     cout << "Numbers not found in the string: ";
//     for (char c = '0'; c <= '9'; ++c) {
//         if (digits_found.find(c) == digits_found.end()) {
//             cout << c ;
//         }

//     cout << endl;
    
// }
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
    string input;
    getline(cin,input);
    bool find[10] = {false};
    for (char c :input){
        int k = c - '0';
        if (0<=k &&k<=9) find[k] = true;
    }
    string missing = "";
    for (int i =0;i<10;++i){
        if (!find[i]) missing+= to_string(i) + ',';
    }
    if (missing.length()==0)
        cout<<"None";
    
    else
        cout<<missing.substr(0,missing.length()-1);
    
}