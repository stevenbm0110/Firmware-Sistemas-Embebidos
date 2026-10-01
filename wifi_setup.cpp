# include < WiFi .h >
void conectarWiFi ( const char * ssid , const char * password ) {
WiFi . begin ( ssid , password ) ;
while ( WiFi . status () != WL_CONNECTED ) {
delay (500) ;
 }
 }
