int ans=0;
void setup(){//做一次
   size(300,300);
 //float ans=random(60);//亂數<60的浮點數
   textSize(30);
   text(ans,20,30);
}
void draw(){
  background(#6DF0D9);
  text( ans , 20,30);
}
void mousePressed(){
   ans = (int)random(60); 
}
