int twoPow0 = 8;
int twoPow1 = 9;
int twoPow2 = 10;
int twoPow3 = 11;
int num = 0;


void setup() 
{
  // put your setup code here, to run once:
pinMode(twoPow0,OUTPUT);
pinMode(twoPow1,OUTPUT);
pinMode(twoPow2,OUTPUT);
pinMode(twoPow3,OUTPUT);
Serial.begin(9600);

}

void loop()
{
  // The while loop asks the user to input a number to be represented if monitor is availble
  while(Serial.available() == 0)
  {
  }
  num = Serial.parseInt();
  
// The if statements below calculates the binary representation of the number enter and turns the respective LED on
// 2^0

  if(num%2 == 1)
  {
    num = num/2;
    digitalWrite(twoPow3,HIGH);// Sends Voltage to the Led through Pin 8 
  }
  else
  {
     num = num/2;
     digitalWrite(twoPow3,LOW);// does not send Voltage to the Led through Pin 8
  }

//2^1
if(num%2 == 1)
  {
    num = num/2;
    digitalWrite(twoPow2,HIGH);// Sends Voltage to the Led through Pin 8 
  }
  else
  {
     num = num/2;
     digitalWrite(twoPow2,LOW);// does not send Voltage to the Led through Pin 8
  }

//2^2
  if(num%2 == 1)
  {
    num = num/2;
    digitalWrite(twoPow1,HIGH);// Sends Voltage to the Led through Pin 8 
  }
  else
  {
     num = num/2;
     digitalWrite(twoPow1,LOW);// does not send Voltage to the Led through Pin 8
  }

//2^3
  if(num%2 == 1)
  {
    num = num/2;
    digitalWrite(twoPow0,HIGH);// Sends Voltage to the Led through Pin 8 
  }
  else
  {
     num = num/2;
     digitalWrite(twoPow0,LOW);// does not send Voltage to the Led through Pin 8
  }
  
  
  // Blinking Led light code 

 
  delay(1000);
  digitalWrite(twoPow0,LOW);// does not send Voltage to the Led through Pin 8
  digitalWrite(twoPow1,LOW);// does not send Voltage to the Led through Pin 8
  digitalWrite(twoPow2,LOW);// does not send Voltage to the Led through Pin 8
  digitalWrite(twoPow3,LOW);// does not send Voltage to the Led through Pin 8
  delay(1000);// delay for ten seconds 
  
}
