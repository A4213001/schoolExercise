<?php require("header.php");

?>
<body>
<div class="container">
  <div class="row">
    <div class="col-md-4 col-md-offset-4">
    <div class="login-panel panel panel-default">
      <div class="panel-heading">
      <h3 class="panel-title">更改會員資料</h3>
      </div>
      <div class="panel-body">
      <form role="form" method="post">
        <fieldset>
        <div class="form-group">
          <input class="form-control" placeholder="輸入新密碼" name="newPas" id="newPas" autofocus>
        </div>
        <div class="form-group">
          <input class="form-control" placeholder="輸入新名稱" name="newName" id="newName">
        </div>
        <input type="submit" class="btn btn-lg btn-success btn-block" value="更改">
        </fieldset>
      </form>
      </div>
    </div>
    </div>
  </div>
  </div>
<?php require("footer.php"); ?>
