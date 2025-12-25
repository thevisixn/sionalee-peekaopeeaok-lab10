#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main()

{
    int count = 0;
    float sum = 0;
    float sum_square;
    float mean = 0;
    float mean_square;
    float standard_devi;
    string textline;
    ifstream source("score.txt",ios::app);
    while (getline(source, textline))
    {
        sum += stof(textline);
        sum_square += pow(stof(textline),2);
        count++;
    }
    mean = sum/count;
    mean_square = pow(mean,2);
    standard_devi = sqrt((sum_square/count)-mean_square);
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << standard_devi;
}