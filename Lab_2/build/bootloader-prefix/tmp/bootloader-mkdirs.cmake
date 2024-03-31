# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/esp/esp-idf/components/bootloader/subproject"
  "D:/esp_practice/Lab2/project-name/build/bootloader"
  "D:/esp_practice/Lab2/project-name/build/bootloader-prefix"
  "D:/esp_practice/Lab2/project-name/build/bootloader-prefix/tmp"
  "D:/esp_practice/Lab2/project-name/build/bootloader-prefix/src/bootloader-stamp"
  "D:/esp_practice/Lab2/project-name/build/bootloader-prefix/src"
  "D:/esp_practice/Lab2/project-name/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/esp_practice/Lab2/project-name/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
