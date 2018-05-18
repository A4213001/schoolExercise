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
        document.addEventListener( 'resume', onResume.bind( this ), false );
        
        $('input').change(function () {
            $('#ans').val(total());
        });
    };
    function total() {
        var price = $('#a').val() * 25 + $('#b').val() * 20 + $('#c').val() * 35;
        if ($('#discount').is(':checked')) {
            price = price * 0.9;
        }
        return price;
    }

    function onPause() {
        // TODO: 這個應用程式已暫停。請在這裡儲存應用程式狀態。
    };

    function onResume() {
        // TODO: 這個應用程式已重新啟動。請在這裡還原應用程式狀態。
    };
} )();