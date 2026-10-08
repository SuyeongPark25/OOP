#include <iostream>
#include <string>
using namespace std;

int charFreq(string str, int MAX, char target);

int main(){

    int count;
    string str;
    cin >> str;
    for(char target = 'a'; target <= 'z'; target++){
        count = charFreq(str, str.length(), target);
        if(count > 0){
            cout << target << ": " << count << endl;
        }
    }
}


int charFreq(string str, int MAX, char target){

    int targetNum = 0;

    for(int index = 0; index < MAX; index++){
        if(isalpha(str[index])){
            str[index] = tolower(str[index]);

            if(str[index] == target){
                targetNum++;
            }
        }
    }
    return targetNum;
}