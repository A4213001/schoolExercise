#�����ƨ禡
mean <- function(x)
{
  return(sum(x)/length(x))
}
#�����ƨ禡end

#����ƨ禡
My_Median <- function(x) #�D�����
{
  n <- length(x)
  n_sort <- sort(x) #�N��J�ƦC�̧ǱƦC
  quo <- n%/%2 #%/%�D��
  res <- n%%2 #%%�D�l��
  
  if(res==1){ #�ƶq���_�Ʈ�
    Value.Median <- n_sort[quo] #��J�ƦC�������
    return(Value.Median)
  }
  else{ #�ƶq�����Ʈ�
    Value.Median <- (n_sort[quo]+ n_sort[quo+1])/2 #��J�ƦC�������
    return(Value.Median)
  }
}
#����ƨ禡end

#�D�{���}�l
Bowling <- read.csv("C:/Users/E901/Desktop/data.csv") #�q���w���|Ūcsv��
Name.All <-Bowling[,1] #Ū�Ĥ@��
Score.All <-Bowling[,2] #Ū�ĤG��
A.Name <- Name.All[1:6] #�N�Ĥ@�檺1~6�C��iA.Name
B.Name <- Name.All[7:12] #�N�Ĥ@�檺7~12�C��iB.Name
C.Name <- Name.All[13:18] #�N�Ĥ@�檺13~18�C��iC.Name
A.Score <- Score.All[1:6] #�N�ĤG�檺1~6�C��iA.Score
B.Score <- Score.All[7:12] #�N�ĤG�檺7~12�C��iB.Score
C.Score <- Score.All[13:18] #�N�ĤG�檺13~18�C��iC.Score
A.Mean <- mean(A.Score) #��A������
B.Mean <- mean(B.Score) #��B������
C.Mean <- mean(C.Score) #��C������
cat("A��������:",A.Mean) #�L�XA����
cat("\nB��������:",B.Mean) #�L�XB����
cat("\nC��������:",C.Mean) #�L�XC����
A.Median <- My_Median(A.Score) #��A�����
B.Median <- My_Median(B.Score) #��B�����
C.Median <- My_Median(C.Score) #��C�����
cat("\nA������Ƭ�:",A.Median) #�L�XA�����
cat("\nB������Ƭ�:",B.Median) #�L�XB�����
cat("\nC������Ƭ�:",C.Median) #�L�XC�����
A.Sd <- sd(A.Score) #��A�����
B.Sd <- sd(B.Score) #��B�����
C.Sd <- sd(C.Score) #��C�����
cat("\nA���зǮt��:",A.Sd) #�L�XA�зǮt
cat("\nB���зǮt��:",B.Sd) #�L�XB�зǮt
cat("\nC���зǮt��:",C.Sd) #�L�XC�зǮt
#�D�{������