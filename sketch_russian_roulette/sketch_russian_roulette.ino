
long randNumber;           // variable to store a random number
byte h=0,v=0;              // variables used in for loops
byte b1 = 1, b2 = 2, b3 = 3, b4 = 4, b5 = 5, b6 = 6, b7 = 7, b8 = 8; // variables used for buttons
byte p1 = 0, p2 = 0;       // variables to store player score
const int period=50;       // delay to avoid errors
int kdelay=0;              // Non Blocking Delay
const byte rows=4;         // Rows in Keypad
const byte columns=4;      // Columns in Keypad
const byte Output[rows]={6,7,8,9};   // Row connceted to Arduino Pins
const byte Input[columns]={2,3,4,5}; // Columns connected to Arduino Pins
void setup() 
{
  randomSeed(analogRead(0));
  randNumber = random(1,9);
  Serial.println(randNumber);
  for(byte i=0;i<rows;i++)      //Loop to declare output pins.
  {
  pinMode(Output[i],OUTPUT);
  }
  for(byte s=0;s<columns;s++)  // Loop to decalre Input pins, Initial Pulledup.
  {
    pinMode(Input[s],INPUT_PULLUP);
  }
  Serial.begin(9600);         // Initializing Serail communication.
}
void loop()
{

  if(millis()-kdelay>period) //used to make non-blocking delay
  {
    kdelay=millis();  //capture time from millis function
switch (keypad())     //Switch to get which button is pressed. 
   {
            case 0:
            Serial.println("P1 button 1");
            if(b1 == randNumber){
              Serial.println("Game Lost");
              randNumber = random(1,9);
              p2++;
              Serial.print("Player1 ");
              Serial.println(p1);
              Serial.print("Player2 ");
              Serial.println(p2);
            }
       break;  
            case 1:
            Serial.println("P1 button 5");
            if(b5 == randNumber){
              Serial.println("Game Lost");
              randNumber = random(1,9);
              p2++;
              Serial.print("Player1 ");
              Serial.println(p1);
              Serial.print("Player2 ");
              Serial.println(p2);
            }
       break;
            case 2:
            Serial.println("P2 button 1");
            if(b1 == randNumber){
              Serial.println("Game Lost");
              randNumber = random(1,9);
              p1++;
              Serial.print("Player1 ");
              Serial.println(p1);
              Serial.print("Player2 ");
              Serial.println(p2);
            }
       break;
            case 3:
            Serial.println("P2 button 5");
            if(b5 == randNumber){
              Serial.println("Game Lost");
              randNumber = random(1,9);
              p1++;
              Serial.print("Player1 ");
              Serial.println(p1);
              Serial.print("Player2 ");
              Serial.println(p2);
            }
       break;
            case 4:
            Serial.println("P1 button 2");
            if(b2 == randNumber){
              Serial.println("Game Lost");
              randNumber = random(1,9);
              p2++;
              Serial.print("Player1 ");
              Serial.println(p1);
              Serial.print("Player2 ");
              Serial.println(p2);
            }
       break;
            case 5:
            Serial.println("P1 button 6");
            if(b6 == randNumber){
              Serial.println("Game Lost");
              randNumber = random(1,9);
              p2++;
              Serial.print("Player1 ");
              Serial.println(p1);
              Serial.print("Player2 ");
              Serial.println(p2);
            }
       break;
            case 6:
            Serial.println("P2 button 2");
            if(b2 == randNumber){
              Serial.println("Game Lost");
              randNumber = random(1,9);
              p1++;
              Serial.print("Player1 ");
              Serial.println(p1);
              Serial.print("Player2 ");
              Serial.println(p2);
            }
       break;
            case 7:
            Serial.println("P2 button 6");
            if(b6 == randNumber){
              Serial.println("Game Lost");
              randNumber = random(1,9);
              p1++;
              Serial.print("Player1 ");
              Serial.println(p1);
              Serial.print("Player2 ");
              Serial.println(p2);
            }
       break;
            case 8:
            Serial.println("P1 button 3");
            if(b3 == randNumber){
              Serial.println("Game Lost");
              randNumber = random(1,9);
              p2++;
              Serial.print("Player1 ");
              Serial.println(p1);
              Serial.print("Player2 ");
              Serial.println(p2);
            }
       break;
            case 9:
            Serial.println("P1 button 7");
            if(b7 == randNumber){
              Serial.println("Game Lost");
              randNumber = random(1,9);
              p2++;
              Serial.print("Player1 ");
              Serial.println(p1);
              Serial.print("Player2 ");
              Serial.println(p2);
            }
       break;
            case 10:
            Serial.println("P2 button 3");
            if(b3 == randNumber){
              Serial.println("Game Lost");
              randNumber = random(1,9);
              p1++;
              Serial.print("Player1 ");
              Serial.println(p1);
              Serial.print("Player2 ");
              Serial.println(p2);
            }
       break;
            case 11:
            Serial.println("P2 button 7");
            if(b7 == randNumber){
              Serial.println("Game Lost");
              randNumber = random(1,9);
              p1++;
              Serial.print("Player1 ");
              Serial.println(p1);
              Serial.print("Player2 ");
              Serial.println(p2);
            }
       break;
            case 12:
            Serial.println("P1 button 4");
            if(b4 == randNumber){
              Serial.println("Game Lost");
              randNumber = random(1,9);
              p2++;
              Serial.print("Player1 ");
              Serial.println(p1);
              Serial.print("Player2 ");
              Serial.println(p2);
            }
       break;
            case 13:
            Serial.println("P1 button 8");
            if(b8 == randNumber){
              Serial.println("Game Lost");
              randNumber = random(1,9);
              p2++;
              Serial.print("Player1 ");
              Serial.println(p1);
              Serial.print("Player2 ");
              Serial.println(p2);
            }
       break;
            case 14:
            Serial.println("P2 button 4");
            if(b4 == randNumber){
              Serial.println("Game Lost");
              randNumber = random(1,9);
              p1++;
              Serial.print("Player1 ");
              Serial.println(p1);
              Serial.print("Player2 ");
              Serial.println(p2);
            }
       break;
            case 15:
            Serial.println("P2 button 8");
            if(b8 == randNumber){
              Serial.println("Game Lost");
              randNumber = random(1,9);
              p1++;
              Serial.print("Player1 ");
              Serial.println(p1);
              Serial.print("Player2 ");
              Serial.println(p2);
            }
       break;
            default:
            ;
}
}
}

// Below function is used to detect which button is pressed.

byte keypad()                   
{
 static bool no_press_flag=0;    
  for(byte x=0;x<columns;x++)     
  {
     if (digitalRead(Input[x])==HIGH);   
     else
     break;
     if(x==(columns-1))        
     {
      no_press_flag=1;
      h=0;
      v=0;
     }
  }
  if(no_press_flag==1)  
  {
    for(byte r=0;r<rows;r++)  
    digitalWrite(Output[r],LOW);
    for(h=0;h<columns;h++)  
    {
      if(digitalRead(Input[h])==HIGH) 
      continue;
      else   
      {
          for (v=0;v<rows;v++)    
          {
          digitalWrite(Output[v],HIGH);   
          if(digitalRead(Input[h])==HIGH)  
          {
            no_press_flag=0;               
            for(byte w=0;w<rows;w++)  
            digitalWrite(Output[w],LOW);
            return v*4+h;  
          }
          }
      }
    }
  }
 return 50;
}
