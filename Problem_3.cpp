Problem Statement : https://www.hackerrank.com/challenges/electronics-shop/problem

Code Logic Here :

int max = -1;
     for(int i=0;i<keyboards.size();i++){
         for(int j=0;j<drives.size();j++){
             int sum = keyboards[i] + drives[j];
             if(sum<=b && sum>max){
                 max = sum;
             }
         }
     }
return max;
