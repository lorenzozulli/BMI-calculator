#include <iostream>
using namespace std;

int main(){
    float height, weight, bmi;

    do{
        cout << "Insert your height (m): ";
        cin >> height;
        cout << endl;
        cout << "Insert your weight (kg): ";
        cin >> weight; 
    } while (height != 0 || weight != 0);
   
    bmi=weight/(height*height);
    
    cout << "Your BMI is: ";
    cout << bmi <<endl; 

    if (bmi<16) cout << "You are a lot Underweight!"<<endl;
    else if (bmi>16 && bmi<18.5) cout << "You are Underweight!"<<endl;
    else if (bmi>18.5 && bmi<25) cout << "Your weight is normal!"<<endl;
    else if (bmi>25 && bmi<30) cout << "You are Overweight!"<<endl;
    else cout << "You are Obese!"<<endl;

    return 0;
}