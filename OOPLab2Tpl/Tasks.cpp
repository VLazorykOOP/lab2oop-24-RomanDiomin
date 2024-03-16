#include <iostream>
using namespace std;
#include "Tasks.h"
#include "Examples.h"
#include <windows.h>
void MenuTask()
{
    cout << "     Menu Task   \n";
    cout << "    1.  Calculation of expressions using bitwise operations  \n";
    cout << "    2.  Data encryption using bitwise operations \n";
    cout << "    3.  Data encryption using structures with bit fields \n";
    cout << "    4.  The problem of using bitwise operations \n";
    cout << "    5.  Examples of problems using bitwise operations \n";
    cout << "    6.  Exit \n";
}
void task1() {
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
   int a, b, c, d;

   cout << "Введіть значення a: ";
   cin >> a;
   cout << "Введіть значення b: ";
   cin >> b;
   cout << "Введіть значення c: ";
   cin >> c;
   cout << "Введіть значення d: ";
   cin >> d;

   int result = 33 * b + ((15 * d + 12 * a) >> 9) - 65 * c + 14 * d;

   cout << "Результат: " << result << endl;

}

void task2()
{
#include <iostream>
    #include <fstream>
    #include <string>
    #include <bitset>
    #include<windows.h>

    using namespace std;

    void padText(string& text) {
        while (text.length() < 128) {
            text += ' ';
        }
    }

    void encryptText(const string& text, ofstream& outputFile) {
        for (char c : text) {

            unsigned char asciiCode = static_cast<unsigned char>(c);

            unsigned char firstByte = 0;
            firstByte |= asciiCode;

            unsigned char secondByte = 0;

            int position = 1;
            secondByte |= position;

            outputFile.write(reinterpret_cast<const char*>(&firstByte), sizeof(firstByte));
            outputFile.write(reinterpret_cast<const char*>(&secondByte), sizeof(secondByte));
        }
    }

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string inputText;
    cout << "Enter text (up to 128 characters): ";
    getline(cin, inputText);

    ofstream outputFile("encrypted.bin", ios::binary);

    padText(inputText);

    encryptText(inputText, outputFile);

    outputFile.close();
}

void task3()
{
#include <iostream>
    #include <fstream>
    #include <string>
    #include <bitset>
    #include <windows.h>

    using namespace std;

    void padText(string& text) {
        while (text.length() < 128) {
            text += ' ';
        }
    }

    void encryptText(const string& text, ofstream& outputFile) {
        for (char c : text) {

            unsigned char asciiCode = static_cast<unsigned char>(c);

            unsigned char firstByte = 0;
            firstByte |= asciiCode;


            unsigned char secondByte = 0;

            int position = 1; 
            secondByte |= position;

 file
            outputFile.write(reinterpret_cast<const char*>(&firstByte), sizeof(firstByte));
            outputFile.write(reinterpret_cast<const char*>(&secondByte), sizeof(secondByte));
        }
    }

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string inputText;
    cout << "Enter text (up to 128 characters): ";
    getline(cin, inputText);


    ofstream outputFile("encrypted.bin", ios::binary);


    padText(inputText);

 output file
    encryptText(inputText, outputFile);


    outputFile.close();

}


void task4()
{   // Задача із використання побітових операцій
    // The problem of using bitwise operations
    cout << " Data encryption using structures with bit fields \n";

}
