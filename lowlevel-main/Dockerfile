FROM  ubuntu:jammy
WORKDIR /root

ENV LANG=en_US.UTF-8
ENV LC_ALL=en_US.UTF-8
ENV DEBIAN_FRONTEND=noninteractive
RUN apt update -y &&  apt install locales -y 
RUN locale-gen en_US en_US.UTF-8 
RUN update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8 
RUN export LANG=en_US.UTF-8 
RUN  apt install -y software-properties-common 
RUN add-apt-repository -y universe 
RUN apt update -y && apt install curl -y 
RUN curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg 
RUN echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" |  tee /etc/apt/sources.list.d/ros2.list > /dev/null
RUN  apt update -y
RUN  apt upgrade -y
RUN  apt install -y  ros-humble-ros-base
RUN  apt install -y ros-dev-tools
CMD ["bash"]
