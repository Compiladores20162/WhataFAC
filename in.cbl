IDENTIFICATION DIVISION.
PROGRAM-ID. MEUPROGRAMA.
DATA DIVISION.
WORKING-STORAGE SECTION.
    01 conta_carro PIC 9(4) VALUE 10.
    01 mediaCarros PIC 9(5).
    01 primeira_struct .
        05 valor_struct_1 PIC 9(5).
    01 contador PIC 9(5) VALUE 0.
    01 valorInicial PIC 9(5)V99999 VALUE 12.5.
    01 segunda_struct .
        05 cinco_da_struct PIC 9(5).
        05 cinco_2_da_struct PIC 9(5).
        05 cinco_3_da_struct PIC 9(5)V99999.
    01 somaTotal PIC A(6).
    01 mediaAritmetica PIC X(7).
PROCEDURE DIVISION.
MAIN-PROCEDURE.

DISPLAY "Amigo estou trabalhando"

ACCEPT mediaAritmetica

IF conta_carro < 10 AND 10 > 2 AND 10 <= 2 AND 10 < 2 OR 12> 11
DISPLAY "MUITO BOM"
END-IF

EVALUATE conta_carro



* DISPLAY "oi"

WHEN 1
COMPUTE
contador = (conta_carro + valorInicial) * 5
END-COMPUTE

WHEN 50

IF 9 < 14
DISPLAY "9 eh maior que 14"
ELSE
DISPLAY "nem vai entrar"
END-IF

WHEN 3

PERFORM UNTIL conta_carro < valorInicial AND 10 >= 2 AND 10 < 2
DISPLAY "aqui"
END-PERFORM



WHEN OTHER
DISPLAY "nao a 1 nem 2 nem 3"

END-EVALUATE

STOP RUN.
END PROGRAM MEUPROGRAMA.
