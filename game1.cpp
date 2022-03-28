#include <bits/stdc++.h>
#include <ctime>

using namespace std;

int main(){
    int i = 0;
    int r;
    int lives = 3;
    string again = "null";
    cout << "A dice is rolled and we get the number which is shown by the dice. The process is done 3 times." << endl;
    cout << "You have to guess the number which you think will be presented next." << endl;
    srand(time(0));

    while(i < 3){
        
        cout << "Roll " << i+1 << ": " << 1 + rand()%6 << endl;
        i++;
    }

    while(lives != 0){
        cout << "Guess the next number" << ": ";
        cin >> r;

        int p = 1 + rand()%6;

        if(r < 1 || r > 6){
            cout << "Enter a valid number!!!" << endl;
        }

        if(r > p || r < p){
            cout << "No, it's " << p << endl;
            lives--;
            cout << "Lives left: " << lives << endl;
            again = "null";
        }else{
            cout << "You got it right." << endl;
        }
    }

    cout << "You are out of your lives" << endl;
    cout << "Type start to start again or end to exit: ";
    cin >> again;
    if(again == "start"){
        main();
    }else if(again == "end"){
        exit;
    }
}