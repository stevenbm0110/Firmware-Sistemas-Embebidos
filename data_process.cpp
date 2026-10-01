// procesamiento de datos
# include < iostream >
# include < vector >

double calcularPromedio ( const std :: vector <int >& datosSensor ) {
if( datosSensor . empty () ) return 0.0;
double suma = 0;
for(int val : datosSensor ) suma += val ;
return suma / datosSensor . size () ;
 }

int main () {
std :: vector <int > datos = {12 , 15 , 20 , 22};
std :: cout << " Promedio : " << calcularPromedio ( datos ) << std :: endl ;
return 0;
 }
