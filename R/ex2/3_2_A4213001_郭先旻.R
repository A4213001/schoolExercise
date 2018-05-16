fibanacciRecursive <-function(x){ #費氏數列(遞迴)
  if(x==2||x==1){  #第一項、第二項為1
    return (1)
  }else{
    return (fibanacciRecursive(x-1)+fibanacciRecursive(x-2)) #遞迴呼叫函式參數為(x-1)及(x-2)將其結果相加
  }                                                          #符合費式數列X項=(x-1)項+(x-2)項
}

cat(fibanacciRecursive(9),"\n")  #使用遞迴函式印出第9項結果

fibanacci<-function(x){ #費氏數列(非遞迴)
  a1=1  #第一項為1
  a2=1  #第二項為1
  if(x==2||x==1){  #第一項、第二項為1
    return (1)
  }
  for (count in c(1:(x-2))) { 
    a3=a1+a2  #後一項等於前2項相加
    a1=a2  #往後一項
    a2=a3  #往後一項
  }
  return (a3)  #回傳結果
}

cat(fibanacci(9),"\n") #使用非遞迴函式印出第9項結果
cat(fibanacci(49)) #使用非遞迴函式印出出第49項結果