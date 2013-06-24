Mae Code Styleguide
===================
Mae is written in both C and C++.

Naming Conventions
------------------
Classes, structs, namespaces: `UpperCase`
Functions: `mixedCase`
Variables: `lower_case_with_underscores`
Class/object members, struct fields: `_lower_case_with_prefixed_underscore`

Indentation & Formatting
----------------------
One True Brace Style.

Single tab per indentation level; spaces not allowed.

One-line code blocks must still be surrounded by curly brackets.

Parentheses must hug their contents, like so:
`int foo = (5 + 5) * 10;`

One statement per line.

Infix operators must have a leading and trailing space, like so:
`int foo = (5 + 5) * 10;`

Semicolons must hug their statements, like so:
`int foo = (5 + 5) * 10;`

Type descriptors should hug the types, like so:
`int* bar;`

Typecasts should hug the values they cast, like so:
`int foo = (int*)bar;`

Comments
--------
Single-line comments must have a single space between their symbol and contents,
like so:
`//! Fix segfault`

Multi-line comments must follow the following style:
```
/**
 * Foo
 * Bar
 * Baz
 */
```

Single-line comment symbols:
- `//` - Normal comment
- `//$` - To-do comment
- `//?` - Possible to-do comment
- `//!` - Urgent to-do comment

Multi-line comment symbols:
- `/**` - Normal comment
- `/**$` - To-do comment
- `/**?` - Possible to-do comment
- `/**!` - Urgent to-do comment

Copyright Placement
-------------------
Each source file must begin with the following snippet:
```
/**
 * <filename>
 * Copyright (C) <year> Lingubender
 */
```