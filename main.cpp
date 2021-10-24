#include<windows.h>
//for debug on windows

class Temperature_humidity_sensor
{
    public:
        int t,h;
        Temperature_humidity_sensor()
        {
            this->t=-1;
            this->h=-1;
        }
        void get()
        {
            this->t=10;
            this->h=20;
            //turn to the real values after we get the hardware
        }
};

void setup()
{

}

void loop()
{

}

//To test the software part without the hardware, we use a main() to leverage setup() and loop()
int main()
{
    setup();
    while (1)
    {
        loop();
        Sleep(500);
    }
    return 0;
}