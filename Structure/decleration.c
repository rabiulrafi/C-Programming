struct Car {
  char brand[50];
  char model[50];
  int year;
}car1;

int main() {
   car1 = {"BMW", "X5", 1999};

  printf("%s %s %d\n", car1.brand, car1.model, car1.year);
  
  printf("%d",sizeof(car1));
  return 0;
}
