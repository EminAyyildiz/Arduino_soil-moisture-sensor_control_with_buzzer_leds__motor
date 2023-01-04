// Written by Emin Ayyıldız

int red_led = 4;
int blue_led = 5;
int orange_led = 6;
int yellow_led = 7;
int green_led = 8;
int red_led_2 = 9;
int engine = A3;
int buzzer = 11;
#define Doo 262
#define Re  294
#define Mi  330
#define Fa  349
#define Sol 392
#define La  440
#define Si  494
#define Dos 523
int sensor_signal = A1;
int veri;
void setup()
{
  Serial.begin(9600);
  Serial.println("Soil Moisture Sensor Ready!");
  pinMode(red_led, OUTPUT);
  pinMode(red_led_2, OUTPUT);
  pinMode(blue_led, OUTPUT);
  pinMode(orange_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(engine, OUTPUT);
  pinMode(buzzer, OUTPUT);
  
  pinMode(sensor_signal, INPUT);
  
}

void loop()
{ 
  veri = analogRead(sensor_signal);
  Serial.print("Soil Moisture Sensor value : ");
  Serial.println(veri);
  if (veri <= 75) { 
    
    digitalWrite(red_led, HIGH);
    digitalWrite(blue_led, LOW);
    digitalWrite(orange_led, LOW);
    digitalWrite(yellow_led, LOW);
    digitalWrite(green_led, LOW);
    digitalWrite(red_led_2, LOW);
    digitalWrite(engine, LOW);
    tone(buzzer, Doo);
    
  } 
  else if (veri <=200)  
  { 
    digitalWrite(red_led, LOW);
    digitalWrite(blue_led, HIGH);
    digitalWrite(orange_led, LOW);
    digitalWrite(yellow_led, LOW);
    digitalWrite(green_led, LOW);
    digitalWrite(red_led_2, LOW);
    digitalWrite(engine, LOW);
    tone(buzzer, Re);
    
  }

  else if (veri <=325)  
  { 
    digitalWrite(red_led, LOW);
    digitalWrite(blue_led, LOW);
    digitalWrite(orange_led, HIGH);
    digitalWrite(yellow_led, LOW);
    digitalWrite(green_led, LOW);
    digitalWrite(red_led_2, LOW);
    digitalWrite(engine, LOW);
    tone(buzzer, Mi);
    
  }
    else if (veri <=450)  
  { 
    digitalWrite(red_led, LOW);
    digitalWrite(blue_led, LOW);
    digitalWrite(orange_led, LOW);
    digitalWrite(yellow_led, HIGH);
    digitalWrite(green_led, LOW);
    digitalWrite(red_led_2, LOW);
    digitalWrite(engine, LOW);
    tone(buzzer, Fa);
    
  }
    else if (veri <=565)  
  { 
    digitalWrite(red_led, LOW);
    digitalWrite(blue_led, LOW);
    digitalWrite(orange_led, LOW);
    digitalWrite(yellow_led, LOW);
    digitalWrite(green_led, HIGH);
    digitalWrite(red_led_2, LOW);
    digitalWrite(engine, LOW);
    tone(buzzer, Sol);
    
  }
    else if (veri <=690)  
  { 
    digitalWrite(red_led, LOW);
    digitalWrite(blue_led, LOW);
    digitalWrite(orange_led, LOW);
    digitalWrite(yellow_led, LOW);
    digitalWrite(green_led, LOW);  
    digitalWrite(red_led_2, HIGH);
    digitalWrite(engine, LOW);
    tone(buzzer, La);
    
  }
    else  
  { 
    digitalWrite(engine, HIGH);
    Serial.println("Fan activated.....");
    tone(buzzer, Si);
    

    digitalWrite(red_led, HIGH);
    digitalWrite(blue_led, HIGH);
    digitalWrite(orange_led, HIGH);
    digitalWrite(yellow_led, HIGH);
    digitalWrite(green_led, HIGH);
    digitalWrite(red_led_2, HIGH);
   
    delay(500);
    digitalWrite(red_led, LOW);
    digitalWrite(blue_led, LOW);
    digitalWrite(orange_led, LOW);
    digitalWrite(yellow_led, LOW);
    digitalWrite(green_led, LOW);
    digitalWrite(red_led_2, LOW);
    noTone(buzzer);
  
    delay(1000);
       
  }
  
}
