// preprocessor directive
#include <iostream>
#include <iomanip>   // for setw(num)

using namespace std;

int main(){
  // hello world
  cout << "Hello World!\n";

  // variable and print
  int integer = 4543;
  cout << "The value of integer is " << integer << "\n";

  // check size of type
  cout<<"int size = "<<sizeof(int)<<"\n";
  cout<<"short size = "<<sizeof(short)<<"\n";
  cout<<"long size = "<<sizeof(long)<<"\n";
  cout<<"char size = "<<sizeof(char)<<"\n";
  cout<<"float size = "<<sizeof(float)<<"\n";
  cout<<"double size = "<<sizeof(double)<<"\n";
  cout<<"bool size = "<<sizeof(bool)<<"\n";

  // constant
  const int weightGoal = 100;
  cout << "weightGoal = " << weightGoal << endl;
  //weightGoal = 200; // Error happens here
  //cout << "weightGoal = " << weightGoal << endl;

  // enum
  enum Months {Jan, Feb, Mar, Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
  // Jan=0, Feb=1, Mar=2, ... Dec=11
  Months bestMonth;
  cout << Jan << '\n';
  //assign bestMonth one of the values of MONTHS
  bestMonth = Jan;
    
  // now we can check the value of bestMonths just 
  //like any other variable
  if(bestMonth == Jan){
    cout<<"I'm not so sure January is the best month\n";
  }  

  // setw
  cout<<"\n\nThe text without any formating\n";
  cout<<"Ints"<<"Floats"<<"Doubles"<< "\n";
  cout<<"\nThe text with setw(15)\n";
  cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<"Doubles"<< "\n";
  cout<<"\n\nThe text with tabs\n";
  cout<<"Ints\t"<<"Floats\t"<<"Doubles"<< "\n";
  
  return 0;
}
