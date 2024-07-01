#include <iostream>
using namespace std;
int main(){
  int n, m, a;
  cin>>n>>m>>a;
  cout<<(n/a+(n%a))*(m/a+(m%a));
  return 0;
}