# Portfolio Project Data — CPP Learning Modules

- **Category:** `code-learning` (`Code Learning`)
- **Accent Color:** `orange`
- **Target Assets Folder:** `public/images/projects/cpp_learning_modules/`
- **Required Local Images:** `banner.webp` ONLY

## TypeScript Data (`ProjectCaseStudy`)

```typescript
{
  "id": "cpp-learning-modules",
  "code": "PRO-45 // CL-01",
  "title": "CPP Learning Modules",
  "category": "code-learning",
  "categoryLabel": "Code Learning",
  "year": "2025",
  "status": "Completed",
  "accentColor": "orange",
  "repoUrl": "https://github.com/weztcy/CPP-Learning-Modules",
  "license": "MIT License",
  "banner": "/images/projects/cpp_learning_modules/banner.webp",
  "summary": "Structured 17-module C++ curriculum spanning 250 runnable submodules from core syntax and OOP to STL, algorithms, modern C++, and capstones.",
  "codeLearningDescription": "A 17-module C++ programming curriculum comprising 250 runnable submodules, 252 C++ source files, and 250 verified execution output renders. Designed for progressive mastery from core syntax, pointers, and OOP to STL, algorithms, modern concurrency, debugging, and console capstones.",
  "architectureSummary": "Sequential 17-module C++ curriculum pairing standalone source lessons with MSVC compilation guides and verified execution output renders",
  "techStack": [
    "C++",
    "C++ Standard Library",
    "STL",
    "MSVC",
    "Developer Command Prompt",
    "Markdown",
    "Git"
  ],
  "telemetryMatrix": {
    "projectType": "Modular C++ Learning Curriculum",
    "targetPlatform": "Cross-Platform CLI & Windows MSVC",
    "primaryDomain": "Systems Programming & Algorithms",
    "architecturePipeline": "17 Modules -> 250 Standalone Submodules",
    "testingAndAudit": "Verified",
    "projectStatus": "Completed",
    "projectYear": "2025"
  },
  "codeLearningProjectInfo": {
    "learningCategory": "Modern C++ & Systems Curriculum",
    "difficultyLevel": "Beginner to Advanced",
    "programmingLanguages": "C++"
  },
  "codeLearningObjectives": [
    {
      "title": "Foundational Syntax & Control Flow Mastery",
      "description": "Build fluency in C++ program anatomy, primitive and string types, stream I/O validation, branching decisions, iterative loops, and modular function design.",
      "competencyCode": "COMP_01"
    },
    {
      "title": "Memory Ownership & RAII Discipline",
      "description": "Transition from raw pointers, pointer arithmetic, and manual new/delete allocations to modern RAII resource safety using unique_ptr, shared_ptr, and weak_ptr.",
      "competencyCode": "COMP_02"
    },
    {
      "title": "Object-Oriented & Generic Abstraction",
      "description": "Model domain entities using structs, classes, encapsulation, operator overloading, inheritance, polymorphism, function/class templates, and C++20 concepts.",
      "competencyCode": "COMP_03"
    },
    {
      "title": "STL Containers & Classical Algorithms",
      "description": "Apply sequential and associative STL containers, iterators, and algorithms alongside custom implementations of sorting, trees, hash tables, graphs, and DP.",
      "competencyCode": "COMP_04"
    },
    {
      "title": "Modern Concurrency & Engineering Quality",
      "description": "Adopt C++17/C++20 utilities, move semantics, multithreading, assertions, boundary testing, multi-file header linking, and interactive console capstones.",
      "competencyCode": "COMP_05"
    }
  ],
  "codeLearningPrerequisites": [
    {
      "category": "Prior Knowledge",
      "items": [
        "Basic computer literacy and command-line navigation",
        "No prior C++ programming experience required for Module 01"
      ],
      "description": "The curriculum begins from first principles with Hello World and compiler diagnostics before progressing into memory management and concurrency."
    },
    {
      "category": "Tooling Setup",
      "items": [
        "MSVC compiler toolchain (Developer Command Prompt for VS) or C++20 compiler",
        "Text editor or IDE supporting C++ syntax and UTF-8 files"
      ],
      "description": "All submodules compile cleanly against the C++20 standard with /EHsc, /W4 warning level, and UTF-8 source encoding."
    }
  ],
  "codeLearningCurriculumStructure": {
    "summary": "Organized into three progressive phases across 17 sequential modules, the curriculum transitions learners from foundational syntax, control flow, and functions into memory management, OOP, STL containers, and templates, culminating in classic algorithms, C++20 features, testing practices, and 10 interactive console capstones.",
    "totalEstimatedHours": "125 Hours",
    "phases": [
      {
        "phaseNumber": "01",
        "phaseTitle": "Core Syntax & Procedural Foundations",
        "difficulty": "Beginner",
        "moduleRange": "Modules 01 - 06",
        "topics": [
          "Program Structure & Compiler Warnings",
          "Variables, Data Types & Type Casting",
          "Stream I/O & Operators",
          "Conditionals, Loops & Functions"
        ]
      },
      {
        "phaseNumber": "02",
        "phaseTitle": "Memory, OOP, STL & File Persistence",
        "difficulty": "Intermediate",
        "moduleRange": "Modules 07 - 13",
        "topics": [
          "Arrays, Strings & Vectors",
          "Pointers, Smart Pointers & RAII",
          "User-Defined Types & Full OOP",
          "STL, Templates & Exception/File Handling"
        ]
      },
      {
        "phaseNumber": "03",
        "phaseTitle": "Algorithms, Modern C++20 & Capstones",
        "difficulty": "Advanced",
        "moduleRange": "Modules 14 - 17",
        "topics": [
          "Data Structures & Graph/DP Algorithms",
          "Move Semantics, Concurrency, Ranges & Coroutines",
          "Assertions, Edge-Case Testing & Multi-File Builds",
          "10 Interactive Console Capstone Projects"
        ]
      }
    ]
  },
  "codeLearningModules": [
    {
      "id": "mod-01",
      "moduleNumber": "01",
      "title": "Introduction to C++ & Program Structure",
      "description": "Covers initial console output, main entry anatomy, comments, escape sequences, std namespace discipline, output formatting, syntax errors, warnings, and preprocessor directives.",
      "submoduleCount": 10,
      "difficulty": "Beginner",
      "keyTopics": ["Hello World", "std::cout", "Namespaces", "Compiler Warnings", "Preprocessor"],
      "sourceFilesCount": 10,
      "estimatedHours": "5 Hours"
    },
    {
      "id": "mod-02",
      "moduleNumber": "02",
      "title": "Variables & Data Types",
      "description": "Explores variable declarations, initialization forms, integer and floating-point precision, char/bool/string types, const/constexpr, casting, auto deduction, scope, and numeric limits.",
      "submoduleCount": 14,
      "difficulty": "Beginner",
      "keyTopics": ["Primitive Types", "const & constexpr", "static_cast", "auto", "Variable Scope"],
      "sourceFilesCount": 14,
      "estimatedHours": "6 Hours"
    },
    {
      "id": "mod-03",
      "moduleNumber": "03",
      "title": "Input, Output & Operators",
      "description": "Teaches std::cin, std::getline, stream input validation, arithmetic/comparison/logical/bitwise operators, operator precedence, ternary expressions, cmath, and iomanip formatting.",
      "submoduleCount": 14,
      "difficulty": "Beginner",
      "keyTopics": ["cin & getline", "Input Validation", "Bitwise Operators", "Precedence", "iomanip"],
      "sourceFilesCount": 14,
      "estimatedHours": "6 Hours"
    },
    {
      "id": "mod-04",
      "moduleNumber": "04",
      "title": "Branching & Decision Making",
      "description": "Demonstrates conditional execution using if, if-else, else-if chains, nested conditions, switch-case, ternary decisions, and practical decision programs.",
      "submoduleCount": 10,
      "difficulty": "Beginner",
      "keyTopics": ["if-else", "Nested Conditions", "switch-case", "Ternary Logic", "Leap Year & Grading"],
      "sourceFilesCount": 10,
      "estimatedHours": "5 Hours"
    },
    {
      "id": "mod-05",
      "moduleNumber": "05",
      "title": "Loops & Iteration",
      "description": "Covers for, while, and do-while loops, nested loops, break/continue control, accumulators, factorials, multiplication tables, pattern generation, primes, Fibonacci, and guessing games.",
      "submoduleCount": 15,
      "difficulty": "Beginner",
      "keyTopics": ["for / while / do-while", "break & continue", "Nested Patterns", "Prime Numbers", "Fibonacci"],
      "sourceFilesCount": 15,
      "estimatedHours": "7 Hours"
    },
    {
      "id": "mod-06",
      "moduleNumber": "06",
      "title": "Functions & Modular Decomposition",
      "description": "Introduces function declarations, prototypes, default arguments, overloading, value vs. reference vs. const-reference passing, recursive algorithms, lambdas, and function pointers.",
      "submoduleCount": 15,
      "difficulty": "Beginner",
      "keyTopics": ["Function Overloading", "Pass by Reference", "Recursion", "Lambda Expressions", "Function Pointers"],
      "sourceFilesCount": 15,
      "estimatedHours": "7 Hours"
    },
    {
      "id": "mod-07",
      "moduleNumber": "07",
      "title": "Arrays, Strings & Data Collections",
      "description": "Teaches 1D and multidimensional arrays, matrix addition and multiplication, array search/sort, std::string manipulation, C-style strings, and std::vector operations with objects.",
      "submoduleCount": 19,
      "difficulty": "Intermediate",
      "keyTopics": ["1D & 2D Arrays", "Matrix Operations", "std::string", "C-Style Strings", "std::vector"],
      "sourceFilesCount": 19,
      "estimatedHours": "9 Hours"
    },
    {
      "id": "mod-08",
      "moduleNumber": "08",
      "title": "Pointers & Memory Management",
      "description": "Covers memory addressing, pointer dereferencing, pointer arithmetic, nullptr, reference vs. pointer semantics, dynamic allocation with new/delete, smart pointers, and RAII.",
      "submoduleCount": 15,
      "difficulty": "Intermediate",
      "keyTopics": ["Pointer Arithmetic", "Dynamic Memory", "unique_ptr", "shared_ptr & weak_ptr", "RAII"],
      "sourceFilesCount": 15,
      "estimatedHours": "8 Hours"
    },
    {
      "id": "mod-09",
      "moduleNumber": "09",
      "title": "User-Defined Data Structures",
      "description": "Introduces structs, struct arrays, struct function parameters, unscoped enums, scoped enum class, typedef/using type aliases, unions, nested structs, and structured data records.",
      "submoduleCount": 9,
      "difficulty": "Intermediate",
      "keyTopics": ["struct", "enum class", "using Type Aliases", "union", "Nested Structures"],
      "sourceFilesCount": 9,
      "estimatedHours": "5 Hours"
    },
    {
      "id": "mod-10",
      "moduleNumber": "10",
      "title": "Object-Oriented Programming (OOP)",
      "description": "Deep dive into classes, access specifiers, constructors, destructors, initializer lists, encapsulation, static members, friend functions, operator overloading, inheritance, polymorphism, abstract interfaces, composition, and aggregation.",
      "submoduleCount": 26,
      "difficulty": "Intermediate",
      "keyTopics": ["Encapsulation", "Operator Overloading", "Inheritance", "Virtual Polymorphism", "Abstract Interfaces"],
      "sourceFilesCount": 26,
      "estimatedHours": "13 Hours"
    },
    {
      "id": "mod-11",
      "moduleNumber": "11",
      "title": "Standard Template Library (STL)",
      "description": "Comprehensive exploration of pair, tuple, sequential containers (vector, list, deque), adaptors (stack, queue, priority_queue), associative/unordered maps and sets, iterators, and STL algorithms with lambdas.",
      "submoduleCount": 23,
      "difficulty": "Intermediate",
      "keyTopics": ["Containers & Adaptors", "map & unordered_map", "Iterators", "STL Algorithms", "Lambda Predicates"],
      "sourceFilesCount": 23,
      "estimatedHours": "11 Hours"
    },
    {
      "id": "mod-12",
      "moduleNumber": "12",
      "title": "Templates & Generic Programming",
      "description": "Covers function and class templates, multiple template parameters, specialization, default parameters, template argument deduction, variadic templates, generic patterns, and C++20 concepts.",
      "submoduleCount": 9,
      "difficulty": "Intermediate",
      "keyTopics": ["Function & Class Templates", "Specialization", "Variadic Templates", "Type Deduction", "C++20 Concepts"],
      "sourceFilesCount": 9,
      "estimatedHours": "5 Hours"
    },
    {
      "id": "mod-13",
      "moduleNumber": "13",
      "title": "File Handling & Exception Handling",
      "description": "Teaches file reading, writing, appending, line-by-line parsing, stream validation, CSV persistence, try-catch blocks, throwing exceptions, custom exception classes, and input recovery.",
      "submoduleCount": 12,
      "difficulty": "Intermediate",
      "keyTopics": ["fstream I/O", "CSV Persistence", "try-catch & throw", "Custom Exceptions", "Input Error Handling"],
      "sourceFilesCount": 12,
      "estimatedHours": "6 Hours"
    },
    {
      "id": "mod-14",
      "moduleNumber": "14",
      "title": "Algorithms & Data Structures",
      "description": "Implements linear/binary search, five classic sorting algorithms, singly/doubly linked lists, binary trees, BSTs, traversals, hash tables, graph BFS/DFS, backtracking, dynamic programming, and Big-O analysis.",
      "submoduleCount": 19,
      "difficulty": "Advanced",
      "keyTopics": ["Sorting Algorithms", "Linked Lists & BST", "Hash Tables", "Graph BFS & DFS", "Dynamic Programming"],
      "sourceFilesCount": 19,
      "estimatedHours": "11 Hours"
    },
    {
      "id": "mod-15",
      "moduleNumber": "15",
      "title": "Modern C++ & Advanced Features",
      "description": "Explores structured bindings, optional/variant/any, filesystem, chrono, random library, move semantics, rvalue references, perfect forwarding, Rule of Three/Five/Zero, threads, mutex, async/future, ranges, and coroutines.",
      "submoduleCount": 18,
      "difficulty": "Advanced",
      "keyTopics": ["optional & variant", "Move Semantics", "Rule of Five", "Multithreading & async", "Ranges & Coroutines"],
      "sourceFilesCount": 18,
      "estimatedHours": "10 Hours"
    },
    {
      "id": "mod-16",
      "moduleNumber": "16",
      "title": "Debugging, Testing & Code Quality",
      "description": "Covers debugging loops, assert checks, unit and boundary testing, undefined behavior hazards, sanitizer usage, refactoring, header/source separation, multi-file compilation, custom namespaces, and CLI arguments.",
      "submoduleCount": 12,
      "difficulty": "Advanced",
      "keyTopics": ["Assertions & Unit Tests", "Edge-Case Testing", "Undefined Behavior", "Header/Source Separation", "Multi-File Builds"],
      "sourceFilesCount": 16,
      "estimatedHours": "6 Hours"
    },
    {
      "id": "mod-17",
      "moduleNumber": "17",
      "title": "Practical Capstone Projects",
      "description": "Consolidates curriculum skills into 10 complete interactive CLI applications covering calculators, gradebooks, student/employee/library databases, inventory, cashiering, banking, expense tracking, and terminal gaming.",
      "submoduleCount": 10,
      "difficulty": "Advanced",
      "keyTopics": ["CLI Applications", "State Validation", "OOP & STL Integration", "CRUD Workflows", "Interactive Loops"],
      "sourceFilesCount": 10,
      "estimatedHours": "5 Hours"
    }
  ],
  "codeLearningPracticalProjects": [
    {
      "title": "Console Calculator (241)",
      "description": "Interactive CLI arithmetic calculator using switch-case operator dispatch with explicit error handling for zero division and unrecognized operators.",
      "highlights": [
        "Supports four core arithmetic operators via clean switch dispatch",
        "Guards against division-by-zero and invalid operator input"
      ],
      "coreScope": "Control flow & arithmetic validation",
      "trackTag": "Capstone Lab",
      "tier": "Core",
      "difficulty": "Intermediate",
      "estimatedTime": "30 Minutes",
      "architecturalConstraints": [
        "Single-file standalone CLI binary",
        "Zero external dependencies beyond C++ Standard Library"
      ]
    },
    {
      "title": "Student Grade Manager (242)",
      "description": "Batch grade analyzer storing student name-score pairs in std::vector to compute pass/fail classification and cohort average.",
      "highlights": [
        "Stores structured student records in std::vector",
        "Computes individual pass/fail status and overall mean score"
      ],
      "coreScope": "Collections & aggregate reporting",
      "trackTag": "Capstone Lab",
      "tier": "Core",
      "difficulty": "Intermediate",
      "estimatedTime": "30 Minutes",
      "architecturalConstraints": [
        "Standard input stream parsing",
        "Deterministic formatted console summary"
      ]
    },
    {
      "title": "Student Database System (243)",
      "description": "Menu-driven student registry backed by std::map keyed on student ID with add, lookup, delete, and list commands.",
      "highlights": [
        "O(log n) record lookup and deletion by numeric ID",
        "Command loop supporting create, read, delete, and list actions"
      ],
      "coreScope": "Associative container CRUD",
      "trackTag": "Capstone Lab",
      "tier": "Core",
      "difficulty": "Intermediate",
      "estimatedTime": "35 Minutes",
      "architecturalConstraints": [
        "Keyed persistence in std::map",
        "Graceful handling of missing record IDs"
      ]
    },
    {
      "title": "Inventory Stock System (244)",
      "description": "Warehouse inventory manager tracking product names and quantities in std::map while rejecting stock withdrawals exceeding available inventory.",
      "highlights": [
        "Tracks item IDs, labels, and integer stock levels",
        "Enforces stock availability invariant on outbound deductions"
      ],
      "coreScope": "Inventory invariant enforcement",
      "trackTag": "Capstone Lab",
      "tier": "Core",
      "difficulty": "Intermediate",
      "estimatedTime": "35 Minutes",
      "architecturalConstraints": [
        "Atomic stock validation before state mutation",
        "Menu-driven command processing"
      ]
    },
    {
      "title": "Cashier Checkout System (245)",
      "description": "Point-of-sale calculator summing multi-item price-by-quantity line items and validating customer payment against total due.",
      "highlights": [
        "Accumulates itemized checkout totals across variable baskets",
        "Validates tendered payment and reports change or shortfall"
      ],
      "coreScope": "Iterative billing & payment validation",
      "trackTag": "Capstone Lab",
      "tier": "Core",
      "difficulty": "Intermediate",
      "estimatedTime": "30 Minutes",
      "architecturalConstraints": [
        "Loop-based line-item accumulation",
        "Clean currency/integer arithmetic handling"
      ]
    },
    {
      "title": "Bank Account Simulator (246)",
      "description": "OOP-encapsulated Rekening class enforcing positive deposit checks and preventing withdrawals that exceed the current account balance.",
      "highlights": [
        "Private balance field mutated strictly through validated methods",
        "Rejects non-positive transactions and overdraft attempts"
      ],
      "coreScope": "OOP encapsulation & domain invariants",
      "trackTag": "Capstone Lab",
      "tier": "Advanced",
      "difficulty": "Intermediate",
      "estimatedTime": "35 Minutes",
      "architecturalConstraints": [
        "Encapsulated class design with const balance accessor",
        "Boolean transaction status reporting"
      ]
    },
    {
      "title": "Library Management System (247)",
      "description": "Catalog manager tracking book availability flags inside std::map to prevent double-borrowing or returning unborrowed titles.",
      "highlights": [
        "Tracks book ID, title, and loan status in std::map",
        "Validates borrow and return transitions against current state"
      ],
      "coreScope": "Stateful catalog transitions",
      "trackTag": "Capstone Lab",
      "tier": "Advanced",
      "difficulty": "Intermediate",
      "estimatedTime": "35 Minutes",
      "architecturalConstraints": [
        "Explicit state-machine checks per command",
        "Full catalog listing output"
      ]
    },
    {
      "title": "Employee Management System (248)",
      "description": "HR payroll directory storing employee names and salaries in std::map with interactive add, salary update, delete, and listing workflows.",
      "highlights": [
        "Supports full CRUD lifecycle including targeted salary updates",
        "Maintains sorted employee ID ordering via std::map"
      ],
      "coreScope": "Directory CRUD & record mutation",
      "trackTag": "Capstone Lab",
      "tier": "Advanced",
      "difficulty": "Intermediate",
      "estimatedTime": "35 Minutes",
      "architecturalConstraints": [
        "Interactive stdin command loop",
        "Strict ID existence checks before updates/deletes"
      ]
    },
    {
      "title": "Expense Tracker (249)",
      "description": "Personal finance ledger recording categorized expenses in std::vector and iterating over entries to print itemized and total spending.",
      "highlights": [
        "Logs category-amount pairs in sequential std::vector storage",
        "Generates itemized breakdown and cumulative total expenditure"
      ],
      "coreScope": "Sequential ledger & aggregation",
      "trackTag": "Capstone Lab",
      "tier": "Core",
      "difficulty": "Intermediate",
      "estimatedTime": "30 Minutes",
      "architecturalConstraints": [
        "Sequential vector iteration",
        "Zero external storage dependencies"
      ]
    },
    {
      "title": "Terminal Guessing Game (250)",
      "description": "Interactive CLI game generating a target number between 1 and 10 and providing directional feedback across a bounded five-turn challenge.",
      "highlights": [
        "Limits gameplay to five bounded turns with high/low hints",
        "Reports immediate victory or end-of-round target reveal"
      ],
      "coreScope": "Bounded game loop & feedback logic",
      "trackTag": "Capstone Lab",
      "tier": "Core",
      "difficulty": "Beginner",
      "estimatedTime": "25 Minutes",
      "architecturalConstraints": [
        "Deterministic turn counter cap",
        "Immediate console feedback per guess"
      ]
    }
  ],
  "codeLearningOutcomes": [
    {
      "pillar": "Systems & Memory Safety",
      "skills": [
        {
          "title": "Deterministic Resource Management",
          "description": "Apply RAII, smart pointers (unique_ptr, shared_ptr, weak_ptr), and Rule of Three/Five/Zero semantics to prevent leaks and dangling references."
        },
        {
          "title": "Low-Level Memory Literacy",
          "description": "Reason accurately about stack vs. heap allocation, pointer arithmetic, references, and undefined behavior boundaries."
        }
      ]
    },
    {
      "pillar": "Abstraction & Generic Design",
      "skills": [
        {
          "title": "Object-Oriented Architecture",
          "description": "Design extensible class hierarchies using encapsulation, virtual polymorphism, abstract interfaces, composition, and operator overloading."
        },
        {
          "title": "STL & Template Fluency",
          "description": "Select optimal STL containers and algorithms while writing type-safe function/class templates constrained by C++20 concepts."
        }
      ]
    },
    {
      "pillar": "Algorithmic & Engineering Rigor",
      "skills": [
        {
          "title": "Data Structures & Complexity Analysis",
          "description": "Implement linked lists, BSTs, hash tables, graph traversals, backtracking, and dynamic programming with empirical Big-O timing awareness."
        },
        {
          "title": "Testing & Multi-File Build Discipline",
          "description": "Separate declarations into headers, link multi-file translation units, write boundary assertions, and build interactive CLI applications."
        }
      ]
    }
  ],
  "codeLearningCurriculumSpecs": {
    "curriculumTrack": "Modular Systems C++",
    "primaryLanguage": "C++",
    "executionRuntime": "MSVC Native Executable",
    "testVerification": "Compiled Output Verification"
  },
  "codeLearningSupplementaryResources": [
    {
      "title": "Per-Module Curriculum Guides",
      "description": "Each of the 17 module folders contains a dedicated README.md documenting MSVC compilation commands, concept explanations, sample inputs, and embedded output references.",
      "resources": [
        {
          "name": "Module 01 - 17 README Guides (17 Files)",
          "type": "Reference Guide",
          "format": "MD"
        }
      ]
    },
    {
      "title": "Verified Execution Output Renders",
      "description": "Every standalone submodule pairs its source code with a captured PNG render of the executed program output inside each module's output directory.",
      "resources": [
        {
          "name": "Module 01 - 17 Output Renders (250 Files)",
          "type": "Exercise Sheet",
          "format": "PNG"
        }
      ]
    }
  ]
}
```
