<?php 
// connect to my sql
$d =new MySQLi("localhost","root","1234","company");
if(mysqli_connect_errno()){die("Connect failed:".mysqli_connect_error());}
// Connect to server and select databse.


// retrieve all variables



// insert information to database
$a1 = isset($_POST['a1']) ? $_POST['a1']: "";
$a2 = isset($_POST['a2']) ? $_POST['a2']: "";
$a3 = isset($_POST['a3']) ? $_POST['a3']: "";
$a4 = isset($_POST['a4']) ? $_POST['a4']: "";
$a5 = isset($_POST['a5']) ? $_POST['a5']: "";
$a6 = isset($_POST['a6']) ? $_POST['a6']: "";
$a7 = isset($_POST['a7']) ? $_POST['a7']: "";
$a8 = isset($_POST['a8']) ? $_POST['a8']: "";
$a9 = isset($_POST['a9']) ? $_POST['a9']: "";
$a10 = isset($_POST['a10']) ? $_POST['a10']: "";
$a11 = isset($_POST['a11']) ? $_POST['a11']: "";

if($a1!="" AND $a2!=""){
	$q = $d->prepare("INSERT INTO `food` (`食物名稱`, `食物編號`) VALUES (?,?);");
    $q->bind_Param("si", $a1,$a2);
    $q->execute();
    echo '新增成功';
}
 
 elseif($a3!="" AND $a4!=""){ 
	$q = $d->prepare("INSERT INTO `employee` (`員工編號`, `飼養員名稱`) VALUES (?,?);");
    $q->bind_Param("is", $a3,$a4);
    $q->execute();
    echo '新增成功';
}
   
elseif($a5!="" AND $a6!="" AND $a7!="" AND $a8!=""){ 
	$q = $d->prepare("INSERT INTO `animal` (`綱`, `動物編號`,`動物名稱`,`員工編號`) VALUES (?,?,?,?);");
    $q->bind_Param("sisi", $a5,$a6,$a7,$a8);
    $q->execute();
    echo '新增成功';
}
elseif($a9!="" AND $a10!="" AND $a11!=""){
    $q = $d->prepare("INSERT INTO `eat` (`數量`, `動物編號`,`食物編號`) VALUES (?,?,?);");
    $q->bind_Param("iii", $a9,$a10,$a11);
    $q->execute();
    echo '新增成功';
}
else{
    echo '新增失敗';
}



