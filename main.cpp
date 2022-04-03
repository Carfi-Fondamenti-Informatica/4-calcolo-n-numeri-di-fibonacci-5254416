#include <iostream>
using namespace std;

int main(){
  int n, n1=1, n2=1, n3, a=2;
  std::cout<<"Inserire un valore intero n.\n";
  cin >> n;
  if (n>=2) {
      std::cout << n1 << "\n" << n2;
      while (a < n) {
          n3 = n1 + n2;
          std::cout << "\n" << n3;
          n1 = n2;
          n2 = n3;
          a++;
      }
  } else {
      std::cout << "errore";
  }
  return 0;
}
