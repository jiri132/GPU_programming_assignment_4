

You can build the '*.cpp' files that run on a CPU with:

  make cpp

To build the '*.cu' files that use a GPU first install 'nvidia-cuda-toolkit' but that requires a NVIDIA GPU:

  sudo apt install nvidia-cuda-toolkit

Then can build the '*.cpp' file with:

  make cuda

If you don't have a NVIDIA GPU use these instructions to use Google Colab:

  https://github.com/bterwijn/GPU_Programming

Or use the instructions to work on Snellius (follows later).
