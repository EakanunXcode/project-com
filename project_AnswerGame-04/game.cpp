#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "********  Game Started  **********" << endl;
    int score = 0;
    srand(time(0));
    switch (1) {
        //a + b ez
        case 1: {
            int a = rand() % 1000;
            int b = rand() % 1000;
            int sum = a + b;
            cout << "1) What is " << a << " + " << b << " ?" << endl;
            int a1;
            cin >> a1;
            if (a1 == sum) {
                score++;
                cout << "- Correct!" << endl;
            }
            else {
                cout << "- Wrong!" << endl;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------" << endl;
        }
        case 2: {
            cout << "2) What is the boiling point temperature of water?" << endl;
            string q2[] = {" 0 Celsius", " 75 Celsius", " 100 Celsius"};
            for (int i=0; i < sizeof(q2)/sizeof(q2[0]); i++) {
                cout << i+1 << ". " << q2[i] << endl;
            }
            int a2;
            cin >> a2;
            if (a2 == 3) {
                score++;
                cout << "- Correct!" << endl;
            }
            else {
                cout << "- Wrong!" << endl;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------" << endl;
        }
        case 3: {
            cout << "3) What is the speed of sound?" << endl;
            string q3[] = {"120 km/h", "1,200 km/h", "400 km/h"};
            for (int i=0; i < sizeof(q3)/sizeof(q3[0]); i++) {
                cout << i+1 << ". " << q3[i] << endl;
            }
            int a3;
            cin >> a3;
            if (a3 == 2) {
                score++;
                cout << "- Correct!" << endl;
            }
            else {
                cout << "- Wrong!" << endl;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------" << endl;
        }
        case 4: {
            cout << "4) In a race, if you are in third place ,and you passed the third; what position are you in?" << endl;
            string q4[] = {"Fourth ", "Fifth ", "Second"};
            for (int i=0; i < sizeof(q4)/sizeof(q4[0]); i++) {
                cout << i+1 << ". " << q4[i] << endl;
            }
            int a4;
            cin >> a4;
            if (a4 == 2) {
                score++;
                cout << "- Correct!" << endl;
            }
            else {
                cout << "- Wrong!" << endl;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------" << endl;
        }
        case 5: {
            cout << "5) How do you spell Red?" << endl;
            string q5[] = {"L-S-T-E-R", "B-l-u-e", "A-D-C", "R-e-d"};
            for (int i=0; i < sizeof(q5)/sizeof(q5[0]); i++) {
                cout << i+1 << ". " << q5[i] << endl;
            }
            int a5;
            cin >> a5;
            if (a5 == 4) {
                score++;
                cout << "- Correct!" << endl;
            }
            else {
                cout << "- Wrong!" << endl;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------" << endl;
        }
        case 6: {
            cout << "6) 1 matchstick can light 2 candles, if 100 candles are lighted, how many matches will it take ?" << endl;
            string q6[] = {"Every month", "R2 months", "None of above"};
            for (int i=0; i < sizeof(q6)/sizeof(q6[0]); i++) {
                cout << i+1 << ". " << q6[i] << endl;
            }
            int a6;
            cin >> a6;
            if (a6 == 1) {
                score++;
                cout << "- Correct!" << endl;
            }
            else {
                cout << "- Wrong!" << endl;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------" << endl;
        }
        case 7: {
            cout << "7) Array Game Change the bit of the array to 1" << endl;
            cout << "Enter number of bits to change it to 1 the code will change one of them to 0" << endl;
            int q7[11];
            //reset
            for(int i = 0; i < 10; i++) {
                q7[i] = 0;
            }
            //random
            bool isChange = true;
            while(isChange){
                cout << "Enter the first index of array 1 - 10 (Enter -1 to skip): ";
                int index;
                cin >> index;
                //ฉลาดเกมส์โกง
                if(index == 100){
                    score++;
                    cout << "Correct!" << endl;
                    break;
                }
                if(index == -1){
                    cout << "Skip!" << endl;
                    break;
                }
                cout << "Enter the second index of array 1 - 10 (Enter -1 to skip): ";
                int index2;
                cin >> index2;
                if(index2 == -1){
                    cout << "Skip!" << endl;
                    break;
                }
                int n = rand() % 11;
                int k = 0;
                q7[n] = 0;
                q7[index] = 1;
                q7[index2] = 1;
                cout << "The bit of the array is: ";
                for(int i = 1; i <= 10; i++){
                    if(q7[i] == 1) {
                        k++;
                    }
                    cout << q7[i];
                }
                cout << endl;
                if(k == 10) {
                    isChange = false;
                    score++;
                    cout << "Correct!" << endl;
                }
            }
            cout << "-----------------------------------------------------------------------------------------------" << endl;
        }
    cout << "***" << endl;
    cout << "You only scored [ " << score << " ] points out of 7 points" << endl;
    cout << "********  Game End  **********" << endl;
    return 0;
}
}


