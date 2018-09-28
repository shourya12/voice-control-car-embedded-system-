String voice;
int red=2;
int green=4;
int yellow=5;
int white=6;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.flush();
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(white,OUTPUT);
 // pinMode(8,INPUT);
 // pinMode(9,INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

 while (Serial.available())     //Check if there is an available byte to read
      {   
        delay(10);                   //Delay added to make thing stable 
      
        char c = Serial.read();      //Conduct a serial read
      
        if (c == '#') 
        {
          break;                     //Exit the loop when the # is detected after the word
        }   
        voice += c; 
     
      } 
       if (voice.length() > 0) 
      {
        if(voice == "back" || voice == "back") 
        {
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(yellow,HIGH);
  digitalWrite(white,LOW);
  }
  else if(voice == "stop" || voice == "stop") 
        {
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(white,LOW);
  }
  else if(voice == "move" ||voice == "move")
  {
   digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(white,HIGH);
  }
   
  voice="";  
   }
   }
