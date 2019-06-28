#define delaytime 1000
#define BUZZER 11
#define RED 12
#define GREEN 13
bool run=false;

int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,bc=0;
char a;

void setup() {
    pinMode(2,INPUT_PULLUP);
    pinMode(3,INPUT_PULLUP);
    pinMode(4,INPUT_PULLUP);
    pinMode(5,INPUT_PULLUP);
    pinMode(6,INPUT_PULLUP);
    pinMode(7,INPUT_PULLUP);
    pinMode(8,INPUT_PULLUP);
    pinMode(9,INPUT_PULLUP);
    pinMode(10,INPUT_PULLUP);
    pinMode(BUZZER,OUTPUT);
    pinMode(RED,OUTPUT);
    pinMode(GREEN,OUTPUT);
    digitalWrite(GREEN,LOW);
    digitalWrite(RED,HIGH);
            
    Serial.begin(9600);}

void(* resetFunc)(void)=0;

void loop() {
    
    if (Serial.available()>0) {
        a=Serial.read();
        if(a=='R'){
           resetFunc();}
        if(a=='S'){
           digitalWrite(GREEN,HIGH);
           digitalWrite(RED,LOW);
           run=true;}
        if(a=='X'){
          digitalWrite(GREEN,LOW);
          digitalWrite(RED,HIGH);
          run=false;
        }}
        
    if(run==true){   
     
      int TEAM_1= digitalRead(2),TEAM_2= digitalRead(3),TEAM_3= digitalRead(4),TEAM_4= digitalRead(5),TEAM_5= digitalRead(6),TEAM_6= digitalRead(7),TEAM_7= digitalRead(8),TEAM_8= digitalRead(9),TEAM_9= digitalRead(10);
      if (TEAM_1==HIGH){
          if (c1==0){             
              Serial.println("TEAM 1");    
              digitalWrite(BUZZER,HIGH);
              bc=0;
              c1++;}}
      
      if (TEAM_2==HIGH){
          if (c2==0){
                 
              Serial.println("TEAM 2");
              digitalWrite(BUZZER,HIGH);
              bc=0;
              c2++;}}
      
      if (TEAM_3==HIGH){
          if (c3==0){
              
              Serial.println("TEAM 3");
              digitalWrite(BUZZER,HIGH);
              bc=0;
              c3++;}}
  
      if (TEAM_4==HIGH){
          if (c4==0){
                
              Serial.println("TEAM 4");
              digitalWrite(BUZZER,HIGH);
              bc=0;
              c4++;}}
      
      if (TEAM_5==HIGH){
          if (c5==0){
                 
              Serial.println("TEAM 5");
              digitalWrite(BUZZER,HIGH);
              bc=0;
              c5++;}}
      
      if (TEAM_6==HIGH){
          if (c6==0){
               
              Serial.println("TEAM 6");
              digitalWrite(BUZZER,HIGH);
              bc=0;
              c6++;}}
      
      if (TEAM_7==HIGH){
          if (c7==0){
              
              Serial.println("TEAM 7");
              digitalWrite(BUZZER,HIGH);
              bc=0;
              c7++;}}
      
      if (TEAM_8==HIGH){
          if (c8==0){
                
              Serial.println("TEAM 8");
              digitalWrite(BUZZER,HIGH);
              bc=0;
              c8++;}}
      
      if (TEAM_9==HIGH){
          if (c9==0){
             
              Serial.println("TEAM 9");    
              digitalWrite(BUZZER,HIGH);
              bc=0;
              c9++;}}
      if (bc==delaytime){
          digitalWrite(BUZZER,LOW);
      }
    }
    bc++;
}
    
