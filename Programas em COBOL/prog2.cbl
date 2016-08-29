       IDENTIFICATION DIVISION.
       PROGRAM-ID. HELLO.

       DATA DIVISION.
          WORKING-STORAGE SECTION.
          01 WS-NAME PIC A(30).
          01 WS-ID PIC 9(5) VALUE 00012.
          01 WS-ID2 PIC 9(5) VALUE 00030.
          01 A PIC 9(5).
          01 B PIC 9(5).
          01 C PIC 9(5).

       PROCEDURE DIVISION.
          A000-FIRST-PARA.
          DISPLAY 'Hello World'.
          MOVE 'TutorialsPoint' TO WS-NAME.
          DISPLAY "My name is : "WS-NAME.
          DISPLAY "My ID is : "WS-ID.
          DISPLAY WS-ID WS-ID2;

          A ADD B;
          A GIVING C;
          DISPLAY A;

          ACCEPT A;
          ACCEPT B;

          ADD A , B GIVING C;
          DISPLAY C;

           A , B GIVING C;
          DISPLAY C;

       STOP RUN.
