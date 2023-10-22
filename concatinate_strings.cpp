// Created by daanish on 8/18/23.
#include <iostream>
using namespace std;
string Concat(string s1, string s2){
    int i=0,j=0;
    string s3;
    while (s1[i] != NULL){
        s3 += s1[i];
        i++;
    }
    while (s2[j] != NULL){
        s3 += s2[j];
        i++;
        j++;
    }
    s3[i]=NULL;
    return s3;
}
int main(){
        string s1,s2,s3;
        s1 = "abcde";
        s2 = "fghij";
        s3 =Concat(s1,s2);
//        cout << s3;
        string s4;
        s4 = s1+s2;
        cout << s4;
}

