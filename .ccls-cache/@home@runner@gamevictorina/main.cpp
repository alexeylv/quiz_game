#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int score = 0;
    char answer1, answer2, answer3, answer4, answer5;

    // Get user name
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Welcome to the Quiz Game, " << name << "!\n\n";

    // Question 1
    cout << "1) What is the capital of France?\n";
    cout << "a) London\nb) Paris\nc) Madrid\n\n";
    cout << "Enter your answer (a/b/c): ";
    cin >> answer1;
    if (answer1 == 'b') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is b) Paris.\n";
    }
    cout << endl;

    // Question 2
    cout << "2) What is the largest organ in the human body?\n";
    cout << "a) Heart\nb) Liver\nc) Skin\n\n";
    cout << "Enter your answer (a/b/c): ";
    cin >> answer2;
    if (answer2 == 'c') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is c) Skin.\n";
    }
    cout << endl;

    // Question 3
    cout << "3) Who is the author of the Harry Potter series?\n";
    cout << "a) J.K. Rowling\nb) Stephen King\nc) Dan Brown\n\n";
    cout << "Enter your answer (a/b/c): ";
    cin >> answer3;
    if (answer3 == 'a') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is a) J.K. Rowling.\n";
    }
    cout << endl;

  // Question 4
  cout << "4) Which faculty was Harry Potter a student of?\n";
  cout << "a) There is no right answer\nb) Hufflepuff\nc) Ravenclaw\n\n";
  cout << "Enter your answer (a/b/c): ";
  cin >> answer4;
  if (answer4 == 'a') {
      cout << "Correct!\n";
      score++;
  } else {
      cout << "Wrong! The correct answer is a) J.K. Rowling.\n";
  }
  cout << endl;
  
  // Question 5
  cout << "5) How many strings does an acoustic guitar have?\n";
  cout << "a) 6\nb) 23\nc) 3\n\n";
  cout << "Enter your answer (a/b/c): ";
  cin >> answer5;
  if (answer5 == 'a') {
      cout << "Correct!\n";
      score++;
  } else {
      cout << "Wrong! The correct answer is a) J.K. Rowling.\n";
  }
  cout << endl;


  
  // Display final score and message
      cout << "Congratulations, " << name << "! You scored " << score << " out of 5.\n";
      if (score == 5) {
          cout << "You are a Quiz Master!\n";
      } else if (score == 4) {
          cout << "Very Good!!\n";
      } 
        else if (score == 3) {
            cout << "Good!\n";
        } 
          else if (score == 2) {
              cout << "Well done!\n";
          } 
      
      else {
          cout << "Better luck next time!\n";
      }

      return 0;
  }