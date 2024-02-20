#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "                                           " << endl;
    cout << "********  Started Relaxing Game  **********" << endl;
    cout << "                                           " << endl;
    int score = 0;
    srand(time(0));
    switch (1) {
        case 1: {
            int a = rand() % 1000;
            int b = rand() % 1000;
            int sum = a + b;
            cout << "1.) What is " << a << " + " << b << " ?" << endl;
            int a1;
            cout << "             "<< endl;
            cout << "Your Answer :";
            cin >> a1;
            if (a1 == sum) {
                score++;
                cout << "- Correct!" << endl;
            }
            else {
                cout << "- Wrong!" << endl;
                cout << "Correct! is "<< sum << endl;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------" << endl;
        }
        case 2: {
            cout << "2.) How to wash dishes without getting your hands wet?" << endl;
            string q2[] = {" Wash and dry your hands."," Wash and dry in the sun.", " Wash without water.", " Use someone else to wash."};
            for (int i=0; i < sizeof(q2)/sizeof(q2[0]); i++) {
                cout << i+1 << ". " << q2[i] << endl;
            }
            int a2;
            cout << "             "<< endl;
            cout << "Your Answer :";
            cin >> a2;
            if (a2 == 4) {
                score++;
                cout << "- Correct!" << endl;
            }
            else {
                cout << "- Wrong!" << endl;
                cout << "Correct! is "<< q2[3] << endl;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------" << endl;
        }
        case 3: {
            cout << "3.) In a race, if you are in third place ,and you passed the third; what position are you in?" << endl;
            string q3[] = {"First ","Second ","Third ","Fourth "};
            for (int i=0; i < sizeof(q3)/sizeof(q3[0]); i++) {
                cout << i+1 << ". " << q3[i] << endl;
            }
            int a3;
            cout << "             "<< endl;
            cout << "Your Answer :";
            cin >> a3;
            if (a3 == 2) {
                score++;
                cout << "- Correct!" << endl;
            }
            else {
                cout << "- Wrong!" << endl;
                 cout << "Correct! is "<< q3[1] << endl;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------" << endl;
        }
        case 4: {
            cout << "4.)3 brothers rode a buffalo backhome. The older sit at the head and the middle sit on the back. The younger sit behind. Do you know where a buffalo is the heaviest??" << endl;
            string q4[] = {"Head ", "Middle ", "Behind", "Don't know"};
            for (int i=0; i < sizeof(q4)/sizeof(q4[0]); i++) {
                cout << i+1 << ". " << q4[i] << endl;
            }
            int a4;
            cout << "             "<< endl;
            cout << "Your Answer :";
            cin >> a4;
            if (a4 == 4) {
                score++;
                cout << "- Correct!" << endl;
            }
            else {
                cout << "- Wrong!" << endl;
                cout << "Correct! is "<< q4[3] << endl;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------" << endl;
        }
        case 5: {
            cout << "5.) Have 200 people standing in this line. Who were Isaan people?" << endl;
            string q5[] = {"1 ", "9 ", "101 ","200 "};
            for (int i=0; i < sizeof(q5)/sizeof(q5[0]); i++) {
                cout << i+1 << ". " << q5[i] << endl;
            }
            int a5;
            cout << "             "<< endl;
            cout << "Your Answer :";
            cin >> a5;
            if (a5 == 3) {
                score++;
                cout << "- Correct!" << endl;
            }
            else {
                cout << "- Wrong!" << endl;
                cout << "Correct! is "<< q5[2] << endl;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------" << endl;
        }
        case 6: {
            cout << "6.) Have 100 people standing on a cliff and Who people will fall off a cliff and die?" << endl;
            string q6[] = {"1 ", "9 ", "19 ","100 "};
            for (int i=0; i < sizeof(q6)/sizeof(q6[0]); i++) {
                cout << i+1 << ". " << q6[i] << endl;
            }
            int a6;
            cout << "             "<< endl;
            cout << "Your Answer :";
            cin >> a6;
            if (a6 == 2) {
                score++;
                cout << "- Correct!" << endl;
            }
            else {
                cout << "- Wrong!" << endl;
                cout << "Correct! is "<< q6[1] << endl;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------" << endl;
        }
        case 7: {
            cout << "7.) What do you call a person who has only one right leg?" << endl;
            string q7[] = {"Normal person ", "Disabled person ", "Crazy people ","Weird people "};
            for (int i=0; i < sizeof(q7)/sizeof(q7[0]); i++) {
                cout << i+1 << ". " << q7[i] << endl;
            }
            int a7;
            cout << "             "<< endl;
            cout << "Your Answer :";
            cin >> a7;
            if (a7 == 1) {
                score++;
                cout << "- Correct!" << endl;
            }
            else {
                cout << "- Wrong!" << endl;
                cout << "Correct! is "<< q7[0] << endl;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------" << endl;
        }
        case 8: {
            cout << "8.) Prime Minister's phone number What number does it start with?" << endl;
            string q8[] = {"0 ", "1 ", "2 ","3 "};
            for (int i=0; i < sizeof(q8)/sizeof(q8[0]); i++) {
                cout << i+1 << ". " << q8[i] << endl;
            }
            int a8;
            cout << "             "<< endl;
            cout << "Your Answer :";
            cin >> a8;
            if (a8 == 1) {
                score++;
                cout << "- Correct!" << endl;
            }
            else {
                cout << "- Wrong!" << endl;
                cout << "Correct! is "<< q8[0] << endl;
            }
            cout << endl;
            cout << "-----------------------------------------------------------------------------------------------" << endl;
        }
        }
    cout << "                                                           \n" << endl;
    cout << "\t\t\tYour scored [ " << score << " ] points out of 8 points" << endl;
    cout << "                                                           \n" << endl;
    cout << "-----------------------------------------------------------------------------------------------" << endl;
    return 0;
}

