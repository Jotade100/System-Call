FROM gcc:latest
COPY . /linux
RUN apt-get update
RUN apt-get install libncurses5-dev
RUN apt-get -y install bison
RUN apt-get -y install flex
RUN apt-get install libssl-dev
RUN apt-get install libelf-dev
RUN apt-get update
RUN apt-get upgrade
RUN cd linux/linux-4.9.212
RUN sudo make menuconfig
RUN sudo make -jn
RUN sudo make modules_install install
RUN shutdown -r now
RUN cd ..
CMD ["gcc", "linux/userspace.c"]




