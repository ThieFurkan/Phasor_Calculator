#include <iostream>
#include<math.h>
#define pi 3.14
using namespace std;
class Phasor {
public:
    Phasor() {
        int section[] = { 1,2 };
        cin >> *section;
        if (section[0] == 1)
        {
            {
                float radius , angle ;
                cout << "Angle (degree) : ";
                cin >> angle;
                cout << "Radius : ";
                cin >> radius;
                PolartoRectangular(angle, radius);
            }
        }
        else {
            {
                float imag , reel;
                cout << "Reel : ";
                cin >> reel;
                cout << "Imag(i) : ";
                cin >> imag;
                RectangulartoPolar(imag, reel);
            }
        }

    };
    ~Phasor() {
        cout << "process completed";
    };
    void PolartoRectangular(float Angle,float Radius) {
        cout << Radius * cos(Angle * pi / 180) << " " << Radius * sin(Angle * pi / 180) << "j"<<endl;
    };
    void RectangulartoPolar(float Imag, float Reel) {
        cout << sqrt(Reel * Reel + Imag * Imag) << " /_ " << atan(Imag / Reel) << endl;
    };
};
int main()
{
    cout << "         Welcome to Phasor Calculator  " << endl;
    cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*" << endl;
    cout << ":  click 1 for polar to rectangular tranform  : " << endl;
    cout << ":  click 2 for rectangular to polar tranform  : " << endl;
    cout << "->";
    Phasor *phasor = new Phasor;
    delete phasor;
}

