// 如需空白範本的簡介，請參閱下列文件: 
// http://go.microsoft.com/fwlink/?LinkID=397704
// 若要針對在 Ripple 或 Android 裝置/模擬器上載入的頁面，偵錯程式碼: 請啟動您的應用程式，設定中斷點，
// 然後在 JavaScript 主控台中執行 "window.location.reload()"。
(function () {
    "use strict";

    document.addEventListener( 'deviceready', onDeviceReady.bind( this ), false );

    function onDeviceReady() {
        // 處理 Cordova 暫停與繼續事件
        document.addEventListener( 'pause', onPause.bind( this ), false );
        document.addEventListener('resume', onResume.bind(this), false);

        $('#search').on('click', function () {
            var stock = $('#stocks').val()
            checkConnection(); // 檢查網路連線
            $.mobile.loading("show");
            $.ajax({
                type: "GET",
                url: "http://hq.sinajs.cn/list=" + stock,
                dataType: "text",
                success: function (data) {

                    var info = data.split("\"");
                    var elements = info[1].split(",")
                    $("#resultList").empty();
                    $("#resultList").append("<li>股票名稱: " + elements[0] + "</li>");
                    $("#resultList").append("<li>今日開盤價: " + elements[1] + "</li>");
                    $("#resultList").append("<li>昨日收盤價: " + elements[2] + "</li>");
                    $("#resultList").append("<li>目前成交價: " + elements[3] + "</li>");
                    $("#resultList").listview("refresh"); // 更新

                },
                timeout: 6000, // Timeout時間6秒鐘
                error: function() { // 失敗
                    $.mobile.loading("hide");
                    alert("錯誤: 無法完成Ajax請求..");
                }
            });
            $.mobile.loading("hide");
        });
       
    };
  

    function checkConnection() {
        var networkState = navigator.network.connection.type;
        if (networkState === Connection.NONE) {
            alert("沒有網路連線...");
            navigator.app.exitApp(); // 離開應用程式
        }
    }

    function onPause() {
        // TODO: 這個應用程式已暫停。請在這裡儲存應用程式狀態。
    };

    function onResume() {
        // TODO: 這個應用程式已重新啟動。請在這裡還原應用程式狀態。
    };
} )();