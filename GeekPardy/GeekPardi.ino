//Entrada
int jugador1=11;
int jugador2=12;
int jugador3=8;

//Estado del boton en ceero
int estadobtn1=0;
int estadobtn2=0;
int estadobtn3=0;

//Areglo de Pines
int ledsPWM[]={3,5,6}; //Pins de slida PWM
int ledsEntre[]={11,12,8};//Pins de Entrda

void setup()
{
   /*
    Inicializamos Pines de Salida,Entrda y
    colocmos en cero el LedRGB
   */
  for (int i = 0; i < 2; i++) {
    pinMode(ledsPWM[i],OUTPUT);  
    analogWrite(ledsPWM[i],255);
    pinMode(ledsEntre[i],INPUT);    
  }
}

void loop()
{
    estadobtn1=digitalRead(jugador1);
    estadobtn2=digitalRead(jugador2);
    estadobtn3=digitalRead(jugador3);
   
    delay(100);
  
   if(estadobtn1==HIGH)
     {
       analogWrite(3,0);
       analogWrite(5,255);
       analogWrite(6,255);
       delay(2000);       
     }else if(estadobtn2==HIGH)
             {
               analogWrite(5,0);
               analogWrite(3,255);
               analogWrite(6,255);
               delay(2000);       
             }else if(estadobtn3==HIGH)
                     {
                       analogWrite(6,0);
                       analogWrite(5,255);
                       analogWrite(3,255);
                       delay(2000);
                     }
  analogWrite(3,255);
  analogWrite(5,255);
  analogWrite(6,255);
}
