int pinInterrupt = 2 ;
volatile byte income=0 ;
void onChange()
{
	income=-1 ;
 
}
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
  pinMode( pinInterrupt, INPUT);
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), onChange, CHANGE);
}

void loop()
{
    for (income=0 ;income <= 9;income ++ )
  	{
      	digitalWrite(3,income&0x1);
        digitalWrite(4,(income>>1)&0x1);
        digitalWrite(5,(income>>2)&0x1);
        digitalWrite(6,(income>>3)&0x1);
        delay(1000);
      	
    }
}
