void setup(){
  size(400,200); 
  textSize(40);
}
int x=100,y=100,vx=0,vy=0;
void draw(){
 background(#AFD5D8);
 rect(x,y,50,50,7);//方塊
 x+=vx;
 y+=vy;
}
void keyPressed(){
 if( keyCode==LEFT)vx=-1;
 if( keyCode==RIGHT)vx=+1;
 if( keyCode==UP)vy=-1;
 if( keyCode==DOWN)vy=+1;
}
void keyReleased(){
 vx=0;
 vy=0;
}
