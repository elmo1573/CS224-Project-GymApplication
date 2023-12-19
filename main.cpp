#include <iostream>
#include <string>
#include <vector>
#include "Trainer.cpp"
#include "Shoulder.cpp"
#include "Arms.cpp"
#include "Legs.cpp"
#include "Chest.cpp"
#include "BMI.cpp"
#include "Back.cpp"
#include "Nutrition.cpp"
#include "DailyRoutine.cpp"
#include "MonthlyProgress.cpp"
using namespace std;
int main()
{

    string name, rate;

    int age, opt, choi;

    double weight, height, h, waist, weight1, waist1;

    char gender, choice;

    BMI b;

    std::cout << endl
         << endl;

    cout << "------------------Enter Your Information--------------" << endl
         << endl
         << endl;

    cout << "Please enter your name: ";

    getline(cin, name);

    cout << "Please enter your age: ";

    cin >> age;

    while (cin.fail() || age <= 12)
    {

        cin.clear();

        cin.ignore(10000, '\n');

        cout << "Invalid input! You are not capable enough to workout,Kindly enter the correct Key: ";

        cin >> age;
    }

    cout << "Please enter your weight in kilograms: ";

    cin >> weight;

    while (cin.fail() || weight <= 20)
    {

        cin.clear();

        cin.ignore(10000, '\n');

        cout << "Invalid input! You are not capable enough to workout,Kindly enter the correct Key: ";

        cin >> weight;
    }

    cout << "Please enter your height in feets: ";

    cin >> h;

    while (cin.fail() || h <= 3.5)
    {

        cin.clear();

        cin.ignore(10000, '\n');

        cout << "Invalid input! You are not capable enough to workout,Kindly enter the correct Key: ";

        cin >> h;
    }

    cout << "Please enter the size of your waist: ";

    cin >> waist;

    while (cin.fail() || waist <= 15)
    {

        cin.clear();

        cin.ignore(10000, '\n');

        cout << "Invalid input! You are not capable enough to workout,Kindly enter the correct Key: ";

        cin >> waist;
    }

    cout << "Please enter your gender (M/F): ";

    cin >> gender;

    while (gender != 'M' && gender != 'F')
    {

        cin.clear();

        cin.ignore(10000, '\n');

        cout << "Invalid input! Please enter either M for male or F for female: ";

        cin >> gender;
    }

    height = h / 3.37;

    system("cls");

    do
    {

        cout << "\nHello " << name;

        cout << " do you want to generate a seven days meal plan for you or you want to go for someworkout or you want to exit?\n";

        cout << "--NOTE--If you go for the workout then you have to complete the goal for the seven days before that you cannot quit--" << endl;

        cout << "1. Meal Plan\n2. Workout\n3. Exit\n";

        cin >> opt;

        if (opt == 1)
        {

            system("cls");

            b.set(height, weight);

            b.calcBMI();

            cout << "Your BMI is: " << b.getBMI() << endl;

            Nutrition nutrition;

            if (b.getBMI() < 18.5)
            {

                nutrition.showDailyDiet(b);

                cout << endl;

                system("pause");

                system("cls");
            }
            else if (b.getBMI() >= 18.5 && b.getBMI() < 25)
            {

                nutrition.showDailyDiet(b);

                cout << endl;

                system("pause");

                system("cls");
            }
            else if (b.getBMI() >= 25 && b.getBMI() < 30)
            {

                nutrition.showDailyDiet(b);

                cout << endl;

                system("pause");

                system("cls");
            }
            else
            {

                nutrition.showDailyDiet(b);

                cout << endl;

                system("pause");

                system("cls");
            }
        }

        else if (opt == 2)
        {

            system("cls");

            DailyRoutine routine;

            routine.showRoutine();

            cout << endl;

            system("pause");

            system("cls");
        }

    } while (opt != 3);

    system("cls");

    Trainer T("Haris", 30, "Male", 5, "20$");

    Trainer T1("Huzaifa", 28, "Male", 4, "18$");

    Trainer T2("Marium", 25, "Female", 5, "18$");

    Trainer T3("Alina", 27, "Female", 4, "15$");

    cout << "In order to know the progress " << name << ", you would need a Trainer to keep track of you progress\n";

    cout << "So do you need one of our certified trainer? (Y/N): ";

    cin >> choice;

    bool needTrainer = false;

    while (choice != 'Y' && choice != 'N')
    {

        cin.clear();

        cin.ignore(10000, '\n');

        cout << "Invalid input! Please enter either Y for yes or N for no: ";

        cin >> choice;
    }

    if (choice == 'Y')
    {

        needTrainer = true;

        if (gender == 'M')
        {

            cout << endl
                 << "Below is the list of our Trainers" << endl
                 << endl;

            cout << "----------------------------------------" << endl;

            cout << "TRAINER 1 INFORMATION:" << endl;

            cout << T;

            cout << "----------------------------------------" << endl;

            cout << "----------------------------------------" << endl;

            cout << "TRAINER 2 INFORMATION:" << endl;

            cout << T1;

            cout << "----------------------------------------" << endl;

            cout << "Select any one of the trainer you want\n1. Trainer 1\n2. Trainer 2\n";

            cin >> choi;

            while (choi != 1 && choi != 2)
            {

                cout << "Invalid Key,Kindly enter the correct key:";

                cin >> choi;
            }

            if (choi == 1)
            {

                system("cls");

                cout << "Congrats!! You have been scheduled a session with one of our certified trainer " << T.getName() << " who will tell you your Monthly Progress" << endl;

                cout << "So for that:" << endl;

                cout << name << ", Kindly enter your weight in the last week of the month:";

                cin >> weight1;

                cout << name << ", Kindly enter the size of waist in the last week of the month:";

                cin >> waist1;

                MonthlyProgress progress(weight, weight1, waist, waist1);

                cout << "\nPress '+' to view monthly progress report or 'Q' to quit: ";

                cin >> choice;

                while (choice != '+' && choice != 'Q')
                {

                    cout << "Invalid input,Enter the correct Key:";

                    cin >> choice;
                }

                if (choice == '+')
                {

                    cout << progress.report() << endl;

                    system("pause");

                    system("cls");

                    cout << "Kindly rate our app out of ***** stars:";

                    cin >> rate;

                    while (rate != "*" && rate != "**" && rate != "***" && rate != "****" && rate != "*****")
                    {

                        cout << "Invalid input,Enter the correct Key:";

                        cin >> rate;
                    }

                    cout << "Thankyou for rating us " << rate << " stars, have a good day." << endl
                         << endl;

                    cout << "--------------------------------------------------------------------------------------" << endl;

                    cout << "EXERCISE NOT ONLY CHANGE YOUR BODY, IT CHANGES YOUR MIND, YOUR ATTITUDE AND YOUR MOOD" << endl;

                    cout << "--------------------------------------------------------------------------------------" << endl;
                }
            }

            else if (choi == 2)
            {

                system("cls");

                cout << "Congrats!! You have been scheduled a session with one of our certified trainer " << T1.getName() << " who will tell you your Monthly Progress" << endl;

                cout << "So for that:" << endl;

                cout << name << " enter your weight in the last week of the month:";

                cin >> weight1;

                cout << name << " enter the size of waist in the last week of the month:";

                cin >> waist1;

                MonthlyProgress progress(weight, weight1, waist, waist1);

                cout << "\nPress '+' to view monthly progress report or 'Q' to quit: ";

                cin >> choice;

                while (choice != '+' && choice != 'Q')
                {

                    cout << "Invalid input,Enter the correct Key:";

                    cin >> choice;
                }

                if (choice == '+')
                {

                    cout << progress.report() << endl;

                    system("pause");

                    system("cls");

                    cout << "Kindly rate our app out of ***** stars:";

                    cin >> rate;

                    while (rate != "*" && rate != "**" && rate != "***" && rate != "****" && rate != "*****")
                    {

                        cout << "Invalid input,Enter the correct Key:";

                        cin >> rate;
                    }

                    cout << "Thankyou for rating us " << rate << " stars, have a good day." << endl
                         << endl;

                    cout << "--------------------------------------------------------------------------------------" << endl;

                    cout << "EXERCISE NOT ONLY CHANGE YOUR BODY, IT CHANGES YOUR MIND, YOUR ATTITUDE AND YOUR MOOD" << endl;

                    cout << "--------------------------------------------------------------------------------------" << endl;
                }
            }
        }

        else if (gender == 'F')
        {

            cout << endl
                 << "Below is the list of our Trainers" << endl
                 << endl;

            cout << "----------------------------------------" << endl;

            cout << "TRAINER 1 INFORMATION:" << endl;

            cout << T2;

            cout << "----------------------------------------" << endl;

            cout << "----------------------------------------" << endl;

            cout << "TRAINER 2 INFORMATION:" << endl;

            cout << T3;

            cout << "----------------------------------------" << endl;

            cout << "Select any one of the trainer you want\n1. Trainer 1\n2. Trainer 2\n";

            cin >> choi;

            while (choi != 1 && choi != 2)
            {

                cout << "Invalid Key,Kindly enter the correct key:";

                cin >> choi;
            }

            if (choi == 1)
            {

                system("cls");

                cout << "Congrats!! You have been scheduled a session with one of our certified trainer " << T2.getName() << " who will tell you your Monthly Progress" << endl;

                cout << "So for that:" << endl;

                cout << name << ", Kindly enter your weight in the last week of the month:";

                cin >> weight1;

                cout << name << ", Kindly enter the size of waist in the last week of the month:";

                cin >> waist1;

                MonthlyProgress progress(weight, weight1, waist, waist1);

                cout << "\nPress '+' to view monthly progress report or 'Q' to quit: ";

                cin >> choice;

                while (choice != '+' && choice != 'Q')
                {

                    cout << "Invalid input,Enter the correct Key:";

                    cin >> choice;
                }

                if (choice == '+')
                {

                    cout << progress.report() << endl;

                    system("pause");

                    system("cls");

                    cout << "Kindly rate our app out of ***** stars:";

                    cin >> rate;

                    while (rate != "*" && rate != "**" && rate != "***" && rate != "****" && rate != "*****")
                    {

                        cout << "Invalid input,Enter the correct Key:";

                        cin >> rate;
                    }

                    cout << "Thankyou for rating us " << rate << " stars, have a good day." << endl
                         << endl;

                    cout << "--------------------------------------------------------------------------------------" << endl;

                    cout << "EXERCISE NOT ONLY CHANGE YOUR BODY, IT CHANGES YOUR MIND, YOUR ATTITUDE AND YOUR MOOD" << endl;

                    cout << "--------------------------------------------------------------------------------------" << endl;
                }
            }

            else if (choi == 2)
            {

                system("cls");

                cout << "Congrats!! You have been scheduled a session with one of our certified trainer " << T3.getName() << " who will tell you your Monthly Progress" << endl;

                cout << "So for that:" << endl;

                cout << name << ", Kindly enter your weight in the last week of the month:";

                cin >> weight1;

                cout << name << ", Kindly enter the size of waist in the last week of the month:";

                cin >> waist1;

                MonthlyProgress progress(weight, weight1, waist, waist1);

                cout << "\nPress '+' to view monthly progress report or 'Q' to quit: ";

                cin >> choice;

                while (choice != '+' && choice != 'Q')
                {

                    cout << "Invalid input,Enter the correct Key:";

                    cin >> choice;
                }

                if (choice == '+')
                {

                    cout << progress.report() << endl;

                    system("pause");

                    system("cls");

                    cout << "Kindly rate our app out of ***** stars:";

                    cin >> rate;

                    while (rate != "*" && rate != "**" && rate != "***" && rate != "****" && rate != "*****")
                    {

                        cout << "Invalid input,Enter the correct Key:";

                        cin >> rate;
                    }

                    cout << "Thankyou for rating us " << rate << " stars, have a good day." << endl
                         << endl;

                    cout << "--------------------------------------------------------------------------------------" << endl;

                    cout << "EXERCISE NOT ONLY CHANGE YOUR BODY, IT CHANGES YOUR MIND, YOUR ATTITUDE AND YOUR MOOD" << endl;

                    cout << "--------------------------------------------------------------------------------------" << endl;
                }
            }
        }
    }

    else if (choice == 'N')
    {

        cout << "You wont be able to know your monthly Progress" << endl;

        cout << "Kindly rate our app out of ***** stars:";

        cin >> rate;

        while (rate != "*" && rate != "**" && rate != "***" && rate != "****" && rate != "*****")
        {

            cout << "Invalid input,Enter the correct Key:";

            cin >> rate;
        }

        cout << "Thankyou for rating us " << rate << " stars, have a good day." << endl
             << endl;

        cout << "--------------------------------------------------------------------------------------" << endl;

        cout << "EXERCISE NOT ONLY CHANGE YOUR BODY, IT CHANGES YOUR MIND, YOUR ATTITUDE AND YOUR MOOD" << endl;

        cout << "--------------------------------------------------------------------------------------" << endl;
    }

    return 0;
}