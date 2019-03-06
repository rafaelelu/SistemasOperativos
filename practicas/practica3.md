# Objetivo
Modificar al programa init para que muestre un programa de bienvenida.

# Herramientas
gcc

make

git

# Conceptos

1) Proceso

+ Instancia de una programa.
+ Tiene tres partes:
++ Stack: variables y las llamadas a funciones.
++ Heap: memoria dinámica (malloc o new)
++ Código

+ Se crea mediante dos llamadas a sistema:
++ fork clona
++ exec camba el código

+ Tiene un estado:
++ Corriendo
++ Durmiendo (Listo)
++ Espera
++ Completado
++ Zombie

2) Programa init
+ Es el programa encargado de inicializar al SO para dejarlo listo para usarse
+ Es el único proceso que crea el SO

# Qué aprendí
+ Cómo funcionan los procesos.
+ Para crear un proceso, es necesario clonar al padre y luego se cambia el código.
+ Los procesos tienen distintos estados "corriendo", "durmiendo". Éstos son bastante intuitivos, sin embargo, el estado "zombie" no. El estado "zombie" se da cuando un proceso pierde a su padre. Dicho de otra manera, cuando un proceso es terminado y este tiene hijos, los hijos se convierten en zombies.
+ El sistema operativo sólo crea un proceso, el init, después, el init crea los siguientes procesos. Init es el único proceso creado por algo que no es un proceso.

# URL del commit
https://github.com/rafaelelu/SistemasOperativos/commit/8ccde4b771e0ee4aa9a984413937ff31c7a78766
