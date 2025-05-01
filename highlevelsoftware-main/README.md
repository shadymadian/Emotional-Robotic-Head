# IP_HighLevel

## Installation

### 1. Install Nvidia CUDA
First, you will need to install Nvidia CUDA. You can download it from the official site:  
[https://developer.nvidia.com/cuda-downloads](https://developer.nvidia.com/cuda-downloads)

You will also need to install CuDNN:  
[https://developer.nvidia.com/cudnn-downloads](https://developer.nvidia.com/cudnn-downloads)

**Note:** The program will likely not run on a graphics card that does not support Nvidia CUDA.

After installing both CUDA and CuDNN, you will need to copy the contents of the CuDNN `bin` folder into the CUDA `bin` folder.  
On Windows, the default path for the Nvidia CUDA `bin` folder is:  
`C:\Program Files\NVIDIA GPU Computing Toolkit\CUDA\vX.Y\bin`  
where `X.Y` refers to the installed version.

For CuDNN, the default path is:  
`C:\Program Files\NVIDIA\CUDNN\vA.B\bin\X.Y`  
where `A.B` corresponds to the CuDNN version, and `X.Y` refers to the installed CUDA version.

**Versions:**  
- Currently, we are using CUDA 12.6.  
- CuDNN v9.5 is used in conjunction with CUDA 12.6.

### 2. Install ollama
First, download and install Ollama from the official website: https://ollama.com/download/windows.

Once installed, open a terminal and install Llama 3.2 in Ollama by running the following command:
```shell
ollama pull llama3.2
```

Important: Ensure that the Ollama version and the Llama model version match. There are different Llama 3 models available, but we are currently using Llama 3.2.

### 3. Install espeak
To enable text-to-speech functionality, you need to install eSpeak. You can download it from their official website:
https://espeak.sourceforge.net/download.html

After downloading, follow the installation steps. Once the installation is complete, locate the folder containing the `espeak.exe` file. By default, this is typically:
`C:\Program Files (x86)\eSpeak\command_line`

Copy this folder path, as you'll need to add it to your system's environment variables under the `Path` variable. This step is essential for enabling the agent to access eSpeak and produce speech output.
### 4. install Microsoft C++ Build Tool
To ensure ROS 2 functions correctly, install Microsoft C++ Build Tools from the following link:
https://visualstudio.microsoft.com/de/visual-cpp-build-tools/

### 5. install CMake 
For face recognition to work, install CMake from the official website:
https://cmake.org/download/

### 6. Install Python
Next, install Python. We are using version 3.11.7 for this project.

### 7. Clone Repositories and Install Dependencies
After installing Python, clone this repository to your local machine.

**On Windows:**
Run the `setup.bat` file. This will automatically set up all the necessary dependencies.

**On Linux and Mac:**
Navigate to the repository's directory and execute the following commands:
```bash
chmod +x setup.sh
```
```bash
./setup.sh
```
If the setup completes successfully, proceed to step 8.

### Troubleshooting: If Step 7 Doesn't Work
If the setup doesn't work as expected, you can try to do the setup manually.

After installing Python, clone this repository to your local machine.
If you are not already inside the repository's directory, navigate to it with the following command:
```shell
cd path\to\repos_clone
```
Make sure to replace `path\to\repos_clone` with the actual path to your cloned repository.

It is recommended to use a virtual environment for managing dependencies. Create one using the command:
```shell
py -3.11 -m venv <venv_name>
```
Replace `<venv_name>` with a name for your virtual environment.
Once the virtual environment is created, activate it using the command:
```shell
<venv_name>\Scripts\activate
```
Install PyTorch and its dependencies by running:
```shell
pip install torch torchvision torchaudio --index-url https://download.pytorch.org/whl/cu124
```
After installing PyTorch, install all other required dependencies specified in the `requirements.txt` file by running:  
```shell
pip install -r requirements.txt
```

### Troubleshooting: If there are problems with CMake
Delete CMake.exe from virtual environment and try again

### 8. ROS
### 8.1 Install WSL 
open cmd prompt and install wsl
```shell 
wsl --install
```
### 8.2 Install Ubuntu 22.04
install the 22.04 version of Ubuntu
```shell 
wsl.exe --install -d Ubuntu-22.04
```

### 8.3 Install ROS
follow the link to the tutorial how to install ROS2
https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debs.html
### 8.4 start ros socket
Copy the ros2_ws folder from the repository and add it to your WSL-Ubuntu directory:
```shell 
\\wsl.localhost\Ubuntu-22.04\home\"username"\ros2_ws
```
Open the terminal, navigate to the ROS2 workspace, and build the packages:
```shell 
cd ~/ros2_ws/
```

```shell 
colcon build
```
Once the build is complete, you can start the socket by running:
run 
```shell 
ros2 run my_ros2_project socket_to_ros.py
``` 

### 9. Run the `main.py` File
Now that everything is set up, you can run the `main.py` file.

**Important Notes:**  
- Some functions require administrative privileges for performance purposes. To grant the program admin access, simply run your IDE as an administrator.  
- You will also need internet access for the first run to install the AI models.
