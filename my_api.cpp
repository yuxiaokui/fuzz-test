// Copyright 2017 Google Inc. All Rights Reserved.
// Licensed under the Apache License, Version 2.0 (the "License");

// Implementation of "my_api".
#include "my_api.h"

#include <vector>

// Do some computations with 'str', return the result.
// This function contains a bug. Can you spot it?
size_t DoStuff(const std::string &str) {
  std::vector<int> Vec({0, 1, 2, 3, 4});
  size_t Idx = 0;
  if (str.size() > 5)
    Idx++;
  if (str.find("food") != std::string::npos)
    Idx++;
  if (str.find("ball") != std::string::npos)
    Idx++;
  if (str.find("touch") != std::string::npos)
    Idx++;
  if (str.find("imges") != std::string::npos)
    Idx++;
  return Vec[Idx];
}
