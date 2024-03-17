#include <bits/stdc++.h>

int main()
{
   int numbers[4]{
       1,2,3
   };

   const int numbers_2[10]{
       1,2,3,4,5,6,7,8,9,10
   };

   for (int i = 0; i < 4; ++i){
       std::cout << numbers[i] << " ";
   }

   if (numbers[1] == 2){
       std::cout << "sum = "<< numbers[2] + 10;
   }

   for (int i = 0; i < 10; ++i){
       std::cout << numbers_2[i] << " ";
   }

    return 0;
}
