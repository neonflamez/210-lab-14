// COMSC-210 | Lab 14 | Shayan Khan

#include <iostream>

using namespace std;

class Color {
private:
    int red;
    int green;
    int blue;

public:

    Color(int r = 0, int g = 0, int b = 0) : red(r), green(g), blue(b) {}

    void setRed(int r){
        red = r;
    }

    void setGreen(int g){
        green = g;
    }

    void setBlue(int b){
        blue = b;
    }

    int getRed() const{
        return red;
    }

    int getGreen() const{
        return green;
    }

    int getBlue() const{
        return blue;
    }

    void print() const{
        cout << "Color (R = " << red << ", G = " << green << ", B = " << blue << ")" << endl;
    }
};

int main(){

    return 0;
}