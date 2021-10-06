
void pisca(int pin){
  for(int i = 0; i<10; i++){
    digitalWrite(pin, LOW); // rgb_2
    delay(50);
    digitalWrite(pin, HIGH); // rgb_2
    delay(50);
  }
}

void semaforo_carro(int pin_1, int pin_2, int pin_3){
  digitalWrite(pin_1, HIGH); 
  digitalWrite(pin_2, LOW); 
  digitalWrite(pin_3, LOW); 
}

void semaforo_pedestre(int rgb_1, int rgb_2){
  digitalWrite(rgb_1, HIGH); 
  digitalWrite(rgb_2, LOW); 
}


void setup() {
  pinMode(22, OUTPUT);  // verde
  pinMode(32, OUTPUT);  // amarelo
  pinMode(42, OUTPUT);  // vermei
  pinMode(48, OUTPUT);  // rgb_1
  pinMode(49, OUTPUT);  // rgb_2

  // Padrçãi inicial
  semaforo_carro(22, 32, 42);
  semaforo_pedestre(49, 48);
}

void loop() {
  semaforo_carro(22, 32, 42);
  delay(4000);

  semaforo_carro(32, 22, 42);
  delay(1000);
  
  semaforo_pedestre(48, 49);
  semaforo_carro(42, 32, 22);
  delay(3000);

  pisca(49);
  semaforo_pedestre(49, 48);
  

}
