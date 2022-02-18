/* C++ - Contador de Bits */

// Solucao Utilizada

unsigned int countBits(unsigned long long n){

  unsigned int cont = 0;
  
  while(n != 0){
    if(n % 2 == 0){
      cont = cont;
    } else {
      cont++;
    }
    n = n / 2;
  }
  return cont;
}
