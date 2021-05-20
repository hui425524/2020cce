void setup(){
   size(1024,500); 
   textFont( createFont("標楷體",80));
}
void draw(){
  background(#F5C988);//色碼
  int s =second();
  int m =minute();
  int h =hour();
  textSize(80);
  text(h+":"+m+":"+s,100,200);
  int total = s + 60 * m + 60*60*h;//現在總秒數
  int closeH=17,closeM=40,closeS=0;//結束
  int total2=closeS+60*closeM+60*60*closeH;//目標
  int ans =total2-total;
  text("剩幾秒:"+ans,100,100);
  
  
  
  
  
}
