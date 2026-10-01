// actuadores .cpp
# include < Arduino .h >
void activarRele (int pin , bool estado ) {
digitalWrite ( pin , estado ? HIGH : LOW ) ;
 }
