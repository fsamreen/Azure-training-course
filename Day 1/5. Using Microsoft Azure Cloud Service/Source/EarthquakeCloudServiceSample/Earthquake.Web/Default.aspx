﻿<%@ Page Title="Home Page" Language="C#"  AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="Earthquake.Web.Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html>
   <head>
      <title>Earthquakes</title>
      <meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
      <script type="text/javascript" src="http://code.jquery.com/jquery-latest.js"></script>
      <script type="text/javascript" src="http://ecn.dev.virtualearth.net/mapcontrol/mapcontrol.ashx?v=7.0"></script>
      <script type="text/javascript">

          var map = null;
          var currentcount = 0;
          var lat = 0;
          var lon = 0;
          var offset = new Microsoft.Maps.Point(1, 3);
          var showMessageInterval = null;

          $(function () {
              getMap();
              addPushpins();
          });
          function getMap() {
              map = new Microsoft.Maps.Map(document.getElementById('myMap'), { credentials: 'Av2RFPnAOaHPcE1ww8BYmemHFRYfLeuDdBRgglBlXTLI0AbzU7CVA1hGcIZv-1T-' });
          }

          function addPushpins() {
              //Get data
              var ll = eval(document.getElementById("mapdata").value);
              for (var i = 1; i < ll.length - 1; i++) {

                  //Create Pushpins from usgs for the latest 20 earthquakes
                  var pushpinOptions = { text: ll[i][3].toString(), visible: true, textOffset: offset };
                  var pushpin = new Microsoft.Maps.Pushpin(new Microsoft.Maps.Location(ll[i][1], ll[i][2]), pushpinOptions);
                  var pushpindragstart = Microsoft.Maps.Events.addHandler(pushpin, 'click', startDragDetails);
                  map.entities.push(pushpin);
                  currentcount++;
              }
          }

          //add pushpin click event
          startDragDetails = function (e) {
              lat = e.target.getLocation().latitude;
              lon = e.target.getLocation().longitude;
              $("#webjob").html("<p>Begin to find all larger than 6 degrees earthquakes in the circle with radius 1000 kms and center " + lat + "," + lon + " since year 2000.</p>");
              $("#message").html("");
              $.ajax({
                  type: "GET",
                  url: "../AddJob.aspx?lat=" + lat + "&lon=" + lon,
                  success: function (msg) {
                      $("#webjob").html("<p>Submit a webjob to find 6 degrees earthquakes in the circle with radius 1000 kms and center " + lat + "," + lon + " since year 2000.</p>");
                      var message = $("#message");

                      if (showMessageInterval == null) {
                          message.html("<p>Waiting for the webjob result.</p>");
                          showMessageInterval = setInterval(showMessage, 5000);
                      }
                      else {
                          message.html("<p>We are still waiting for the previous job result, please wait..</p>");
                      }
                  },
                  error: function (XMLHttpRequest, textStatus, errorThrown) {
                      $("#webjob").html("Something wrong to get the earthquakes nearby.");
                  }
              });
          }

          function showMessage() {
              if (lat == 0 || lon == 0) {
                  return false;
              }

              
              $.ajax({
                  type: "GET",
                  url: "../Result.aspx?lat=" + lat + "&lon=" + lon + "&r=" + Math.random(),
                  success: function (msg) {
                      if (msg == "") {
                          return false;
                      }
                      var ll = eval(msg);
                      $("#message").html("There are " + (ll.length - 1).toString() + " big earthquakes happened near " + lat + ", " + lon + ".");
                      removeResultPushpin();

                      for (var i = 1; i < ll.length; i++) {
                          var pushpinOptions = { icon: '../images/pin.png', text: ll[i][3].toString(), visible: true, textOffset: offset };
                          var pushpin = new Microsoft.Maps.Pushpin(new Microsoft.Maps.Location(ll[i][1], ll[i][2]), pushpinOptions);
                          map.entities.push(pushpin);
                      }
                      clearInterval(showMessageInterval);
                      showMessageInterval = null;
                  },
                  error: function (XMLHttpRequest, textStatus, errorThrown) {
                  }
              });
          }

          //remove pushpin
          function removeResultPushpin() {
              var count = map.entities.getLength();
              for (var i = map.entities.getLength() - 1; i >= currentcount ; i--) {
                  var pushpin = map.entities.get(i);
                  if (pushpin instanceof Microsoft.Maps.Pushpin) {
                      map.entities.removeAt(i);
                  };
              }
          }

    </script>
</head>
<body>
    <div id='myMap' style="position: relative; width: 1024px; height: 500px;"></div>   
    <div>
        <input type="hidden" runat="server" id="mapdata" value="" />
        <div id="webjob"></div>
        <div id="message"></div>
    </div>
</body>
</html>
