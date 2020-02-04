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


### Pasos para ejecutarlo
1. Abrir Docker. En el caso de usar Docker Toolbox usar Quickstart Terminal.
2. Obtener una copia de la imagen de GCC ubicada en DockerHub.

    ``` docker pull gcc```

3. Descargar del repositorio los archivos del Kernel de Linux alterado. 

    ``` git clone https://github.com/Jotade100/System-Call.git```

4. Compilar el Kernel de Linux. De no tener herramientas necesarias para la compilación deberá compilarlo dentro del contenedor usando el _Dockerfile_ que se encuentra en el repositorio.
5. Ubicarse en el directorio que contiene el repositorio en la terminal de Docker. Luego introdcir el siguiente comando.

    ``` docker build .```

    De haber compilado el Kernel fuera antes de la implementación deberá alterar el _Dockerfile_.
    ``` 
    FROM gcc:latest
    COPY . /linux
    RUN apt-get update
    RUN apt-get upgrade
    RUN cd linux/linux-4.9.212
    RUN sudo make menuconfig
    RUN sudo make -jn
    RUN sudo make modules_install install
    RUN cd ..
    CMD ["gcc", "linux/userspace.c"] ```
6. Tras correr el contenedor podrá obener el resultado del contenedor.


Si desea modificar el código basta con alterar el archivo _ejemplo.c_. Este contiene el código de ejecución usando la nueva llamada al sistema. El número de la llamada es **548** y el nombre es **syscall_so**.

### Aclaraciones
El contenedor y las instrucciones anteriores fueron exitosas en el sistema operativo Windows. Pueden haber ligeras variaciones al usarse en máquinas distintas o sistemas operativos diferentes, ya que la máquina de prueba usó una máquina virtual para levantar **Docker**, puesto que Windows no posee un hipervisor.

# Autor
**Juan Diego Sique Martínez** :musical_keyboard: *Universidad Francisco Marroquín* :notes: [Correo](juandiegosique@ufm.edu)
