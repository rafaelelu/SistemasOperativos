# Objetivo
Investigar y practicar sobre hilos.

# Herramientas
gcc
git

# Conceptos:
+ Hilos
  + Proceso ligero
  + Sólo tiene un stack y el código y el heap lo comparte con el proceso principal.
  + Si el proceso principal termina, los hilos terminan.
  
+ Lock:
  + Mecanismo de sincronización.
  + Variable global que soporta dos operaciones:
    + lock, el primer hilo que hace lock se adueña del lock, el resto queda esperando
    + unlock, el hilo dueño del lock lo libera.
  + Ayuda para resolver el problema de la sección crítica.
  
+ Semáforos:
  + Mecanismo de sincronización.
  + Variable global que tiene un valor inicial mayor o igual a cero. Soporta dos operaciones.
    ++ wait/decrease. Si es mayor a cero, decrementa y continua , si es igual a cero, se suspende.
    ++ post/increase. Incrementa el valor del semáforo en uno.
  + Para asignar recursos.
  
+ Problemas de sincronización.
  + Condición de carrera. Ocurre cuando el resultado depende del orden en que se ejecutan los hilos.
  + Deadlock: Cuando dos o más hilos están esperando por un recurso que no se libera.
  + Productor/Consumidor: Ocurre cuando los dartos se puedan sobre-escribir
  
# Url del commit

# Qué aprendí
