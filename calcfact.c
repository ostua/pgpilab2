
//Función para calcular el factorial de un num

int calcfact(int n)
{
  if (n <= 1) {
    return 1;
  }else{
    return (n*calcfact(n-1));
  }
}
