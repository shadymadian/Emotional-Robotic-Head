#!/bin/bash

# Define variables
VENV_NAME="venv"
PYTHON_VERSION="python3.11"
TORCH_URL="https://download.pytorch.org/whl/cu124"

# Navigate to the directory where this script is located
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR" || exit

# Check if the virtual environment already exists
if [ -d "$VENV_NAME" ]; then
    echo "Virtual environment '$VENV_NAME' already exists. Activating..."
else
    echo "Virtual environment '$VENV_NAME' not found. Creating..."
    $PYTHON_VERSION -m venv "$VENV_NAME"
fi

# Activate the virtual environment
source "$VENV_NAME/bin/activate"

# Install PyTorch
pip install torch torchvision torchaudio --index-url "$TORCH_URL"

# Install other dependencies
pip install -r requirements.txt

echo "Setup completed successfully!"
