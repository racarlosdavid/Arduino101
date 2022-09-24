int resultado = 0;

void setup() {
  Serial.begin(9600);    
}

void loop() {
  metodoSumar(10,20);
  resultado = funcionSumar(100,5000);
  Serial.println(resultado);
}

// Metodo: NO devuelve el resultado cuando se ejecuta, el tipo de dato del metodo es void
void metodoSumar(int num1,int num2){
  resultado = num1 + num2; 
  Serial.println(resultado);   
}

/*
Funcion: devuelve el resultado cuando se ejecuta, el tipo de dato es el tipo de dato del valor que se retorna
*/
int funcionSumar(int num1,int num2){
  return num1 + num2;   
}


