from fpdf import FPDF
import os

class PDF(FPDF):
    def __init__(self):
        super().__init__()
        self.add_page()
        self.set_auto_page_break(auto=True, margin=15)
        # Enable Unicode support
        self.set_doc_option('core_fonts_encoding', 'utf-8')
        self.set_font("Arial", size=12)

    def add_text(self, text):
        # Replace emojis and special characters with plain text alternatives
        text = (text.replace("🛣️", "[ROADMAP]")
                   .replace("📊", "[SUMMARY]")
                   .replace("🗓️", "[TIMELINE]")
                   .replace("📚", "[RESOURCES]")
                   .replace("✅", "[DONE]")
                   .replace("❌", "[TODO]"))
        for line in text.split("\n"):
            self.multi_cell(0, 10, line)

# Create PDF and add the text content
pdf = PDF()

text = """
Based on your LeetCode profile (MahatoJI) and Coding Ninjas profile, here's a structured Data Structures and Algorithms (DSA) roadmap tailored to your progress. This roadmap is organized from foundational topics to advanced concepts, highlighting the areas you've already explored.

---

[ROADMAP] Personalized DSA Roadmap

1. Programming Fundamentals
* Topics: Variables, Data Types, Control Structures, Functions, Recursion
* Status: [DONE] Completed (Based on your proficiency in C++ and JavaScript)

2. Arrays & Strings
* Topics: Array Manipulation, String Operations, Two Pointers, Sliding Window
* LeetCode Problems Attempted:
  * Arrays: 8 problems
  * Strings: 5 problems
  * Two Pointers: 7 problems
* Status: [DONE] Well-practiced

3. Mathematics & Number Theory
* Topics: Prime Numbers, GCD/LCM, Modular Arithmetic
* LeetCode Problems Attempted: 5 problems
* Status: [DONE] Intermediate understanding

4. Binary Search & Divide and Conquer
* Topics: Binary Search, Merge Sort, Quick Sort
* LeetCode Problems Attempted:
  * Binary Search: 4 problems
  * Divide and Conquer: 1 problem
* Status: [DONE] Familiar with basic applications

5. Linked Lists
* Topics: Singly Linked List, Doubly Linked List, Cycle Detection
* Status: [TODO] Not yet attempted

6. Stacks & Queues
* Topics: Stack Operations, Queue Implementations, Monotonic Stack
* Status: [TODO] Not yet attempted

7. Hashing & Hash Maps
* Topics: Hash Tables, Collision Resolution, Frequency Counting
* Status: [TODO] Not yet attempted

8. Trees & Binary Trees
* Topics: Tree Traversals, Binary Search Trees, Tree Height
* Status: [TODO] Not yet attempted

9. Graphs
* Topics: Depth-First Search (DFS), Breadth-First Search (BFS), Topological Sort
* Status: [TODO] Not yet attempted

10. Dynamic Programming
* Topics: Memoization, Tabulation, Longest Common Subsequence
* Status: [TODO] Not yet attempted

11. Advanced Data Structures
* Topics: Heaps, Tries, Segment Trees, Disjoint Set Union (DSU)
* Status: [TODO] Not yet attempted

---

[SUMMARY] Progress Summary

| Category                 | Status           |
| ------------------------|------------------|
| Programming Fundamentals| [DONE] Completed |
| Arrays & Strings        | [DONE] Well-practiced |
| Mathematics             | [DONE] Intermediate |
| Binary Search           | [DONE] Familiar |
| Linked Lists            | [TODO] Not started |
| Stacks & Queues         | [TODO] Not started |
| Hashing                 | [TODO] Not started |
| Trees                   | [TODO] Not started |
| Graphs                  | [TODO] Not started |
| Dynamic Programming     | [TODO] Not started |
| Advanced Data Structures| [TODO] Not started |

---

[TIMELINE] Suggested Next Steps

To continue your DSA journey, consider the following plan:
1. Weeks 1-2: Focus on Linked Lists and Stacks & Queues.
2. Weeks 3-4: Dive into Hashing and Trees.
3. Weeks 5-6: Explore Graph algorithms.
4. Weeks 7-8: Begin Dynamic Programming concepts.
5. Weeks 9-10: Study Advanced Data Structures like Heaps and Tries.

Allocate time each week to practice problems related to these topics on platforms like LeetCode and Coding Ninjas.

---

[RESOURCES] Recommended Resources
* LeetCode Study Plan: Structured paths for various topics.
* GeeksforGeeks DSA Roadmap: Comprehensive guides and tutorials.
* Coding Ninjas Courses: In-depth courses on DSA topics.
* NeetCode Roadmap: Curated list of problems by topic.

Feel free to reach out if you need further assistance or resources on specific topics!
"""

pdf.add_text(text)
pdf_path = "./DSA_Roadmap_Report.pdf"
pdf.output(pdf_path)

pdf_path
