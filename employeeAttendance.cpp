#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
      srand(time(0));
      int randomNum = rand() % 2;
      cout << randomNum << endl;

    if(randomNum==1){
         cout << "Employee is Present" << endl;
    }
    else{
          cout << "Employee is Absent" << endl;
    }

    return 0;
}
