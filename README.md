# System-Call SO 2020
 La implementación de un System Call personalizado en un Kernel Linux. 

## ¿Qué es un _System Call_?
Los «System Call» o Llamadas al sistema son un conjunto de interfaces para que procesos de usuario interactuén con el hardware a través del Sistema Operativo. Cada Sistema Operativo posee sus respectivas llamadas, agrupadas en lo que se conoce como tabla, ya que poseen un código que efectúa la acción deseada.
A diferencia de cualquier otra clase de procesos que pueden implementar los Sistemas Operativos dedicados las _system calls_ tienen un comportamiento definido.

 
## ¿En qué consiste el proyecto?
Utilizando un contenedor de Docker, alterar una versión del Kernel Linux para incluir una interrupción personalizada que reciba como parámetro un número entero y lo imprima.

### Requisitos
* Computadora
* Docker (Toolbox para Windows) 
* Acceso a Internet
* Editor de texto
* Herramientas para compilación de Kernel _(opcional)_
* Conocimiento básico acerca de contenedores


### Archivos del proyecto
Los archivos _ejemplo.c_ contienen la implementación del archivo, mientras que en la carpeta **sys_so** se encuentra la implementación de la interrupción.

### Resultados fallidos con Docker
Por si desea ver el _Dockerfile_ de las implementaciones se encuentra adjunto.


### Resultado
![System call sys_hello returned 2020](sys_so/linea_sys_so.png)

# Autor
**Juan Diego Sique Martínez** :musical_keyboard: *Universidad Francisco Marroquín* :notes: [Correo](juandiegosique@ufm.edu)
