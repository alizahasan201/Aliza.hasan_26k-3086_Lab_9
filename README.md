# Aliza.hasan_26k-3086_Lab_9

# Lab 09 – 3D Arrays & Functions in C

Notes on **3D arrays** and **user-defined functions (UDFs)** in C.

---

## 📚 Contents

1. [3D Arrays](#1-3d-arrays)
2. [Task: Shops Total Price](#2-task-shops-total-price)
3. [Functions Basics](#3-functions-basics)
4. [Types of Functions](#4-types-of-functions)

---

## 1. 3D Arrays

A 3D array is like **layers of tables**. Each layer is a 2D table with rows and columns.

**Example:** `student[2][3][2]`

| Dimension | Size | Meaning |
|-----------|------|---------|
| 1st | 2 | Layers → 2 students |
| 2nd | 3 | Rows → 3 subjects (PF, ICT, Calculus) |
| 3rd | 2 | Columns → 2 marks per subject |

**Key points**

- Each layer holds the data of one student.
- To print a 3D array, use **3 nested loops**:
  - Outer loop → layers
  - Middle loop → rows
  - Inner loop → columns
- Rule: **one loop per dimension**.

---

## 2. Task: Shops Total Price

> Create a 3D array to store **3 shops** having **4 products**, where each product has a **price** and **quantity**. Find the total price of products in every shop.

| Dimension | Size | Meaning |
|-----------|------|---------|
| 1st | 3 | Shops (layers) |
| 2nd | 4 | Products (rows) |
| 3rd | 2 | Column 0 = price, Column 1 = quantity |

**Logic**

1. Store price and quantity for each product of each shop.
2. For each shop, multiply **price × quantity** of every product.
3. Add these values together to get the shop's total.
4. Reset the total to 0 before starting the next shop.

---

## 3. Functions Basics

A function is a block of code that does one job and can be reused many times.

### Three parts of a function

| Part | Where it goes | Purpose |
|------|---------------|---------|
| **Declaration** (prototype) | Above `main()` | Tells the compiler the function exists |
| **Calling** | Inside `main()` | Runs the function |
| **Definition** (body) | After `main()` ends | Contains the actual logic |

### Function declaration format

`return-type  function-name ( datatype arg1, datatype arg2 );`

- **Return type** → type of value the function gives back (`int`, `void`, etc.)
- **Function name** → name used to call it (e.g. `sum`)
- **Arguments** → values passed into the function, each with a datatype and name

### Examples done in lab

| Function | What it does |
|----------|--------------|
| `sum` | Takes two numbers and returns their addition |
| `multiply` | Takes one number and returns its cube |
| `check` | Takes two numbers and returns the largest one |
| `greet` | Prints "hello world" (can be called many times) |
| `get_data` | Takes two numbers and prints them |

---

## 4. Types of Functions

| Type | Takes Arguments? | Returns Value? | Example |
|------|:---:|:---:|---------|
| No argument, no return | ❌ | ❌ | `greet()` – just prints a message |
| Argument, no return | ✅ | ❌ | `get_data()` – takes values and prints them |
| No argument, with return | ❌ | ✅ | A function that gives back a fixed value |
| Argument, with return | ✅ | ✅ | `sum()` – takes two numbers, returns the result |

**Remember**

- `void` means the function **returns nothing**.
- `return` sends a value back to where the function was called.
- Best practice: declare functions **above** `main()` and define them **after** `main()`.
