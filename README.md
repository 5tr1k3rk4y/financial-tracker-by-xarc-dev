# Portfolio Project Notes

This project is a small C++ budgeting and transaction program. These notes
describe the code that already exists and the improvements I want to make next.

## What the existing files are for

- `category.hpp` describes a category, such as Food, Transport, or Salary.
- `date_utils.hpp` contains the date data and the date-related checks.
- `budget.hpp` connects a category with a date and budget information.
- `transaction.hpp` represents money transactions.
- `ledger.hpp` is intended to organise the transactions in one ledger.
- `validation.h` contains validation-related code.
- `storage.h` is intended to handle saving or loading information.
- `cli.h` and `main.cpp` are part of the command-line interface.
- The `.cpp` files contain the implementation for the declarations in the
  header files.

> **Learning comment:** The first header file I documented was `category.hpp`.
> The file is a header file, so it is different from `category.cpp`, which is
> normally used for implementation code.

## Previous code and current learning goals

The previous code started the structure for categories and dates. It also
included functions for checking leap years and representing month lengths.
The date logic still needs to be made more reliable and easier to follow.

My next goals are:

1. Complete the leap-year logic.
2. Make sure a date cannot contain more days than its month allows:
   - February has 28 days in a normal year.
   - February has 29 days in a leap year.
   - April, June, September, and November have 30 days.
   - The remaining months have 31 days.
3. Keep the date checks together so that invalid day, month, and year values
   are rejected consistently.

## How I am using ChatGPT

I am using ChatGPT as a teacher and learning assistant, not as a replacement
for my own thinking or programming. I want explanations in simple language,
questions that help me reason about the code, and comments that make the
existing code easier to understand.

Before accepting a suggestion, I will try to understand:

- what the code is doing;
- why the solution works;
- what assumptions it makes; and
- how I could explain it in my own words.

The purpose of this project is to practise C++ and problem-solving, so the
final decisions and learning remain my responsibility.
