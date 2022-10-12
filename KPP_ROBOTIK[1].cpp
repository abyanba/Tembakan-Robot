// NAMA		: Abyan Bismar Alfayed
// NRP		: 5025221026
// Jurusan	: Teknik Informatika

#include <iostream>
#include <cmath>
#define GRAVITASI 10 //10 m/s^2
#define PI 3.1415

using namespace std;

int main ()
{
    int v_nol, jarak, loss;
    float v_tan;
    
    cin >> v_nol;
    
    if (v_nol >=1 && v_nol <=10)
    {
        v_nol = v_nol - 1;
        loss = 1;
        
    } else if (v_nol >=11 && v_nol <=20) {
        v_nol = v_nol - 3;
        loss = 3;
        
    } else {
        v_nol = v_nol - 5;
        loss = 5;
    }
    
    jarak = pow(v_nol, 2)*sin(90*PI/180)/GRAVITASI;
    v_tan = sqrt(jarak*GRAVITASI/sin(90*PI/180))+loss;
    
    cout << jarak << " " << v_tan << endl;
    
    return 0;
}