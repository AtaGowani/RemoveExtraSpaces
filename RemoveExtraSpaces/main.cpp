//
//  main.cpp
//  RemoveExtraSpaces
//  This program removes extra white spaces from files and creates a new
//  file which has no extra space.
//
//  By Ata Gowani

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    fstream start;
    fstream middle;
    fstream finalOut;
    fstream store;
    int run = 0;
    start.open("index.txt", ios::in);
    middle.open("holder.txt", ios::out);
    finalOut.open("motivation.txt", ios::out);
    string quotes;
    string words;
    getline(start, quotes);
    while(start){
        if (run > 0){
            middle.open("holder.txt", ios::out);
        }
        middle << quotes;
        middle.close();
        middle.open("holder.txt", ios::in);
        while(!middle.eof()){
            middle >> words;
            finalOut << words << " ";
        }
        finalOut << endl;
        run++;
        getline(start, quotes);
        middle.close();
    }
    start.close();
    middle.close();
    finalOut.close();
    store.close();
    
    return 0;
}
