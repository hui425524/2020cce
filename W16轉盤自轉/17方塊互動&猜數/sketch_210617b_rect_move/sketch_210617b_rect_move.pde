void setup(){
  size(400,200); 
  textSize(40);
}
int x=100,y=100;
void draw(){
 background(#AFD5D8);
 rect(x,y,50,50,7);//方塊
}
void keyPressed(){
 if( keyCode==LEFT)x-=10;
 if( keyCode==RIGHT)x+=10;
 if( keyCode==UP)y-=10;
 if( keyCode==DOWN)y+=10;
}
