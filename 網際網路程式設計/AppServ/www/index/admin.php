<?php 
session_start();
if($_SESSION['v']!="yes")
 header("location:login.php");

mysql_connect("localhost","ss203242430","ss123452123");//連結伺服器
mysql_select_db("guest");//選擇資料庫
mysql_query("set names utf8");//以utf8讀取資料
$data=mysql_query('select * from guest order by guestTime desc')//讓資料由最新呈現到最舊
?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.4/css/bootstrap.min.css">
<title>管理員頁面</title>

<style>
.top{
 margin:auto;
 width:60vw;
 text-align:center;
 padding:30px 0 0 0;
 font-family:微軟正黑體;
 font-size:18px;
}
/*.nav{
 background-color:#339;
 padding: 10px 0px;
 }*/
.nav a {
  color: #5a5a5a;
  font-size: 11px;
  font-weight: bold;
  text-transform: uppercase;
}

.nav li {
  display: inline;
}
.CSSTableGenerator {
 margin:auto;
 padding:0px;
 width:60vw;
 }
 .CSSTableGenerator table{
    border-collapse: collapse;
    border-spacing: 0;
 width:100%;
 height:100%;
 margin:0px;padding:0px;
}.CSSTableGenerator tr:last-child td:last-child {
 -moz-border-radius-bottomright:9px;
 -webkit-border-bottom-right-radius:9px;
 border-bottom-right-radius:9px;
}
.CSSTableGenerator table tr:first-child td:first-child {
 -moz-border-radius-topleft:9px;
 -webkit-border-top-left-radius:9px;
 border-top-left-radius:9px;
}
.CSSTableGenerator table tr:first-child td:last-child {
 -moz-border-radius-topright:9px;
 -webkit-border-top-right-radius:9px;
 border-top-right-radius:9px;
 
}.CSSTableGenerator tr:last-child td:first-child{
 -moz-border-radius-bottomleft:9px;
 -webkit-border-bottom-left-radius:9px;
 border-bottom-left-radius:9px;
 
}.CSSTableGenerator a{
 background-color:#005fbf;
 color:white;
}

}.CSSTableGenerator tr:hover td{
 background-color:#005fbf;
 color:white;
}
.CSSTableGenerator td{
 vertical-align:middle;
 background-color:#e5e5e5;
 border:1px solid #999999;
 border-width:0px 1px 1px 0px;
 text-align:left;
 padding:8px;
 font-size:16px;
 font-family:Arial,微軟正黑體;
 font-weight:normal;
 color:#000000;
}.CSSTableGenerator tr:last-child td{
 border-width:0px 1px 0px 0px;
}.CSSTableGenerator tr td:last-child{
 border-width:0px 0px 1px 0px;
}.CSSTableGenerator tr:last-child td:last-child{
 border-width:0px 0px 0px 0px;
}
.CSSTableGenerator tr:first-child td{
  background:-o-linear-gradient(bottom, #005fbf 5%, #005fbf 100%); 
  background:-webkit-gradient( linear, left top, left bottom, color-stop(0.05, #005fbf), color-stop(1, #005fbf) );
  background:-moz-linear-gradient( center top, #005fbf 5%, #005fbf 100% );
  filter:progid:DXImageTransform.Microsoft.gradient(startColorstr="#005fbf", endColorstr="#005fbf"); 
  background: -o-linear-gradient(top,#005fbf,005fbf);
  background-color:#005fbf;
  text-align:center;
  font-size:20px;
  font-family:Arial, 微軟正黑體;
  font-weight:bold;
  color:#ffffff;
}
.CSSTableGenerator tr:first-child:hover td{
  background:-o-linear-gradient(bottom, #005fbf 5%, #005fbf 100%); 
  background:-webkit-gradient( linear, left top, left bottom, color-stop(0.05, #005fbf), color-stop(1, #005fbf) );
  background:-moz-linear-gradient( center top, #005fbf 5%, #005fbf 100% );
  filter:progid:DXImageTransform.Microsoft.gradient(startColorstr="#005fbf", endColorstr="#005fbf"); 
  background: -o-linear-gradient(top,#005fbf,005fbf);
  background-color:#005fbf;
}

 
</style>
</head>

<body>
<div class="nav nav-tabs">
  <div class="container">
    <ul class="pull-left nav nav-tabs">
      <li><a href="../">Home</a></li>
    </ul>
    <ul class="pull-right nav nav-tabs">
      <li><a href="login.php">Log In</a></li>
    </ul>
  </div>
</div>
<div class="top">
 <h3>管理員頁面</h3>
</div>
      
<p>&nbsp;</p>
<p>&nbsp;</p>

<?php
for($i=1;$i<=mysql_num_rows($data);$i++){
 $rs=mysql_fetch_assoc($data);
?>
<div class="container">
  <div class="CSSTableGenerator">
      <table align="center">
            <tr>
              <td><?php echo $rs['guestSubject']?></td>
              <td><a href="reply.php?id=<?php echo $rs['guestID'] ?>">回覆</a>
              <a href="delete.php?id=<?php echo $rs['guestID']?>"> 刪除</a></td>
            </tr>
            <tr>
              <td width="25%">暱稱</td>
              <td width="75%"><?php echo $rs['guestName']?></td>
            </tr>
            <tr>
              <td>信箱</td>
              <td><?php echo $rs['guestEmail']?></td>
            </tr>
            <tr>
              <td>性別</td>
              <td><?php echo $rs['guestGender']?></td>
            </tr>
            <tr>
              <td>留言內容</td>
              <td><?php echo $rs['guestContent']?></td>
            </tr>
            <?php if($rs['guestReply']!=""){?>
            <tr>
              <td colspan="2" style="background:#999; color:white; text-align:center">站長回覆</td>
            </tr>
            <tr>
              <td colspan="2"><?php echo $rs['guestReply']?></td>
            </tr>
            <?php } ?>
        </table>
 </div>
</div>
<br />
<?php } ?>


</body>
</html>