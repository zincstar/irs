#include<windows.h>
#define null -999
//for debug on windows

void Wifi_Connect();
void Get_Weather_Api();
void Motor_Control(int result);

class Temperature_humidity_sensor
{
	public:
		int t,h;
		Temperature_humidity_sensor()
		{
			this->t=-999;
			this->h=-999;
		}
		void get()
		{
			this->t=10;
			this->h=20;
			//turn to the real values after we get the hardware
		}
};

class Moment_Weather
{
	public:
		int typ,level;
		//typ:-999->null 1->sunny 2->rainy 3->cloudy 4->misty 5->smoggy 6->snowy 7->sand-dust
		//level:-999->null 1(weak)--->10(strong)
		Moment_Weather()
		{
			this->typ=-999;
			this->level=-999;
		}
		void analysis_the_weather(int temp,int humi)//
		{
			this->typ=2;
			this->level=3;
			//the real algorithm will be updated soon
		}
		int check()
		{
			int res=-999;
			//return a number(-1/1) to control the motor
			return res;
		}
};

class Pressure_sensor
{
    public:
        int pressure;
        Pressure_sensor()
        {
            this->pressure=null;
        }
        void get()
        {
            this->pressure=1001;
        }

};

const int led_num=3;
struct Led_color
{
    int r,g,b;
    Led_color()
    {
        this->r=0;
        this->g=0;
        this->b=0;
    }
};
class Led
{
    //0 for off !0 for colors
    public:
        Led_color status[led_num];
        Led()
        {
            
        } 
        void set()
        {
            //code: interact with led pins
        }
        void set_all(Led_color sta)
        {
            for(int i=0;i<led_num;++i) this->status[i]=sta;
        }
};

void Wifi_Connect()
{

}

class Weather
{
    public:

        //weather data vars are according to the api
        void get()
        {

        }
};

class Motor
{
    public:
        int status;//1->stretch -1->shrink
        Motor()
        {
            this->status=-1;
            //shrink the shed before it run!
        }
        void set(int sta)
        {
            if (this->status == sta) return;
            if (sta == 1){
                //code: interact with the motor
                this->status=1;
                return;
            }
            if (sta == -1){
                //code: interact with the motor
                this->status=-1;
                return;
            }
        }
};

Motor motor;
Pressure_sensor pressure_sensor;
Temperature_humidity_sensor temperatrue_humidity_sensor;
Weather weather;
Led led;

void setup()
{
    
	Wifi_Connect();
}

void loop()
{
	/*
    Temperature_humidity_sensor t_h;//temperature&humidity
	Moment_Weather NowWeather;
	NowWeather.analysis_the_weather(t_h.t,t_h.h);
	Motor_Control(NowWeather.check());
    //Why create these classes every loop?[laugh_cry]
    */
}

//To test the software part without the hardware, we use a main() to leverage setup() and loop()
int main()
{
	setup();
	while (1)
	{
		loop();
		Sleep(5000);
	}
	return 0;
}