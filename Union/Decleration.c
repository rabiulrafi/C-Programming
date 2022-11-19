union{
  int a;
  char b;
}car1;

int main() {


  car1.a=65;
  printf("%d\n",car1.a);
  printf("%c\n",car1.b);
  return 0;
}
