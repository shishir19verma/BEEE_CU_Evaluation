void setup()
{
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(3,INPUT);
    pinMode(a0);
}
void loop()
{
     int x,i,a;
     a=analogRead(a0);  
     x=digitalRead(3);
  if(x==1)
    {
       if(a<130)
    {
        for(i=6;i<=9;i++)
        digitalWrite(i,HIGH);
    } 
    else
            digitalWrite(6,HIGH);
   }
        for(i=6;i<=9;i++)
 {   delay(1000);
  digitalWrite(i,LOW);
  }
}
