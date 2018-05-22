// 如需空白範本的簡介，請參閱下列文件: 
// http://go.microsoft.com/fwlink/?LinkID=397704
// 若要針對在 Ripple 或 Android 裝置/模擬器上載入的頁面，偵錯程式碼: 請啟動您的應用程式，設定中斷點，
// 然後在 JavaScript 主控台中執行 "window.location.reload()"。
(function () {
    "use strict";

    document.addEventListener( 'deviceready', onDeviceReady.bind( this ), false );

    function onDeviceReady() {
        $.ajax({
            url: "https://apiservice.mol.gov.tw/OdService/download/A17000000J-020066-5aV",
            type: "GET",
            dataType: "json",
            success: function (data) {
                for (var i = 0; i < data.length; i++) {
                    $("#select_career").append("<option value='" + i + "'>" + data[i]["大職業別"] + "</option>");
                }
            },
            timeout: 6000,
            error: function () {
                alert("無法連線");
            }
        });

        $.ajax({
            url: "https://apiservice.mol.gov.tw/OdService/download/A17000000J-020066-5aV",
            type: "GET",
            dataType: "json",
            success: function (data) {
                data = data.sort(function (a, b) {
                    return (b["經常性薪資-薪資"] - a["經常性薪資-薪資"]);
                });
                var html = '';
                for (var i = 0; i < data.length; i++) {
                    html += '<tr>'
                        + '<td>' + (i + 1) + '</td>'
                        + '<td>' + data[i]["大職業別"] + '</td>'
                        + '<td>' + data[i]["經常性薪資-薪資"] + '</td>'
                        + '</tr>';
                }
                $('#results').html(html);
            },
            timeout: 6000,
        })
    }
    $("#searchButton").click(function () {
        $.ajax({
            url: "https://apiservice.mol.gov.tw/OdService/download/A17000000J-020066-5aV",
            type: "GET",
            dataType: "json",
            success: function (data) {

                $("#seeData").empty();
                if ($("#select_career").val() == "-1" || $("#select_education").val() == "-1") {
                    $("#seeData").append("<p align='center'>請選擇</p>");
                }
                else {
                    $("#seeData").append("<h1 align='center'>薪資：" + data[$("#select_career").val()][$("#select_education").val()] + "</h1>");
                }
            },
            error: function () {
                alert("無法連線");
            }
        })
    })

    $("#outButton_1").click(function () {
        $("#outDiv").empty();
        $("#outDiv").append("<p align='center'><a href='https://salary.tw/map' data-rel='external'>前往</a></p>");
    })

    $("#outButton_2").click(function () {
        $("#outDiv").empty();
        $("#outDiv").append("<p align='center'><a href='http://www.ursalary0.com/'>前往</a></p>");
    })
} )();