#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    std::ifstream myfile; 
    myfile.open("day2.in");

    std::string mystring;
    int calc = 0;
    int total = 0;

    while(myfile.good()){
        getline(myfile, mystring); // pipe file's content into stream
        //std::cout << mystring; // pipe stream's content to standard output
        string opponent = "";
        string you = "";

        if(mystring[0] == 'A')
            opponent = "rock";
        else if(mystring[0] == 'B')
            opponent = "paper";
        else if(mystring[0] == 'C')
            opponent = "scissors";
        if(mystring[2] == 'X') {
            you = "rock";
            total += 1;
        }
        else if(mystring[2] == 'Y'){
            you = "paper";
            total += 2;
        }
        else if(mystring[2] == 'Z'){
            you = "scissors";
            total += 3;
        }
        if(you == opponent)
            total+= 3;
        
        if(opponent == "scissors" && you == "rock") 
            total += 6;
        if(opponent == "rock" && you == "paper") 
            total += 6;
        if(opponent == "paper" && you == "scissors") 
            total += 6;
        
        //cout << stoi(mystring) <<endl;
    }

    cout << total;
    return 0;
}


