.MODEL SMALL
.DATA
	NUM DB 7H,4H,0H,0H,0H,0H,0H,0H,0H,0H,0H,0H
.CODE
	MOV AX,@DATA
	MOV DS,AX
	LEA BX,NUM
	MOV AL,[BX][0]
	MOV AH,[BX][1]
	ADD AL,AH
	MOV AH,0
	AAA
	MOV [BX][2],AH
	MOV [BX][3],AL
	MOV AL,[BX][0]
	MOV AH,[BX][1]
	SUB AL,AH
	MOV AH,0
	AAS
	MOV [BX][4],AH
	MOV [BX][5],AL
	MOV AL,[BX][0]
	MOV DL,[BX][1]
	MUL DL
	AAM
	MOV [BX][6],AH
	MOV [BX][7],AL
	MOV AX,0802H
	MOV DL,6
	AAD
	DIV DL
	MOV [BX][8],AH
	MOV [BX][9],AL
	MOV AH,4CH
	INT 21H
END