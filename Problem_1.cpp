Problem Statement : https://www.hackerrank.com/challenges/drawing-book/problem

Logic Code here:
if(p==1 || n==1){
  return 0; //if page=1 or no.of pages=1 then we print result as 0
}else if(p<=n/2){
  return p/2; // if page is less than or equal to no.of pages/2 then we print the half of the page i.e page/2
}else{
  return n/2-p/2; // if page is greter than n/2 we print difference of no.of pages/2 and page/2
}
