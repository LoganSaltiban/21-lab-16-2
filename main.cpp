#include <iostream>

using namespace std;

class Color
{
private:
    int red;
    int green;
    int blue;

public:
    // Setters
    void set_Red(int redValue) { red = redValue; }
    void set_Green(int greenValue) { green = greenValue; }
    void set_Blue(int blueValue) { blue = blueValue; }

    // Getters
    int get_Red() { return red; }
    int get_Green() { return green; }
    int get_Blue() { return blue; }

    // Constructors
    Color() // Default Constructor
    {
        red = 0;
        green = 0;
        blue = 0;
    }

    Color(int inputRed) // Partial Constructor
    {
        red = inputRed;
        green = 0;
        blue = 0;
    }

    Color(int inputRed, int inputGreen, int inputBlue) // Parameter Constructor
    {
        red = inputRed;
        green = inputGreen;
        blue = inputBlue;
    }
    
    // Print 
    void print_RGB() 
    { 
        cout << "Red: " << red << endl; 
        cout << "Green: " << green << endl;
        cout << "Blue: " << blue << endl;
    }
};

int main()
{
    Color Purple;
    // Initialize Purple Hex Colors with Default Constructor
    Purple.set_Red(157);
    Purple.set_Green(0);
    Purple.set_Blue(255);
    cout << "Purple RGB Colors are: " << endl;
    Purple.print_RGB();

    Color Crimson(220);
    // Initialize Crimson Hex Colors with Partial Constructor
    Crimson.set_Green(20);
    Crimson.set_Blue(60);
    cout << "Crimson RGB Colors are: " << endl;
    Crimson.print_RGB();

    Color Mustard(225, 173, 1);
    // Initialize Mustard Hex Colors with Parameter Constructor
    cout << "Mustard RGB Colors are: " << endl;
    Mustard.print_RGB();

    return 0;
}