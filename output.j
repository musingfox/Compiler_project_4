; output.j
.class public output
.super java/lang/Object
.field public static _sc Ljava/util/Scanner;
.field public static mySeed I
; Line #1: int mySeed;
; Line #2: const int INITIALIZE = 123456789;
; Line #3: 
; Line #4: void srand( int seed );
; Line #5: int rand();
; Line #6: 
.method public static main([Ljava/lang/String;)V
.limit stack 100
.limit locals 100
; Line #7: int main() {
ldc 1
istore 0
; Line #8: 	int i = 1, grade;
; Line #9: 	
ldc 123456789
invokestatic output/srand(I)V
; Line #10: 	srand( INITIALIZE );	// print "student (number)    (grade)    pass/fail"
; Line #11: 	
; Line #12: 	// print "student (number)    (grade)    pass/fail"
LWbegin_0:
iload 0
ldc 10
isub
ifle Ltrue_1
iconst_0
goto Lfalse_1
Ltrue_1:
iconst_1
Lfalse_1:
ifeq LWExit_0
; Line #13: 	while( i <= 10 ) {
getstatic java/lang/System/out Ljava/io/PrintStream;
ldc "student "
invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V
; Line #14: 		print "student ;
getstatic java/lang/System/out Ljava/io/PrintStream;
iload 0
invokevirtual java/io/PrintStream/print(I)V
; Line #15: 		print i;
getstatic java/lang/System/out Ljava/io/PrintStream;
ldc "	"
invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V
; Line #16: 		print "\t;
invokestatic output/rand()I
ldc 71
irem
ldc 30
iadd
istore 1
; Line #17: 		grade = rand() % 71 + 30;
getstatic java/lang/System/out Ljava/io/PrintStream;
iload 1
invokevirtual java/io/PrintStream/print(I)V
; Line #18: 		print grade;
getstatic java/lang/System/out Ljava/io/PrintStream;
ldc "	"
invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V
; Line #19: 		print "\t;
; Line #20: 		
iload 1
ldc 60
isub
ifge Ltrue_3
iconst_0
goto Lfalse_3
Ltrue_3:
iconst_1
Lfalse_3:
ifeq Lelse_2
; Line #21: 		if( grade >= 60 ) {
getstatic java/lang/System/out Ljava/io/PrintStream;
ldc "pass
"
invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V
; Line #22: 			print "pass\n;
; Line #23: 		}
; Line #24: 		
goto LExit_2
Lelse_2:
; Line #25: 		else {
getstatic java/lang/System/out Ljava/io/PrintStream;
ldc "fail
"
invokevirtual java/io/PrintStream/print(Ljava/lang/String;)V
; Line #26: 			print "fail\n;
LExit_2:
; Line #27: 		}
; Line #28: 		
iload 0
ldc 1
iadd
istore 0
; Line #29: 		i = i + 1;
goto LWbegin_0
LWExit_0:
; Line #30: 	}
; Line #31: 
ldc 0
return
; Line #32: 	return 0;
return
.end method
; Line #33: }
; Line #34: 
.method public static srand(I)V
.limit stack 100
.limit locals 100
; Line #35: void srand( int seed ) {
iload 0
putstatic output/mySeed I
; Line #36: 	mySeed = seed;
return
.end method
; Line #37: }
; Line #38: 
.method public static rand()I
.limit stack 100
.limit locals 100
; Line #39: int rand() {
getstatic output/mySeed I
ldc 234
imul
ldc 123
iadd
putstatic output/mySeed I
; Line #40: 	mySeed = mySeed * 234 + 123;
; Line #41: 	
getstatic output/mySeed I
ldc 0
isub
ifge Ltrue_5
iconst_0
goto Lfalse_5
Ltrue_5:
iconst_1
Lfalse_5:
ifeq Lelse_4
; Line #42: 	if( mySeed >= 0 ) {
getstatic output/mySeed I
ireturn
;; Line #43: 		return mySeed;
; Line #44: 	}
; Line #45: 	
goto LExit_4
Lelse_4:
; Line #46: 	else {
getstatic output/mySeed I
ineg
ireturn
;; Line #47: 		return -mySeed;
LExit_4:
; Line #48: 	}	
ldc 0
ireturn
;; Line #49: 	return 0;
ireturn
.end method
; Line #50: }
; Line #51: /*
; Line #52: Input:
; Line #53: No input
; Line #54: 
; Line #55: Output:
; Line #56: student 1       91      pass
; Line #57: student 2       44      fail
; Line #58: student 3       66      pass
; Line #59: student 4       81      pass
; Line #60: student 5       100     pass
; Line #61: student 6       72      pass
; Line #62: student 7       35      fail
; Line #63: student 8       70      pass
; Line #64: student 9       33      fail
; Line #65: student 10      67      pass
; Line #66: */
