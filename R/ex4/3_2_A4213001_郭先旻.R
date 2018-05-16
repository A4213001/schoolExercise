#單人分數總得分
scoreSum<-function(person){
  sum=0;
  for(x in c(1:length(person))){
    if(x%%2==1){ #奇元素為進球數
      if(person[x]>0){
        sum=sum+person[x]*2+1; #必有1顆3分球
      }
    }else{ #偶元素為罰球數
      sum=sum+person[x];
    }
  }
  return (sum);
}

#單人平均得分
scoreAvg<-function(person){
  return (scoreSum(person)/(length(person)/2)); #比賽場次=向量長度/2
}

#團隊總進球數
goalsTotal<-function(team){
  total=0;
  for(x in c(1:length(team[,1]))){
    total=total+sum(team[x,]);
  }
  return(total);
}

#團隊總得分
scoreTotal<-function(team){
  total=0;
  for(x in c(1:length(team[,1]))){
    total=total+scoreSum(team[x,])
  }
  return (total);
}

#團隊中得分最多的球員
mvp<-function(team){
  name<-rownames(team); #將成員名稱存進name向量
  sum<-matrix(0,nrow=length(team[,1]),ncol=length(team[1,])/2); #sum為一個紀錄每個人在每場比賽得分的矩陣
  for(x in c(1:length(team[,1]))){                              #nrow=隊員人數
    z=1;                                                        #ncol=比賽場次
    for(y in c(1:length(team[1,]))){
      if(y%%2==1){
        if(team[x,y]>0){
          sum[x,z]=sum[x,z]+team[x,y]*2+1;
        }
      }else{
        sum[x,z]=sum[x,z]+team[x,y];
        z=z+1;
      }
    }
  }
  ans<-rep(0,times=length(sum[1,])); #ans用來紀錄MVP index的向量，times=比賽場次
  for(x in c(1:length(sum[1,]))){
    ans[x]<-name[which.max(sum[,x])] #將單場得分最多成員的index存進ans
  }
  return (ans);
}

#單場得分中位數
mid<-function(team,session){ #session決定是哪一場比賽
  score<-rep(0,times=length(team[,1])); #score用來記錄這場比賽所有人的得分，times=隊員人數
  for(x in c(1:length(team[,1]))){
    if(team[x,session*2-1]>0){
      score[x]=score[x]+team[x,session*2-1]*2+1;
    }
    score[x]=score[x]+team[x,session*2];
  }
  return (median(score));
}

#單場得分標準差
std<-function(team,session){ #session決定是哪一場比賽
  score<-rep(0,times=length(team[,1])); #score用來記錄這場比賽所有人的得分，times=隊員人數
  for(x in c(1:length(team[,1]))){
    if(team[x,session*2-1]>0){
      score[x]=score[x]+team[x,session*2-1]*2+1;
    }
    score[x]=score[x]+team[x,session*2];
  }
  return (sd(score));
}

#建立單人資料
NBA2016.Lin<- c(6,3,5,0,4,0,4,2,6,4) 
NBA2016.Booker<- c(6,4,6,1,3,0,1,1,2,0) 
NBA2016.Lopez<- c(6,1,3,4,12,4,8,7,4,0) 
NBA2016.Bog<- c(4,0,4,2,4,1,4,8,7,0) 
NBA2016.Kil<- c(2,3,2,3,6,2,9,1,4,2)

#建立團體對資料
team<-rbind(NBA2016.Lin,NBA2016.Booker,NBA2016.Lopez,NBA2016.Bog,NBA2016.Kil);

#第一題結果
cat("(1)\nLin的總得分為:",scoreSum(NBA2016.Lin),"\n");
cat("Booker的總得分為:",scoreSum(NBA2016.Booker),"\n");
cat("Lopez的總得分為:",scoreSum(NBA2016.Lopez),"\n");
cat("Bog的總得分為:",scoreSum(NBA2016.Bog),"\n");
cat("Kil的總得分為:",scoreSum(NBA2016.Kil),"\n\n");

cat("Lin的平均得分為:",scoreAvg(NBA2016.Lin),"\n");
cat("Booker的平均得分為:",scoreAvg(NBA2016.Booker),"\n");
cat("Lopez的平均得分為:",scoreAvg(NBA2016.Lopez),"\n");
cat("Bog的平均得分為:",scoreAvg(NBA2016.Bog),"\n");
cat("Kil的平均得分為:",scoreAvg(NBA2016.Kil),"\n\n");

#第二題結果
cat("(2)\n5場比賽團隊的總進球數為:",goalsTotal(team),"\n");
cat("5場比賽團隊的總得分為:",scoreTotal(team),"\n\n");

#第三題結果
cat("(3)\n每場比賽得分最多的球員分別為:",mvp(team),"\n\n");

#第四題結果
cat("(4)\n第三場比賽中位數為:",mid(team,3),"\n");
cat("第三場比賽標準差為:",std(team,3),"\n");
