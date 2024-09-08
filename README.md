# CppTowerOfHanoi

## Overview
This repository contains a C++ implementation of the **Tower of Hanoi** problem, a classic algorithmic puzzle that demonstrates the power of recursion. The goal is to move all disks from the source peg to the destination peg, following specific rules.

## Features
- Recursive solution to the Tower of Hanoi problem
- Customizable number of disks
- Outputs step-by-step instructions to solve the puzzle

## How It Works
The program solves the Tower of Hanoi problem by recursively moving `n-1` disks to an intermediate peg, moving the nth disk to the destination peg, and then moving the `n-1` disks to the destination peg.

### Rules:
1. Only one disk can be moved at a time.
2. A disk can only be placed on top of a larger disk or on an empty peg.
3. All disks start on the source peg and must be moved to the destination peg.

## Installation
1. Clone this repository:
   ```bash git clone https://github.com/sanchez-softwareengineer/CppTowerOfHanoi.git