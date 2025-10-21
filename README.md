# CornerGrocerInventoryTracker
Reflection Project Summary

This project involved developing a C++ program to track item frequencies from a grocery transaction file. The goal was to help store managers identify purchasing trends and inventory needs by automating the process of counting and reporting item occurrences. The program reads item data from a file, calculates frequency counts, and outputs results to both the console and a backup file. It solves the problem of manual inventory tracking and supports better decision-making through data analysis.

What I Did Well

I implemented a clean, modular structure with clear documentation and consistent formatting. My code includes robust file handling and error checking, ensuring predictable behavior even when input files are missing or malformed. I also created a manager class to centralize logic and maintain separation of concerns, which helped streamline the program’s flow and made it easier to test.

Areas for Enhancement

Based on instructor feedback, I now recognize that my use of a manager class did not meet the course’s requirement for a reusable, instantiable class. To improve the design, I would refactor the program to include an class with properties such as name, price, and aisle number. This change would make the code more scalable, adaptable to future enhancements, and better aligned with object-oriented principles. I would also consider using unordered maps to improve lookup efficiency and adding input sanitization to enhance security.

Challenges and Solutions

The most challenging part of the project was troubleshooting persistent file access errors in Visual Studio. I overcame this by rebuilding the project, validating file paths, and using console output to trace behavior. These steps helped isolate the issue and confirm that the program was functioning correctly. I’ve added IDE diagnostics, GitHub issue tracking, and peer feedback to my support network to escalate future troubleshooting more effectively.

Transferable Skills

This project strengthened my ability to design testable, user-centered programs and document them professionally. I gained experience in modular design, file I/O, error handling, and ethical reasoning. These skills are directly applicable to future coursework in software development, systems analysis, and cybersecurity. I also deepened my understanding of how to align technical decisions with stakeholder needs and professional standards.

Maintainability and Adaptability

I made the program maintainable by using modular functions, consistent formatting, and descriptive comments. The code is easy to read and update, and the structure supports future enhancements such as adding a graphical interface or integrating with a database. The README file and inline documentation provide context for future developers or reviewers, ensuring transparency and ease of collaboration.
