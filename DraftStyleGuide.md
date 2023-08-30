# TimeBom code style guidelines

## Overview

These code style guidelines are intended to enforce TimeBom's source code's readability, maintainability, and debug-ability wherever possible.

## Miscellaneous information

This document can be abbreviated to "the CSGs" if needed.

Pull requests are required to use these guidelines.

## Style guide

### Miscellaneous but important style guidelines

Always use precisely one tab to indent each level, not spaces.

Always put each class in its own file.

Always minimize the amount of classes needed to perform a task, without bloating classes too much.

Always keep your commit messages short, but descriptive.

Never commit 100 or more lines of code at once.

### Specific naming guidelines

#### Class names

Class names are in PascalCase and unabbreviated at all times to enhance code readability, and are prefixed with `TB_` (for TimeBom).

Ex. 

```cpp
class TB_Renderer {}
```

#### Variable/method names

Variable and method names are in lower_snake_case and always unabbreviated.

Ex.

```cpp
TB_Sprite player_sprite = new TB_Sprite();
```

#### Constant names

Constants are in UPPER_SNAKE_CASE and always unnabreviated.

Ex.

```cpp
int MAGIC_NUMBER;
```

### General naming guidelines

If some code isn't totally obvious, use comments to explain it.

Ex.

```cpp
// We use this later on to check if a certain number < MAGIC_NUMBER.
int MAGIC_NUMBER = 4;
```

However, names should always disambiguate as much as possible. So this code would be much better:

```cpp
int NUMBER_TO_CHECK_IF_X_LESS_THAN = 4;
```

And plain-English comments can optionally be added to make its intended use even clearer:

```cpp
// We use this later on to check if a certain number is less than this number.
int NUMBER_TO_CHECK_IF_X_LESS_THAN = 4;
```

### Miscellaneous, but less important guidelines

The best way I can describe this rule is the following.

DON'T do this:

```cpp
std::cout << "x < y is: " << x < y;
```

Do this instead:

```cpp
std::cout << "x < y is: " << (x < y);
```

That is, when using `<<` in C++, use parentheses when embedding expressions.
