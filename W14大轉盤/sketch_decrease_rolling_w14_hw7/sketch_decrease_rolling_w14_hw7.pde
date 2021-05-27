int []a=new int[47];
void setup()
{
  size(500,200);
  textSize(30);
for(int i=0;i<47;i++)a[i]=i;

for(int i=0;i<1000;i++){//洗牌
   int i1=(int)random(47); 
   int i2=(int)random(47); 
  int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }
 }
 int N=0,rolling=0;
 void draw(){
  background(#23CBA0);
  textAlign(CENTER,CENTER);//對齊
  for(int i=0;i<N;i++){
    int x=i*80+40;
    if(i==N-1 && rolling>0){
       x+=rolling;
       rolling-=3;
    } 
  //text(a[i],i*80+40,100); //80數字的間距,40為第一個數字前
    fill(255);ellipse(x,100,55,55);
    fill(128);text(a[i],x+2,100+2);
    fill(0);text(a[i],x,100);
  }
}
void mousePressed(){
 rolling =500;
 N++; 
}
