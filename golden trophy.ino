
const int led = 8; 
String password="";
String encryptedpass="";
int check = 0  , counter = 0;
void setup( ) 
{ 
 pinMode(led, OUTPUT); 

 Serial.begin(9600); // Adjust speed of serial monitor 
 Serial.println("enter password : " );
}

void loop( ) { 
  
 if(Serial.available()>0) { 
   password=Serial.readString(); 
   Serial.println("entered password is : " + password);
   
   Serial.println("enter password to access : ");
   encryptedpass=Serial.readString(); 
 }
   for(int i = 0 ; i<password.length() ; i++)
   {
    if(encryptedpass[i]-password[i] == 1)
    {
      check++;
    }
    }
    if(check == password.length())
    {
      counter ++;
      digitalWrite(led,1);
      delay(3000);
      }

      else
      {
        digitalWrite(led , 1);
        delay(500);
        digitalWrite(led , 0);
        delay(500);
        digitalWrite(led , 1);
        delay(500);
        digitalWrite(led , 0);
        delay(500);
        digitalWrite(led , 1);
        delay(500);
        digitalWrite(led , 0);
        delay(500);
      }
}

 
