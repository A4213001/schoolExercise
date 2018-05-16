
<?php
    $msg = isset($_POST['msg']) ? $_POST['msg']: "";
    $dbhost = 'localhost';
    $dbuser = 'root';
    $dbpass = '1234';
    $dbname = 'company';
    $conn = mysql_connect($dbhost, $dbuser, $dbpass) or die('Error with MySQL connection');

    mysql_query("SET NAMES 'utf8'");
    mysql_select_db($dbname);
    $sql = "SELECT * FROM .$msg";
    $result = mysql_query($sql) or die('MySQL query error');
    
    if ($msg=='food') {
        echo '食物名稱-食物編號<br><br>';
         while($row = mysql_fetch_array($result)){
        echo $row['食物名稱'].'-'.$row['食物編號'] .'<br>';
        }
    } 
    elseif ($msg=='employee'){
        echo '員工編號-飼養員名稱<br><br>';
        while($row = mysql_fetch_array($result)){
        echo $row['員工編號'].'-'.$row['飼養員名稱'] .'<br>';
        }
    }
    else if($msg=='animal'){
        echo '綱-動物編號-動物名稱-員工編號<br><br>';
        while($row = mysql_fetch_array($result)){
        echo $row['綱'].'-'.$row['動物編號'].'-'.$row['動物名稱'].'-'.$row['員工編號'].'<br>';
        }
    }
    else if($msg=='eat'){
        $sql = "SELECT 動物名稱,數量,食物名稱 from animal,food,eat where eat.動物編號=animal.動物編號 AND eat.食物編號=food.食物編號";
        $result = mysql_query($sql) or die('MySQL query error');
        while($row = mysql_fetch_array($result)){
        echo $row['動物名稱'].' 每天吃 '.$row['數量'].' 份 '.$row['食物名稱'].'<br>';
        }
    }
