:
int pin = 13;

void dot()
{
  digitalWrite(pin,HIGH);
  delay(250);
  digitalWrite(pin,LOW);
  delay(250);
}
  
void dash()
{
  digitalWrite(pin,HIGH);
  delay(1000);
  digitalWrite(pin,LOW);
  delay(250);
}
void space()
{
  digitalWrite(pin,LOW);
  delay(750);
void setup() 
{
  Serial.begin(9600);
  pinMode(pin,OUTPUT);

}

void loop() 
{
  char a;
  String stri="";
  int temp = 0;
  while(Serial.available()>0)
  {
    a = Serial.read();
    stri = stri + a;
    delay(2);
    temp = 1;
    }
    stri.toUpperCase();
  if(temp)
  {
    String k = "";
    String str = "";
    for(int i = 0;stri[i]!= '\0';i++)
    {
    
      switch(stri[i])
      {
        case 'A': k="*-";break;
        case 'B': k="-***";break;
        case 'C': k="-*-*";break;
        case 'D': k="-**";break;
        case 'E': k="*";break;
        case 'F': k="**-*";break;
        case 'G': k="--*";break;
        case 'H': k="--*";break;
        case 'I': k="**";break;
        case 'J': k="*--";break;
        case 'K': k="-*-";break;
        case 'L': k="*-**";break;
        case 'M': k="--";break;
        case 'N': k="-*";break;
        case 'O': k="---";break;
        case 'P': k="*--*";break;
        case 'Q': k="--*-";break;
        case 'R': k="*-*";break;
        case 'S': k="***";break;
        case 'T': k="-";break;
        case 'U': k="**-";break;
        case 'V': k="***-";break;
        case 'W': k="*--";break;
        case 'X': k="-**-";break;
        case 'Y': k="-*--";break;
        case 'Z': k="--**";break;
        case ' ': k="/";break;
        case '\n':k="\n";break;
        } 
        str = str + ' ' + k;
      }
      Serial.println(str);
    }
    for(int j = 0;stri[j]!='\0';j++)
    {
        switch(stri[j])
        {
          case'A':case'a':dot();dash();break;
          case'B':case'b':dash();dot();dot();dot();break;
          case'C':case'c':dash();dot();dash();dot();break;
          case'D':case'd':dash();dot();dot();break;
          case'E':case'e':dot();break;
          case'F':case'f':dot();dot();dash();dot();break;
          case'G':case'g':dash();dash();dot();break;
          case'H':case'h':dot();dot();dot();dot();break;
          case'I':case'i':dot();dot();break;
          case'J':case'j':dot();dash();dash();
:
         case'K':case'k':dash();dot();dash();break;
          case'L':case'l':dot();dash();dot();dot();break;
          case'M':case'm':dash();dash();break;
          case'N':case'n':dash();dot();break;
          case'O':case'o':dash();dash();dash();break;
          case'P':case'p':dot();dash();dash();dot();break;
          case'Q':case'q':dash();dash();dot();dash();break;
          case'R':case'r':dot();dash();dot();break;
          case'S':case's':dot();dot();dot();break;
          case'T':case't':dash();break;
          case'U':case'u':dot();dot();dash();break;
          case'V':case'v':dot();dot();dot();dash();break;
          case'W':case'w':dot();dash();dash();break;
          case'X':case'x':dash();dot();dot();dash();break;
          case'Y':case'y':dash();dot();dash();dash();break;
          case'Z':case'z':dash();dash();dot();dot();break;
          case' ':space();break;
          case'\n':enter();break;
          }
    } 
