<?php require("header.php");
session_start();    
mysql_connect("localhost","ss203242430","ss123452123");//連結伺服器
mysql_select_db("health");//選擇資料庫
mysql_query("set names utf8");//以utf8讀取資料
$account=$_POST['acc'];
$password=$_POST['pas'];
$data=mysql_query("SELECT * FROM `user` WHERE `account` = '$account' AND `password` = '$password'");
?>
<body>
    <script>
        var picname = new Array()
        picname[0] = "images/0.png";    picname[1] = "images/1.png";
        picname[2] = "images/2.png";    picname[3] = "images/3.png";
        picname[4] = "images/4.png";    picname[5] = "images/5.png";
        picname[6] = "images/6.png";    picname[7] = "images/7.png";
        picname[8] = "images/8.png";    picname[9] = "images/9.png";

        c1=0;
        n=1000;

        function check(){
            if(document.form1.passwd1.value==""){
                document.getElementById("passwd").className="form-group has-warning";
                document.getElementById("loginBottom").disabled="disabled";
            }
            else if(document.form1.passwd1.value!=c1){
                document.getElementById("passwd").className="form-group has-error";
                document.getElementById("loginBottom").disabled="disabled";
            }
            else{
                document.getElementById("passwd").className="form-group has-success";
                document.getElementById("loginBottom").disabled="";
            }
        }
    </script>
    <div class="container">
        <div class="row">
            <div class="col-md-4 col-md-offset-4">
                <div class="login-panel panel panel-default">
                    <div class="panel-heading">
                        <h3 class="panel-title">請登入</h3>
                    </div>
                    <div class="panel-body">
                        <form role="form" method="post" name="form1" action="loginTorF.php">
                            <fieldset>
                                <div class="form-group">
                                    <input class="form-control" placeholder="帳號" name="acc" id="acc" autofocus>
                                </div>
                                <div class="form-group">
                                    <input type="password" class="form-control" placeholder="密碼" name="pas" id="pas" value="">
                                </div>
                                <script>
                                    for(var i=0;i<4;i++){
                                        var which = Math.floor(Math.random()*10);
                                        c1+=which*n;
                                        n/=10;
                                        document.write("<img src ="+picname[which]+" class='img1'>");
                                    }
                                </script>
                                <br>
                                請輸入上圖的數字
                                <div class="form-group" id="password1">
                                    <div class="form-group" id="passwd">
                                        <input type=text class="form-control" name="passwd1" id="passwd1" onkeyup="check()">
                                    </div>
                                </div>
                                <br>
                                <br>
                                <input type="submit" class="btn btn-lg btn-success btn-block" value="登入" id="loginBottom" disabled="disabled">
                            </fieldset>
                        </form>
                    </div>
                </div>
            </div>
        </div>
    </div>
<?php require("footer.php"); ?>
