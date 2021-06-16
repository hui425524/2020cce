void setup(){
 size(400,200); 
}
float start=0,v=0,x=0;//v=旋轉速度
void mousePressed(){
   v=random(1) ;
}
void draw(){
  background(#1ED3B9);
  ellipse(100,100,180,180);//圓心 寬 高
  if(v > 0.001){//速度一直*0.99會慢下來
    start +=v;//位置 速度 加速度
    v*=0.99;//摩擦力
    x+= v*2;//移動方塊
  }   
 // fill(255,0,0);float start=mouseX/50.0;if(start<10)start+=0.01;
  rect(x,150,50,50);
  fill(255,0,0);text(start,200,150);
  for(int i=0;i<24;i++){
    float shift=2*PI*i/24.0;//等於PI/12
    if(i%3==0)fill(0);
    if(i%3==1)fill(#E8D228);
    if(i%3==2)fill(#70DED5);
    if(i==0)fill(#F72E0A);
    arc(100,100,180,180,shift+0+start,shift+PI/12+start);
  }//圓弧 寬，高 開始 結束
}
