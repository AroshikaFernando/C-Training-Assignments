
Created by mareenaf on 4/18/2019.


#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc , char** argv) {
   for (int i = 0; i < argc; ++i) {

       // printf("Arg %d : %c\n" , i , argv[i]);

       cout << "Arg" << i << " : " << argv[i] << "\n";
   }
   return 0;
}

