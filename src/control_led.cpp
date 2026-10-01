// src/ control_led .cpp
# include < Arduino .h >
void parpadearLED (int pin , int retrasoMs ) {
digitalWrite ( pin , HIGH ) ;
delay ( retrasoMs ) ;
digitalWrite ( pin , LOW ) ;
delay ( retrasoMs ) ;
 }
