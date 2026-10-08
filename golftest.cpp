#include<iostream>
#include<cmath>
using namespace std;

const int NUM_HOLES = 18;
const int playerNum = 4;

void calcScore(const int par[], const int score[][NUM_HOLES], int strokes[]);
//precondition:
//postcondition:

void calcAvg(const int par[], const int score[][NUM_HOLES], double avg[]); 
//precondition:
//postcondition:


int main(){

    int a[5][NUM_HOLES];
    int strokes[playerNum];
    double avg[NUM_HOLES];

    cout << "Enter your scorecards: \n";

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < NUM_HOLES; j++){
            cin >> a[i][j];
        }
    }

    calcScore(a[0], a + 1, strokes);
    calcAvg(a[0], a + 1, avg);

    for(int i = 0; i < playerNum; i++){
        cout << "Player " << i + 1 << ": " << strokes[i] << endl;
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    for(int i = 0; i < NUM_HOLES; i++){
        cout << "Hole " << i + 1 << ": " << avg[i] << endl;
    }

}



void calcScore(const int par[], const int score[][NUM_HOLES], int strokes[]){

    for (int i = 0; i < playerNum; i++){

        int scoreSum = 0;

        for (int j = 0; j < NUM_HOLES; j++){
            scoreSum = scoreSum + par[j] + score[i][j];
        }

        strokes[i] = scoreSum;
    }
}


void calcAvg(const int par[], const int score[][NUM_HOLES], double avg[]){

    for (int i = 0; i < NUM_HOLES; i++){

        int scoreSum = 0;

        for (int j = 0; j < playerNum; j++){
            scoreSum = scoreSum + par[i] + score[j][i];
        }

        double average = (double)scoreSum / playerNum;

        avg[i] = floor(average * 10 + 0.5) / 10.0;
    }
}