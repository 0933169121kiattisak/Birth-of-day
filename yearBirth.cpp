#include <iostream>
using namespace std;

int main() { 
  int FirstYear, FirstMonth, FirstDay;
  int SecondYear, SecondMonth, SecondDay;

  cout << "year of birth First: " << endl;
  cin >> FirstYear;
  cout << "month of birth First: " << endl;
  cin >> FirstMonth;
  cout << "day of birth First: " << endl;
  cin >> FirstDay;
  
  cout << "year of birth Second: " << endl;
  cin >> SecondYear;
  cout << "month of birth Second: " << endl;
  cin >> SecondMonth;
  cout << "day of birth Second: " << endl;
  cin >> SecondDay;

  if(FirstYear == SecondYear && FirstMonth == SecondMonth && FirstDay == SecondDay){
    cout << "First and Second are the born together" << endl;
  }else if (FirstYear == SecondYear && FirstMonth < SecondMonth) {
    cout << "First is born fisrt" << endl;
  }else if (FirstYear == SecondYear && FirstMonth > SecondMonth) {
     cout << "Second is born fisrt" << endl;
  }else if(FirstYear == SecondYear && FirstMonth == SecondMonth && FirstDay < SecondDay) {
    cout << "First is born fisrt" << endl;
  }else if(FirstYear == SecondYear && FirstMonth == SecondMonth && FirstDay > SecondDay) {
    cout << "Second is born fisrt" << endl;
  }else if(FirstYear < SecondYear) {
    cout << "First is born fisrt" << endl;
  }else if(FirstYear > SecondYear){
    cout << "Second is born fisrt" << endl;
  }else{
    cout <<  "Did no answer" << endl;
  }

  cout << FirstYear << " " << FirstMonth << " " << FirstDay << endl;
  cout << SecondYear << " " << SecondMonth << " " << SecondDay << endl;

  
  
  return 1;
}