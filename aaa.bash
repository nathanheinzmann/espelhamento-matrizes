#!/bin/bash

# Configs
file_name="espelhamento-matrizes"
extension_in="c"
extension_out="exe"

output_file_path="${file_name}.${extension_out}"
input_file_path="${file_name}.${extension_in}"

# Build
gcc $input_file_path -o $output_file_path

# Run
./${output_file_path}
