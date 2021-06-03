void setup(){ 
  
 size(400,200); 
 textSize(40);
}
void draw(){
  
  
  int s=second();
  background(58,114,191);
  text(10 - s%11,100,100);
  //%11從10~0
  
  
}
