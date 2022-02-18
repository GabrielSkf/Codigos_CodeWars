/* C++ - Serie de Tribonacci */

// Solucao Utilizada

using namespace std;

vector<int> tribonacci(vector<int> signature, int n)
{
    int a = signature[0];
    int b = signature[1];
    int c = signature[2];
    int aux;
    
    vector<int> result;
  
    result.push_back(a);
    result.push_back(b);
    result.push_back(c);
  
    if(n>=3){
      for(int i=0; i<n-3; i++){
        aux = a + b + c;
        a = b;
        b = c;
        c = aux;

        result.push_back(aux);
      }
      return result;
    } else if (n==1) {
        return {a};
    } else if (n==2){
        return {a,b};
    } else {
      return {};
    }
	
}

