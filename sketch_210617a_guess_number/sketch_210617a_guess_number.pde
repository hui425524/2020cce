void setup(){
  size(400,200); 
  textSize(40);
}
//String line="hello";text (line+c+100,100,100);
char c='9';
String ans="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int win=0;//0 not yet win
void draw(){
 background(#D8AFAF);
 text ("Press:"+c,100,100);
 text ("You  :"+key,100,150);
 if(c==key)win=1;
 else win=0;
 if(win==1){
   text("You Win!",100,50);
   int i =int(random(26+26));
   c=ans.charAt(i);
 }
}
