@echo off
REM Define variables
set VENV_NAME=venv
set PYTHON_VERSION=3.11
set TORCH_URL=https://download.pytorch.org/whl/cu124

REM Navigate to the directory where this script is located
cd /d "%~dp0"

REM Check if the virtual environment already exists
if exist %VENV_NAME%\Scripts\activate (
    echo Virtual environment '%VENV_NAME%' already exists. Activating...
) else (
    echo Virtual environment '%VENV_NAME%' not found. Creating...
    py -%PYTHON_VERSION% -m venv %VENV_NAME%
)

REM Activate the virtual environment
call %VENV_NAME%\Scripts\activate

REM Install PyTorch
pip install torch torchvision torchaudio --index-url %TORCH_URL%

REM Install other dependencies
pip install -r requirements.txt

echo Setup completed successfully!
pause

