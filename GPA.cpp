#include <iostream> 
using namespace std; int main() 
{ 
    int grade; 
    cout << "Enter your grade: "; 
    cin >> grade; 
  
    if (grade > 100 || grade < 0) 
        cout << "Error ...\n "; 
    else
    if (grade >= 95 && grade <= 100) 
        cout << "You got Grade A+\n"; 
    else
    if (grade< 95 && grade>89) 
        cout << "You got Grade A\n"; 
    else
    if (grade<90  grade>84) 
        cout << "You got Grade B+\n"; 
    else
    if (grade<85  grade>79) 
        cout << "You got Grade B\n"; 
    else
    if (grade<80  grade>74) 
        cout << "You got Grade C+\n"; 
    else
    if (grade<75 grade>69) 
        cout << "You got Grade C\n"; 
    else
    if (grade<70  grade>64) 
        cout << "You got Grade D+\n"; 
    else
    if (grade<65  grade>59) 
        cout << "You got Grade D\n"; 
    else
    if (grade<60  grade >= 0) 
        cout << "You got Grade F\n"; 
      
  
    system("pause"); 
    return 0; 
}
