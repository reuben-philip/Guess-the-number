#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std; 

int main(){
    int upper_bound = 0; 
    int lower_bound = 0;

    cout << "what is the the range \nlower bound: ";
    cin >> lower_bound;

    cout << "upper bound: ";
    cin >> upper_bound;

    srand(time(0));

    int random = (rand() % (upper_bound - lower_bound + 1)) + lower_bound;

    cout << "Your random number from the range of "<< lower_bound << "-" << upper_bound << " is:" << random; 

    return 0;
}
