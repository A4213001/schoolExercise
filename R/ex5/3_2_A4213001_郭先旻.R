library("XML");
nba="http://scores.espn.com/nba/boxscore?gameId=400900595";
datamy=readHTMLTable(nba,stringsAsFactors=FALSE);
#FG 總投球數0-5(投5進0,不包含罰球)
#3PT 3分球0-1(投1進0)
#FT 罰球

#取得分數
getScore<-function(datamy,teamNum,personNum){
  person=numeric(3); #此向量存3分球進球數、2分球進球數、罰球進球數
  #取得3分球進球數
  person[1]=strtoi(substr(data.frame(datamy[teamNum+1])[personNum,4],1,1));
  #取得2分球進球數
  person[2]=strtoi(substr(data.frame(datamy[teamNum+1])[personNum,3],1,1))-strtoi(substr(data.frame(datamy[teamNum+1])[personNum,4],1,1));
  #取得罰球進球數
  person[3]=strtoi(substr(data.frame(datamy[teamNum+1])[personNum,5],1,1));
  return (person);
}

#單人總得分
scoreSum<-function(person){
  sum=person[1]*3+person[2]*2+person[3];
  return (sum);
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
  person=numeric(length(team[,1]));
  for(x in c(1:length(team[,1]))){
    person[x]=scoreSum(team[x,]);
  }
  ans<-name[which.max(person)] #將單場得分最多成員的index存進ans
  return (ans);
}

#單場得分中位數
mid<-function(team){
  score<-numeric(length(team[,1])); #score用來記錄這場比賽所有人的得分，times=隊員人數
  for(x in c(1:length(team[,1]))){
    score[x]=scoreSum(team[x,]);
  }
  return (median(score));
}

#單場得分標準差
std<-function(team){
  score<-numeric(length(team[,1])); #score用來記錄這場比賽所有人的得分，times=隊員人數
  for(x in c(1:length(team[,1]))){
    score[x]=scoreSum(team[x,]);
  }
  return (sd(score));
}

#建立單人資料
LeuerJ<-getScore(datamy,1,1);
JohnsonS<-getScore(datamy,1,2);
DrummondA<-getScore(datamy,1,3);
SmithI<-getScore(datamy,1,4);
Caldwell_PopeK<-getScore(datamy,1,5);

#建立團體對資料
team<-rbind(LeuerJ,JohnsonS,DrummondA,SmithI,Caldwell_PopeK);

#第一題結果
cat("(1)\nLeuerJ的總得分為:",scoreSum(LeuerJ),"\n");
cat("JohnsonS的總得分為:",scoreSum(JohnsonS),"\n");
cat("DrummondA的總得分為:",scoreSum(DrummondA),"\n");
cat("SmithI的總得分為:",scoreSum(SmithI),"\n");
cat("Caldwell_PopeK的總得分為:",scoreSum(Caldwell_PopeK),"\n\n");

#第二題結果
cat("(2)\n團隊的總進球數為:",goalsTotal(team),"\n");
cat("團隊的總得分為:",scoreTotal(team),"\n\n");

#第三題結果
cat("(3)\n得分最多的球員分別為:",mvp(team),"\n\n");

#第四題結果
cat("(4)\n中位數為:",mid(team),"\n");
cat("標準差為:",std(team),"\n");