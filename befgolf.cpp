#include<iostream>
#include <iomanip> 
using namespace std;

const int NUMBER_STUDENTS = 3;
const int NUMBER_QUIZZES = 4;

void computeStAve(const int grade[] [NUMBER_QUIZZES], double stAve[]);
void computeQuizAve(const int grade[] [NUMBER_QUIZZES], double quizAve[]);
void display(const int grad[] [NUMBER_QUIZZES], const double stAve[], const double quizAve[]);


int main() {
    int grade[NUMBER_STUDENTS] [NUMBER_QUIZZES];
    double stAve[NUMBER_STUDENTS];
    double quizAve[NUMBER_QUIZZES];

    //여기 뭐 더 있어야됨 어레이 채우는거
    for (int stNum = 0; stNum < NUMBER_STUDENTS; stNum++){
        cout << "Student" << (stNum+1) << "score: ";
        for(int quizNum = 0; quizNum < NUMBER_QUIZZES; quizNum++){
            cin >> grade[stNum] [quizNum];
        }
    }

    computeStAve(grade, stAve);
    computeQuizAve(grade, quizAve);
    display(grade, stAve, quizAve);

    return 0;
}


void computeStAve(const int grade[] [NUMBER_QUIZZES], double stAve[]){
    for (int stNum = 1; stNum <= NUMBER_STUDENTS; stNum++){
        
        double sum = 0;

        for(int quizNum = 1; quizNum <= NUMBER_QUIZZES; quizNum++)
            sum = sum + grade[stNum-1][quizNum-1];

        stAve[stNum-1] = sum/NUMBER_QUIZZES;
    }
}

void computeQuizAve(const int grade[] [NUMBER_QUIZZES], double quizAve[]){
    for (int quizNum = 1; quizNum <= NUMBER_QUIZZES; quizNum++){
        double sum = 0;
        for (int stNum = 1; stNum <= NUMBER_STUDENTS; stNum++)
            sum = sum + grade[stNum-1][quizNum-1];

        quizAve[quizNum-1] = sum/NUMBER_STUDENTS;
    }
}

void display(const int grade[] [NUMBER_QUIZZES], const double stAve[], const double quizAve[]){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    cout << setw(10) << "Student"
         << setw(5) << "Ave"
         << setw(15) << "Quizzes\n";
    for (int stNum = 1; stNum <= NUMBER_STUDENTS; stNum++){
        cout << setw(10) << stNum
             << setw(5) << stAve[stNum-1] << " ";
        for (int quizNum = 1; quizNum <= NUMBER_QUIZZES; quizNum++)
            cout << setw(5) << grade[stNum-1][quizNum-1];

        cout << endl;
    }

    cout << "Quize averages = ";
    for (int quizNum = 1; quizNum <= NUMBER_QUIZZES; quizNum++)
        cout << setw(5) << quizAve[quizNum-1];
        cout << endl;
}