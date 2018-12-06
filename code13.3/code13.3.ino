//Variable for storing received data
char data = 0;  
          
void setup()
{
    //Sets the baud for serial data transmission  
    Serial.begin(9600); 

    pinMode(13, OUTPUT);  
}

void loop()
{
   // Send data only when you receive data:
   if(Serial.available() > 0)      
   {
      //Read the incoming data & store into data
      data = Serial.read(); 

      //Print Value inside data in Serial monitor
      Serial.print(data); 
               
      Serial.print("\n");  

      // Checks whether value of data is equal to 1
      if(data == '1')              
         digitalWrite(13, HIGH);//If value is 1 then LED turns ON
      
      else if(data == '0')         
         digitalWrite(13, LOW);   
   }
}
