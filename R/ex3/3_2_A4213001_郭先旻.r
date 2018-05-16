#キА计ㄧΑ
mean <- function(x)
{
  return(sum(x)/length(x))
}
#キА计ㄧΑend

#い计ㄧΑ
My_Median <- function(x) #―い计
{
  n <- length(x)
  n_sort <- sort(x) #盢块计ㄌ逼
  quo <- n%/%2 #%/%―坝
  res <- n%%2 #%%―緇计
  
  if(res==1){ #计秖计
    Value.Median <- n_sort[quo] #块计い计
    return(Value.Median)
  }
  else{ #计秖案计
    Value.Median <- (n_sort[quo]+ n_sort[quo+1])/2 #块计い计
    return(Value.Median)
  }
}
#い计ㄧΑend

#祘Α秨﹍
Bowling <- read.csv("C:/Users/E901/Desktop/data.csv") #眖﹚隔畖弄csv郎
Name.All <-Bowling[,1] #弄材︽
Score.All <-Bowling[,2] #弄材︽
A.Name <- Name.All[1:6] #盢材︽1~6秈A.Name
B.Name <- Name.All[7:12] #盢材︽7~12秈B.Name
C.Name <- Name.All[13:18] #盢材︽13~18秈C.Name
A.Score <- Score.All[1:6] #盢材︽1~6秈A.Score
B.Score <- Score.All[7:12] #盢材︽7~12秈B.Score
C.Score <- Score.All[13:18] #盢材︽13~18秈C.Score
A.Mean <- mean(A.Score) #衡AキА
B.Mean <- mean(B.Score) #衡BキА
C.Mean <- mean(C.Score) #衡CキА
cat("AキА:",A.Mean) #AキА
cat("\nBキА:",B.Mean) #BキА
cat("\nCキА:",C.Mean) #CキА
A.Median <- My_Median(A.Score) #衡Aい计
B.Median <- My_Median(B.Score) #衡Bい计
C.Median <- My_Median(C.Score) #衡Cい计
cat("\nAい计:",A.Median) #Aい计
cat("\nBい计:",B.Median) #Bい计
cat("\nCい计:",C.Median) #Cい计
A.Sd <- sd(A.Score) #衡Aい计
B.Sd <- sd(B.Score) #衡Bい计
C.Sd <- sd(C.Score) #衡Cい计
cat("\nA夹非畉:",A.Sd) #A夹非畉
cat("\nB夹非畉:",B.Sd) #B夹非畉
cat("\nC夹非畉:",C.Sd) #C夹非畉
#祘Α挡