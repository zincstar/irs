#include<windows.h>
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

void Wifi_Connect()
{

}


void Get_Weather_Api()
{

}

void Motor_Control(int result)
{
	//result:-999->null 1->stretch -1->shrink
	int stat=-999;//the status of the motor
	if(result==stat)return;
	//if the status is the same,return without any command
	if(result==-999)return;
	if(result==1);
	else if(result==-1);
}

void setup()
{
	Wifi_Connect();
}

void loop()
{
	Temperature_humidity_sensor t_h;//temperature&humidity
	Moment_Weather NowWeather;
	NowWeather.analysis_the_weather(t_h.t,t_h.h);
	Motor_Control(NowWeather.check());
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