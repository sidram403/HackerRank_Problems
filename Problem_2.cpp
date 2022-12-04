Problem Statement : https://www.hackerrank.com/challenges/counting-valleys/problem

Code Logic here:

int level=0;
int valleys=0;
for(int i=0;i<steps;i++){
  if(level == 0 && path[i]=='D'){
    valleys++;
  }
  if(path[i]=='D'){
    level--;
  }else if(path[i]=='U'){
   level++;
  }
}
return valleys;
