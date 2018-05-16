#建立成績資料建為有序因子的資料
set.seed(1)
Class.Score <- data.frame(Numbers = runif( 12,0,100))
Class.Score$Grades <- cut( Class.Score$Numbers,
breaks = c( 0, seq(60,100,by=10) ),
labels=c("F","D","C","B","A"),ordered=TRUE)
cat("(1)全部學生成績 : ","\n\n")
print(Class.Score)
cat("(2)成績為B以上的學生有 : ")
cat(which(Class.Score$Grades>"B"),"\n\n")
cat("(3)A~F成績分布 : ")
print(table(Class.Score$Grades))
barplot(table(Class.Score$Grades))