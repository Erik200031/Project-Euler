#include <iostream>
#include <vector>
std::vector<int> fib(int num) {
   int x = 0, y = 1, z = 0;
   std::vector<int> fibtmp;
   for (int i = 0; i < num; i++) {
      fibtmp.push_back(x);
      z = x + y;
      x = y;
      y = z;
   }
   return fibtmp;
}
int main() {

    int sum {};
    int num = 34;    //34th fib is 3 524 578 < 4 000 000 
    std::vector<int> fibvec(fib(num));
    for(auto it: fibvec) {
       if(it % 2 == 0 ) {
           sum += it;
       }
    }
    std::cout<< sum;
   return 0;
}