<?php require("header.php"); 
mysql_connect("localhost","ss203242430","ss123452123");//連結伺服器
mysql_select_db("health");//選擇資料庫
mysql_query("set names utf8");//以utf8讀取資料
if(isset($account)){
    $account=$_POST['acc'];
    $password=$_POST['pas'];
    $name=$_POST['name'];
}
?>
<body>
    <div class="container">
        <div class="row">
            <div class="col-md-4 col-md-offset-4">
                <div class="login-panel panel panel-default">
                    <div class="panel-heading">
                        <h3 class="panel-title">創建帳戶</h3>
                    </div>
                    <div class="panel-body">
                        <form role="form" method="post">
                            <fieldset>
                                <div class="form-group">
                                    <input class="form-control" placeholder="輸入帳號" name="acc" id="acc" autofocus required>
                                </div>
                                <div class="form-group">
                                    <input class="form-control" placeholder="輸入密碼" name="pas" id="pas" value="" required>
                                </div>
                                <div class="form-group">
                                    <input class="form-control" placeholder="輸入名稱" name="name" id="name" value="" required>
                                </div>
                                <input type="submit" class="btn btn-lg btn-success btn-block" value="創建">
                                <?php
                                if(isset($_POST['account'])){
                                    $data=mysql_query("SELECT * FROM `user` WHERE `account` = '$account'");
                                    if(mysql_num_rows($data)==0){
                                        $data=mysql_query("SELECT * FROM `user` WHERE `name` = '$name'");
                                        if(mysql_num_rows($data)==0){
                                            mysql_query("INSERT INTO `user` (`account`,`password`,`name`) VALUES ('$account','$password','$name')");
                                            header("location:index.php");
                                        }
                                        else
                                            echo "暱稱重複";
                                    }
                                    else
                                        echo "帳號重複";
                                }
                                ?>
                            </fieldset>
                        </form>
                    </div>
                </div>
            </div>
        </div>
    </div>
<?php require("footer.php"); ?>