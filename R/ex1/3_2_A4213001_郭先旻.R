#第一題開始
diceRange=1:6 #骰子點數範圍1~6
diceAry=sample(diceRange,size=3,replace=TRUE) #範圍1~6 擲3次骰子 結果可以重覆
sum.dice=sum(diceAry)#三次骰子加總
cat("第一題結果:三次骰子和為",sum.dice,"\n")#印出結果
#第一題結束

#第二題開始
if(sum.dice>14){ #如果總和>14
  cat("第二題結果:你好厲害","\n")
}else{ #總和!>14
  cat("第二題結果:再加油","\n")
}
#第二題結束

#第三題開始
sumAry=seq(0,0,length=9)#建出sumAry陣列
for(x in 1:9){ #迴圈跑9次
  diceAry=sample(diceRange,size=3,replace=TRUE) #範圍1~6 擲3次骰子 結果可以重覆
  sumAry[x]=sum(diceAry)#將加總結果存入陣列
  if(sumAry[x]>14||sumAry<6){ #如果任一次加總>14或<6
    break #跳出迴圈
  }
}
if(x==9){ #如果迴圈執行9次
  cat("下次肯定行")
}else{
  cat("第三題結果:次數為",x,"\n")
}
#第三題結束