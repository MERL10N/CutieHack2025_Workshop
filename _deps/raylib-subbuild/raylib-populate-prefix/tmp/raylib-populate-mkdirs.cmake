# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/btmig/OneDrive/Documents/UCR/CutieHack2025_Workshop/_deps/raylib-src"
  "C:/Users/btmig/OneDrive/Documents/UCR/CutieHack2025_Workshop/_deps/raylib-build"
  "C:/Users/btmig/OneDrive/Documents/UCR/CutieHack2025_Workshop/_deps/raylib-subbuild/raylib-populate-prefix"
  "C:/Users/btmig/OneDrive/Documents/UCR/CutieHack2025_Workshop/_deps/raylib-subbuild/raylib-populate-prefix/tmp"
  "C:/Users/btmig/OneDrive/Documents/UCR/CutieHack2025_Workshop/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp"
  "C:/Users/btmig/OneDrive/Documents/UCR/CutieHack2025_Workshop/_deps/raylib-subbuild/raylib-populate-prefix/src"
  "C:/Users/btmig/OneDrive/Documents/UCR/CutieHack2025_Workshop/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp"
)

set(configSubDirs Debug)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/btmig/OneDrive/Documents/UCR/CutieHack2025_Workshop/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/btmig/OneDrive/Documents/UCR/CutieHack2025_Workshop/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
