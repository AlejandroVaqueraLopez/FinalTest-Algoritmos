► **Definicion de algoritmo:**
*Un algoritmo es una serie de instrucciones ordenadas y finitas que ayudan a resolver un problema en especifico, deben tener un orden y deben ser concretas, no ambiguas.*

► **Definir las siguientes metodologías de desarrollo de software:** 
 
 *top down, 
 bottom up,
 modular,*
 
 **Programacion estructurada** = Programación a base de estructuras de código (de control, funciones).

**Problema 1**
```
//Variables
float resultado = 0.00;
int opc = 0;
int grados = 0;

printf("1 - Celsius a fahrenheit, 2 - fahrenheilt a Celsius: ");
scanf("%d", &opc);

printf("Ingrese los grados a convertir: ");
scanf("%d", &grados);

if(opc == 1){ // de C a F
  resultado = (grados * 9);
  resultado = resultado / 5;
  resultado += 32;
  printf("Resultado: " + resultado + " Fahrenheit");
}else if(opc == 2){  // de F a C
  resultado = (grados - 32) * 5;
  resultado = (resultado / 9)
  printf("Resultado: " + resultado + " Celsius");
}else{
  printf("Opción no valida");
}

//Formula de C a F
//(°C × 9/5) + 32 = °F
//Formula de F a C
//((°F - 32) x 5) / 9 = °C
```

**Programa 2**
**Las velitas del pastel**
```
//Agregar inputs de usuario
//resolver sin arreglos
//resolver con un solo ciclo

//variables
let velitas = [1, 3, 2, 1, 1];
let velaAlta = 0;
let acumulador = 0;
let contador = 0;

//Determinar la velita mas alta
for(contador = 0; contador < velitas.length; contador++){
  if(velitas[contador] >= velaAlta){
    velaAlta = velitas[contador];
  }
}

//Determinar cuantas velas altas hay
contador = 0;
for(contador = 0; contador < velitas.length; contador++){
  if(velitas[contador] == velaAlta){
    acumulador+= 1;
  }
}

console.log("Las velitas que se soplaran son: " + acumulador);


```