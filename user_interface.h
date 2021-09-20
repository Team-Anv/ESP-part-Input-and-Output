const char UserInterface[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>ANV Group</title>
        <!------------------->

        <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.1/dist/css/bootstrap.min.css">
        <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap-icons@1.5.0/font/bootstrap-icons.css">
        <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/5.15.3/css/all.min.css"/>

        <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
        <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.1/dist/js/bootstrap.bundle.min.js" integrity="sha384-gtEjrD/SeCtmISkJkNUaaKMoLD0//ElJ19smozuHV6z3Iehds+3Ulb9Bn9Plx0x4" crossorigin="anonymous"></script>
        <script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.9.2/dist/umd/popper.min.js" integrity="sha384-IQsoLXl5PILFhosVNubq5LC7Qb9DXgDA9i+tQ8Zj3iwWAwPtgFTxbJ8NT4GN1R8p" crossorigin="anonymous"></script>
        <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.1/dist/js/bootstrap.min.js" integrity="sha384-Atwg2Pkwv9vp0ygtn1JAojH0nYbwNJLPhwyoVbhoPwBhjQPR5VtM2+xf0Uwh9KtT" crossorigin="anonymous"></script>
        <script src="https://cdnjs.cloudflare.com/ajax/libs/i18next/1.11.1/i18next.min.js"></script>

        <style>
          @media screen {
html, body{
    width: 100%;
    height: 100%;
    font-family: sans-serif;
    font-size: 17px;
    color: #222;
    overflow-y:auto;
    overflow-x:hidden;
}

.navbar{
    background-color: #0056a6 !important;
}
.navbar ul {
    margin-left: 0;
}
.navbar li a {
    color: #fff !important;
}
.navbar li a:hover {
    color: #ff0 !important;
}
.content_remove {
    height: 600px;
}
.iframe_x {
    height: 600px;
    width: 100%;
}
.footer {
    position: absolute;
    background: url(/footer); 
    width: 100%;  
    height: 120px; 
    text-align: center; 
    color: #fff; 
    font-family: 'RobotoCondensed-Light'; 
    font-size: 15px;
    border-top: 5px solid #333;
    font-weight: bold;
    
}
.remote_x {
    margin: 50px;
}
.element_x {
   
    padding: 10px;
}
.container-fluid {
    width: 100%;
    margin-top: 50px;
}
.row {
    --bs-gutter-x: 0;
}
.title_e {
    background-color: blue;
    color: white;
}
.footer_e {
    background-color: blue;
    color: white; 
}
.btn_e {
    text-align: center;
    background-color: rgb(2, 10, 17);
    border: 1px solid white; /* Remove borders */
    cursor: pointer; /* Mouse pointer on hover */
    margin-top: 1px;
    margin-bottom: 1px;
}
.btn {
     /* Blue background */
    color: white; /* White text */
    font-size: 10px; /* Set a font size */
    border-radius: 0;   
  }
  
  /* Darker background on mouse-over */
  .btn_e:hover {
    background-color: #ff0;
  }
  .name_e {
      text-decoration-line: underline;
      margin-left: 2px;
  }
  .btn_on {
    background-color: rgb(57, 107, 151); /* Blue background */
    border: none; /* Remove borders */
    color: white; /* White text */
    padding: 10px; /* Some padding */
    font-size: 15px; /* Set a font size */
    cursor: pointer; /* Mouse pointer on hover */
    border-radius: 0;
    text-align: center;
    height: 50px;
  }
  .btn_on:hover {
    background-color: #ff0;
  }
  .btn_off {
    background-color: black; /* Blue background */
    border: none; /* Remove borders */
    color: white; /* White text */
    padding: 10px; /* Some padding */
    font-size: 15px; /* Set a font size */
    cursor: pointer; /* Mouse pointer on hover */
    border-radius: 0;
    text-align: center;
    height: 50px;
    margin-top: 5px;
  }
  .btn_off:hover {
    background-color: #ff0;
  }
  .footer_e_x {
      width: 50%;
  }

     
 }
        </style>
    </head>

    <body onload="Start()">
        <!--navigation-->
        <nav class="navbar navbar-expand-lg navbar-light bg-light">
            <a class="navbar-brand" href="#" style="margin-left: 50px;">
                <img src="/logo_anvgroup">
            </a>
          
            <div class="xnav_ngang" >
              <ul class="navbar-nav mr-auto">
                <li class="nav-item active" style="margin-left: 15px; margin-right: 15px;">
                  <!-- <a class="nav-link" href="#" target="iframe_a">Home</a> -->
                </li>
                <li class="nav-item">
                  
          <a class="nav-link" href="/api/system/config/pin"  target="iframe_a" style="margin-left: 15px; margin-right: 15px;">System</a>
                </li>
                <li class="nav-link">
                     <a class="nav-link" href="/api/login" style="margin-left: 15px; margin-right: 15px;">LogOut</a>
                  </li>
              </ul>
            </div>
        </nav>
        <div class="content_remove">
          <div class="container-fluid padding" style="margin-top: 50px;">
            <div class="row">
                <div class="col-md-2 col-sm-1 col-xs-1"></div>
        
        <!-- phan khung Pin No.1 -->
                <div id="id_pin1_Out" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;"><span id="name_pin1" style="margin-left: 5px;">Light</span> </div>
                 <div class="col-md-6 col-sm-12 col-xs-12" style="text-align: right;"><span id="type_pin1"></span> </div>
                            </div>
                        </div>
        
                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-8 col-sm-12 col-xs-12" style="text-align: center; margin-top: 10px;">
                                    <img id="id_img_on_off" src="/light_off" alt="" width="100px" height="100px">
                                </div>
                                <div class="col-md-4 col-sm-12 col-xs-12" style="padding: 5px;">
                                    <div class="btn_on col-md-12 col-sm-12 col-xs-12">
                                        <button id="PIN1_ON" onclick="TURN_ON_PIN1()" type="button" class="btn">ON</i></button>      
                                    </div>
                                    <div class="btn_off col-md-12 col-sm-12 col-xs-12">
                                        <button id="PIN1_OFF" onclick="TURN_OFF_PIN1()" type="button" class="btn">OFF</i></button> 
                                    </div>  
                                </div>   
                            </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="respondP1V1" style="margin-left: 5px; color:#000000"></p></div> <!-- wating o day nhe -->
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="respondP1V2" style="margin-left: 5px; color:#000000">OFF</p></div>
                            </div>
                        </div>
                    </div>
                </div>

         <div id="id_pin1_Int" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;"><span style="margin-left: 5px;">Temp</span> </div>
                <div class="footer_e_x col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;height: 32px;"><p id="Tempnotify" style="text-align: right;color:#cccccc">Activate</p></div>
                            </div>
              
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="text-align: center; margin-top: 10px;">
                                    <img id="idtemp" src="/temp" alt="" width="100px" height="100px">
                                </div>
                <div class="row col-md-6 col-sm-14 col-xs-12">
                  <div class="footer_e_x col-md-3 col-sm-10 col-xs-10" style="margin-top: 50px; height: 32px;"><p id="ptemp" style=" margin-left:5px; color:#ff0000;">20.32</p></div> <!-- wating o day nhe -->
                  <div class="footer_e_x col-md-3 col-sm-10 col-xs-10" style="margin-top:50px; height: 32px;"><p style="color:#ff0000;">&deg;C</p></div>
                </div>
                            </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="Int_respondP1V1"><span style="margin-left: 5px; color:#000000"></span></p></div> <!-- wating o day nhe -->
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="Int_respondP1V2" style="margin-left: 5px; color:#000000"></p></div>
                            </div>
                        </div>
                    </div>
                </div> 
        
        <!-- khung Pin No 2  -->
                <div id="id_pin2_Out" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;"><span id="name_pin2" style="margin-left: 5px;">Fan</span> </div>
                <div class="col-md-6 col-sm-12 col-xs-12" style="text-align: right;"><span id="type_pin2"></span> </div>
                                
                            </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-8 col-sm-12 col-xs-12" style="text-align: center; margin-top: 10px;">
                                    <img id="id_img_on_off_gpio1" src="/light_off" alt="" width="100px" height="100px">
                                </div>
                                <div class="col-md-4 col-sm-12 col-xs-12" style="padding: 5px;">
                                    <div class="btn_on col-md-12 col-sm-12 col-xs-12">
                                        <button id="GPIO1_ON_WB" onclick="TURN_ON_PIN2()" type="button" class="btn">ON</i></button>      
                                    </div>
                                    <div class="btn_off col-md-12 col-sm-12 col-xs-12">
                                        <button id="GPIO1_OFF_WB" onclick="TURN_OFF_PIN2()" type="button" class="btn">OFF</i></button> 
                                    </div>  
                                </div>   
                            </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="respondP2V1" style="margin-left: 5px;color:#000000"></p></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="respondP2V2" style="margin-left: 5px;color:#000000">OFF</p></div>
                            </div>
                        </div>
                    </div>
                </div> 
        
        <div id="id_pin2_Int" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;"><p id="name_pin2"style="margin-left: 5px;">Smoke 1</p> </div>
                <div class="footer_e_x col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;height: 32px;"><p id="No2notify" style="text-align: right;color:#cccccc">Activate</p></div>
                
                            </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="text-align: center; margin-top: 10px;">
                                    <img id="id_img_pin2" src="/smoke" alt="" width="100px" height="100px">
                                </div>
                                <div class="col-md-6 col-sm-12 col-xs-12" style="padding: 5px;">
                                    <div class="btn_on col-md-12 col-sm-12 col-xs-12">
                                        <button id="GPIO1_ON_WB" onclick="INT_TURN_ON_PIN2()" type="button" class="btn">Alarm</button>      
                                    </div>
                                    <div class="btn_off col-md-12 col-sm-12 col-xs-12">
                                        <button id="GPIO1_OFF_WB" onclick="INT_TURN_OFF_PIN2()" type="button" class="btn">Disalarm</button> 
                                    </div>  
                                </div>   
                            </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="Int_respondP2V1"><span style="margin-left: 5px;color:#000000"></span></p></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="Int_respondP2V2" style="margin-left: 5px;color:#000000"></p></div>
                            </div>
                        </div>
                    </div>
                </div> 
        <!-- khung Pin No 3 -->
                <div id="id_pin3_Out" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;"><span style="margin-left: 5px;">Lamp</span> </div>
                                <div class="col-md-6 col-sm-12 col-xs-12" style="text-align: right;"><span id="type_pin3"></span> </div>
                            </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-8 col-sm-12 col-xs-12" style="text-align: center; margin-top: 10px;">
                                    <img id="id_img_on_off_Pin3" src="/light_off" alt="" width="100px" height="100px">
                                </div>
                                <div class="col-md-4 col-sm-12 col-xs-12" style="padding: 5px;">
                                    <div class="btn_on col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin3_ON_WB" onclick="TURN_ON_PIN3()" type="button" class="btn">ON</i></button>      
                                    </div>
                                    <div class="btn_off col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin3_OFF_WB" onclick="TURN_OFF_PIN3()" type="button" class="btn">OFF</i></button> 
                                    </div>  
                                </div>   
                            </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="respondP3V1"><span style="margin-left: 5px;color:#000000"></span></p></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="respondP3V2" style="margin-left: 5px;color:#000000">OFF</p></div>
                            </div>
                        </div>
                    </div>
                </div>
        
        <div id="id_pin3_Int" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;"><span style="margin-left: 5px;">Smoke 2</span> </div>
                <div class="footer_e_x col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;height: 32px;"><p id="No3notify" style="text-align: right;color:#cccccc">Activate</p></div>
                                
                            </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="text-align: center; margin-top: 10px;">
                                    <img id="id_img_pin3" src="/smoke" alt="" width="100px" height="100px">
                                </div>
                                <div class="col-md-6 col-sm-12 col-xs-12" style="padding: 5px;">
                                    <div class="btn_on col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin3_ON_WB" onclick="INT_TURN_ON_PIN3()" type="button" class="btn">Alarm</i></button>      
                                    </div>
                                    <div class="btn_off col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin3_OFF_WB" onclick="INT_TURN_OFF_PIN3()" type="button" class="btn">Disalarm</i></button> 
                                    </div>  
                                </div>   
                            </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="Int_respondP3V1"><span style="margin-left: 5px;color:#000000"></span></p></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="Int_respondP3V2" style="margin-left: 5px;color:#000000"></p></div>
                            </div>
                        </div>
                    </div>
                </div> 
        
        <!-- khung Pin 4 -->
        
                <div id="id_pin4_Out"class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;"><span style="margin-left: 5px;">Lamp</span> </div>
                                <div class="col-md-6 col-sm-12 col-xs-12" style="text-align: right;"><span id="type_pin4"></span> </div>
                            </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-8 col-sm-12 col-xs-12" style="text-align: center; margin-top: 10px;">
                                    <img id="id_img_on_off_Pin4" src="/light_off" alt="" width="100px" height="100px">
                                </div>
                                <div class="col-md-4 col-sm-12 col-xs-12" style="padding: 5px;">
                                    <div class="btn_on col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin4_ON_WB" onclick="TURN_ON_PIN4()" type="button" class="btn">ON</i></button>      
                                    </div>
                                    <div class="btn_off col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin4_OFF_WB" onclick="TURN_OFF_PIN4()" type="button" class="btn">OFF</i></button> 
                                    </div>  
                                </div>   
                            </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="respondP4V1"><span style="margin-left: 5px;color:#000000"></span></p></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="respondP4V2" style="margin-left: 5px;color:#000000">OFF</p></div>
                            </div>
                        </div>
                    </div>
                </div> 
        
        <div id="id_pin4_Int" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;"><span style="margin-left: 5px;">Smoke 3</span> </div>
                <div class="footer_e_x col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;height: 32px;"><p id="No4notify" style="text-align: right;color:#cccccc">Activate</p></div>
         
                            </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="text-align: center; margin-top: 10px;">
                                    <img id="id_img_pin4" src="/smoke" alt="" width="100px" height="100px">
                                </div>
                                <div class="col-md-6 col-sm-12 col-xs-12" style="padding: 5px;">
                                    <div class="btn_on col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin4_ON_WB" onclick="INT_TURN_ON_PIN4()" type="button" class="btn">Alarm</i></button>      
                                    </div>
                                    <div class="btn_off col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin4_OFF_WB" onclick="INT_TURN_OFF_PIN4()" type="button" class="btn">Disalarm</i></button> 
                                    </div>  
                                </div>   
                            </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="Int_respondP4V1"><span style="margin-left: 5px;color:#000000"></span></p></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="Int_respondP4V2" style="margin-left: 5px;color:#000000"></p></div>
                            </div>
                        </div>
                    </div>
        </div> 
                <div class="col-md-2 col-sm-1 col-xs-1"></div> 
            </div>
        </div> 
    
    
        <div class="container-fluid padding" style="margin-top: 50px;">
            <div class="row">
                <div class="col-md-2 col-sm-1 col-xs-1"></div>
        <!-- Phan khung 5 -->
        
                <div id="id_pin5_Out" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;"><span style="margin-left: 5px;">Light</span> </div>
                <div class="col-md-6 col-sm-12 col-xs-12" style="text-align: right;"><span id="type_pin5"></span> </div>
                            </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-8 col-sm-12 col-xs-12" style="text-align: center; margin-top: 10px;">
                                    <img id="id_img_on_off_Pin5" src="/light_off" alt="" width="100px" height="100px">
                                </div>
                                <div class="col-md-4 col-sm-12 col-xs-12" style="padding: 5px;">
                                    <div class="btn_on col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin5_ON_WB" onclick="TURN_ON_PIN5()" type="button" class="btn">ON</i></button>      
                                    </div>
                                    <div class="btn_off col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin5_OFF_WB" onclick="TURN_OFF_PIN5()" type="button" class="btn">OFF</i></button> 
                                    </div>  
                                </div>   
                            </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="respondP5V1"><span style="margin-left: 5px;color:#000000"></span></p></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="respondP5V2" style="margin-left: 5px;color:#000000">OFF</p></div>
                            </div>
                        </div>
                    </div>
                </div> 
        
         <div id="id_pin5_Int" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;"><span style="margin-left: 5px;">Moverment</span> </div>
                                <div class="footer_e_x col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;height: 32px;"><p id="No5notify" style="text-align: right;color:#cccccc">Activate</p></div>
                            </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="text-align: center; margin-top: 10px;">
                                    <img id="id_img_pin5" src="/people_move" alt="" width="100px" height="100px">
                                </div>
                                <div class="col-md-6 col-sm-12 col-xs-12" style="padding: 5px;">
                                    <div class="btn_on col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin5_ON_WB" onclick="INT_TURN_ON_PIN5()" type="button" class="btn">Alarm</i></button>      
                                    </div>
                                    <div class="btn_off col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin5_OFF_WB" onclick="INT_TURN_OFF_PIN5()" type="button" class="btn">Disalarm</i></button> 
                                    </div>  
                                </div>   
                            </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="Int_respondP5V1"><span style="margin-left: 5px;color:#000000"></span></p></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="Int_respondP5V2" style="margin-left: 5px;color:#000000"></p></div>
                            </div>
                        </div>
                    </div>
                </div> 
        
        <!-- Phan khung Pin 6 -->
                <div id="id_pin6_Out" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;"><span style="margin-left: 5px;">Lounge</span> </div>
                <div class="col-md-6 col-sm-12 col-xs-12" style="text-align: right;"><span id="type_pin6"></span> </div>
                            </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-8 col-sm-12 col-xs-12" style="text-align: center; margin-top: 10px;">
                                    <img id="id_img_on_off_Pin6" src="/light_off" alt="" width="100px" height="100px">
                                </div>
                                <div class="col-md-4 col-sm-12 col-xs-12" style="padding: 5px;">
                                    <div class="btn_on col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin6_ON_WB" onclick="TURN_ON_PIN6()" type="button" class="btn">ON</i></button>      
                                    </div>
                                    <div class="btn_off col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin6_OFF_WB" onclick="TURN_OFF_PIN6()" type="button" class="btn">OFF</i></button> 
                                    </div>  
                                </div>   
                            </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="respondP6V1"><span style="margin-left: 5px;color:#000000"></span></p></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="respondP6V2" style="margin-left: 5px;color:#000000">OFF</p></div>
                            </div>
                        </div>
                    </div>
                </div> 
        
        <div id="id_pin6_Int" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;"><span style="margin-left: 5px;">Distance</span> </div>
                               
                                <div class="footer_e_x col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;height: 32px;"><p id="No6notify" style="text-align: right;color:#cccccc">Activate</p></div>
                            </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="text-align: center; margin-top: 10px;">
                                    <img id="id_img_pin6" src="/distance" alt="" width="100px" height="100px">
                                </div>
                                <div class="col-md-6 col-sm-12 col-xs-12" style="padding: 5px;">
                                    <div class="btn_on col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin6_ON_WB" onclick="INT_TURN_ON_PIN6()" type="button" class="btn">Alarm</i></button>      
                                    </div>
                                    <div class="btn_off col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin6_OFF_WB" onclick="INT_TURN_OFF_PIN6()" type="button" class="btn">Disalarm</i></button> 
                                    </div>  
                                </div>   
                            </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="Int_respondP6V1"><span style="margin-left: 5px;color:#000000"></span></p></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="Int_respondP6V2" style="margin-left: 5px;color:#000000"></p></div>
                            </div>
                        </div>
                    </div>
                </div> 
        
        <!-- khung Pin 7 -->
                <div id="id_pin7_Out" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;"><span style="margin-left: 5px;">Fan 2</span> </div>
                                <div class="col-md-6 col-sm-12 col-xs-12" style="text-align: right;"><span id="type_pin7"></span> </div>
                            </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-8 col-sm-12 col-xs-12" style="text-align: center; margin-top: 10px;">
                                    <img id="id_img_on_off_Pin7" src="/light_off" alt="" width="100px" height="100px">
                                </div>
                                <div class="col-md-4 col-sm-12 col-xs-12" style="padding: 5px;">
                                    <div class="btn_on col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin7_ON_WB" onclick="TURN_ON_PIN7()" type="button" class="btn">ON</i></button>      
                                    </div>
                                    <div class="btn_off col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin7_OFF_WB" onclick="TURN_OFF_PIN7()" type="button" class="btn">OFF</i></button> 
                                    </div>  
                                </div>   
                            </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="respondP7V1"><span style="margin-left: 5px;color:#000000"></span></p></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="respondP7V2" style="margin-left: 5px;color:#000000">OFF</p></div>
                            </div>
                        </div>
                    </div>
                </div> 
        
        <div id="id_pin7_Int" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;"><span style="margin-left: 5px;">Smoke 4</span> </div>
                                <div class="footer_e_x col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;height: 32px;"><p id="No7notify" style="text-align: right;color:#cccccc">Activate</p></div>
                            </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="text-align: center; margin-top: 10px;">
                                    <img id="id_img_pin7" src="/smoke" alt="" width="100px" height="100px">
                                </div>
                                <div class="col-md-6 col-sm-12 col-xs-12" style="padding: 5px;">
                                    <div class="btn_on col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin7_ON_WB" onclick="INT_TURN_ON_PIN7()" type="button" class="btn">Alarm</i></button>      
                                    </div>
                                    <div class="btn_off col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin7_OFF_WB" onclick="INT_TURN_OFF_PIN7()" type="button" class="btn">Disalarm</i></button> 
                                    </div>  
                                </div>   
                            </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="Int_respondP7V1"><span style="margin-left: 5px;color:#000000"></span></p></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="Int_respondP7V2" style="margin-left: 5px;color:#000000"></p></div>
                            </div>                                                        
                        </div>
                    </div>
                </div> 
        
        <!-- khung Pin 8 -->
                <div id="id_pin8_Out" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;"><span style="margin-left: 5px;">Bedroom</span> </div>
                <div class="col-md-6 col-sm-12 col-xs-12" style="text-align: right;"><span id="type_pin8"></span> </div>
                            </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-8 col-sm-12 col-xs-12" style="text-align: center; margin-top: 10px;">
                                    <img id="id_img_on_off_Pin8" src="/light_off" alt="" width="100px" height="100px">
                  
                                </div>
                                <div class="col-md-4 col-sm-12 col-xs-12" style="padding: 5px;">
                                    <div class="btn_on col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin8_ON_WB" onclick="TURN_ON_PIN8()" type="button" class="btn">ON</i></button>      
                                    </div>
                                    <div class="btn_off col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin8_OFF_WB" onclick="TURN_OFF_PIN8()" type="button" class="btn">OFF</i></button> 
                                    </div>  
                                </div>   
                            </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="respondP8V1"><span style="margin-left: 5px;color:#000000"></span></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="respondP8V2" style="margin-left: 5px;color:#000000">OFF</p></div>
                            </div>
                        </div>
                    </div>
                </div> 
        
        <div id="id_pin8_Int" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;"><span style="margin-left: 5px;">Button</span> </div>
                               <div class="footer_e_x col-md-6 col-sm-12 col-xs-12" style="margin-top: 5px;height: 32px;"><p id="No8notify" style="text-align: right;color:#cccccc">Activate</p></div>
                            </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-6 col-sm-12 col-xs-12" style="text-align: center; margin-top: 10px;">
                                    <img id="id_img_pin8" src="/button" alt="" width="100px" height="100px">
                  
                                </div>
                                <div class="col-md-6 col-sm-12 col-xs-12" style="padding: 5px;">
                                    <div class="btn_on col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin8_ON_WB" onclick="INT_TURN_ON_PIN8()" type="button" class="btn">Alarm</i></button>      
                                    </div>
                                    <div class="btn_off col-md-12 col-sm-12 col-xs-12">
                                        <button id="Pin8_OFF_WB" onclick="INT_TURN_OFF_PIN8()" type="button" class="btn">Disalarm</i></button> 
                                    </div>  
                                </div>   
                            </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="Int_respondP8V1"><span style="margin-left: 5px;color:#000000"></span></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="Int_respondP8V2" style="margin-left: 5px;color:#000000"></p></div>
                            </div>
                        </div>
                    </div>
                </div> 
                <div class="col-md-2 col-sm-1 col-xs-1"></div> 
            </div>
        </div>
        </div>
        <div class="footer">
            <br/>
             Copyright © ANVGroup | Control Center. All rights reserved
        </div>

    <script>
    
    var CheckOpen_GD = 0;
    var WB_GD_User1, WB_GD_Pass1, WB_GD_User2, WB_GD_Pass2, WB_GD_User3, WB_GD_Pass3, WB_GD_User4, WB_GD_Pass4, WB_GD_User5, WB_GD_Pass5, WB_Pin1,WB_Pin2,WB_Pin3,WB_Pin4,WB_Pin5,WB_Pin6,WB_Pin7,WB_Pin8;
    var ModeP1,ModeP2,ModeP3,ModeP4,ModeP5,ModeP6,ModeP7,ModeP8;
    var ValSensor=0;
    var PinCh1=0,PinCh2=0,PinCh3=0,PinCh4=0,PinCh5=0,PinCh6=0,PinCh7=0,PinCh8=0;
  var PinCh1OneTime = 0, PinCh2OneTime = 0, PinCh3OneTime = 0, PinCh4OneTime = 0, PinCh5OneTime = 0,PinCh6OneTime = 0, PinCh7OneTime = 0, PinCh8OneTime = 0;
  
    var checkPinNo1=0, checkPinNo2=0,checkPinNo3=0, checkPinNo4=0, checkPinNo5=0, checkPinNo6=0, checkPinNo7=0, checkPinNo8=0;
    var statusPin1=0, statusPin2=0, statusPin3=0, statusPin4=0, statusPin5=0, statusPin6=0, statusPin7=0, statusPin8=0;
    var DataJsonGiaoDien,DataVDK_GD;
    <!--  phan set timer dem time-->
     const ChannelPin = [];
     var itimeCh1=0,itimeCh2=0,itimeCh3=0,itimeCh4=0,itimeCh5=0,itimeCh6=0,itimeCh7=0, itimeCh8=0;
     var readytime =0;
     var check_Channel_pin =0;
     var GlobalCheckTimeOut = 0, checkTimeOut1=0,checkTimeOut2=0, checkTimeOut3=0, checkTimeOut4=0, checkTimeOut5=0, checkTimeOut6=0, checkTimeOut7=0,checkTimeOut8=0;
     
     var PinCh1UpSw =0, PinCh2UpSw = 0, PinCh3UpSw = 0, PinCh4UpSw = 0, PinCh5UpSw = 0, PinCh6UpSw =0, PinCh7UpSw = 0, PinCh8UpSw = 0;
     var CntCh1Sw = 0, CntCh2Sw = 0,CntCh3Sw = 0,CntCh4Sw = 0,CntCh5Sw = 0,CntCh6Sw = 0,CntCh7Sw = 0,CntCh8Sw = 0;
     
   var LastGlobalCheckTimeOut=0, count_timer =0;
      var t; <!-- t nay cho timer de ktra -->
      var timer_is_on=0;
  var Upper_Asymptote = 12, Low_Asymptote = 6, Limit_Finish = 4;
      
  function Start()
  {
    LoadFormStart();
    UpdateData();
  }
  function LoadFormStart()
  {
      document.getElementById("id_pin1_Out").style.display = "none"; // 
      document.getElementById("id_pin1_Int").style.display = "none"; // hide
      document.getElementById("id_pin2_Out").style.display = "none"; // 
      document.getElementById("id_pin2_Int").style.display = "none"; // hide
      document.getElementById("id_pin3_Out").style.display = "none"; // 
      document.getElementById("id_pin3_Int").style.display = "none"; // hide
      document.getElementById("id_pin4_Out").style.display = "none"; // 
      document.getElementById("id_pin4_Int").style.display = "none"; // hide
      document.getElementById("id_pin5_Out").style.display = "none"; // 
      document.getElementById("id_pin5_Int").style.display = "none"; // hide
      document.getElementById("id_pin6_Out").style.display = "none"; // 
      document.getElementById("id_pin6_Int").style.display = "none"; // hide
      document.getElementById("id_pin7_Out").style.display = "none"; // 
      document.getElementById("id_pin7_Int").style.display = "none"; // hide
      document.getElementById("id_pin8_Out").style.display = "none"; // 
      document.getElementById("id_pin8_Int").style.display = "none"; // hide
  }
  function LoadForm()
  {
    if(ModeP1 == "Tg" || ModeP1 == "Sw" || ModeP1 == "Pw")
    {
      console.log("pin 1 TG");
      document.getElementById("id_pin1_Out").style.display = "block"; // show
      document.getElementById("id_pin1_Int").style.display = "none"; // hide
    }
    else 
    {
      console.log("pin 1 Button");
      document.getElementById("id_pin1_Out").style.display = "none"; // hide
      document.getElementById("id_pin1_Int").style.display = "block"; // show
      

    }
       
    if(ModeP2 == "Tg" || ModeP2 == "Sw" || ModeP2 == "Pw")
    {
      document.getElementById("id_pin2_Out").style.display = "block"; // Show
      document.getElementById("id_pin2_Int").style.display = "none"; // hide
      
    }
    else 
    {
      document.getElementById("id_pin2_Out").style.display = "none";
      document.getElementById("id_pin2_Int").style.display = "block";
      PinCh2 = 1; 
    }
    
    if(ModeP3 == "Tg" || ModeP3 == "Sw" || ModeP3 == "Pw")
    {
      document.getElementById("id_pin3_Out").style.display = "block"; // Show
      document.getElementById("id_pin3_Int").style.display = "none"; // hide
    }
    else 
    {
      document.getElementById("id_pin3_Out").style.display = "none"; // 
      document.getElementById("id_pin3_Int").style.display = "block"; // 
      PinCh3 = 1; 
    }
    if(ModeP4 == "Tg" || ModeP4 == "Sw" || ModeP4 == "Pw")
    {
      document.getElementById("id_pin4_Out").style.display = "block"; // Show
      document.getElementById("id_pin4_Int").style.display = "none"; // hide
    }
    else 
    {
      document.getElementById("id_pin4_Out").style.display = "none"; // 
      document.getElementById("id_pin4_Int").style.display = "block"; // 
      PinCh4 = 1; 
    }
    
    if(ModeP5 == "Tg" || ModeP5 == "Sw" || ModeP5 == "Pw")
    {
      document.getElementById("id_pin5_Out").style.display = "block"; // Show
      document.getElementById("id_pin5_Int").style.display = "none"; // hide
    }
    else 
    {
      document.getElementById("id_pin5_Out").style.display = "none"; // 
      document.getElementById("id_pin5_Int").style.display = "block"; // 
      PinCh5 = 1; 
    }
    if(ModeP6 == "Tg" || ModeP6 == "Sw" || ModeP6 == "Pw")
    {
      document.getElementById("id_pin6_Out").style.display = "block"; // Show
      document.getElementById("id_pin6_Int").style.display = "none"; // hide
    }
    else 
    {
      document.getElementById("id_pin6_Out").style.display = "none"; // 
      document.getElementById("id_pin6_Int").style.display = "block"; //
      PinCh6 = 1; 
    }
    
    if(ModeP7 == "Tg" || ModeP7 == "Sw" || ModeP7 == "Pw")
    {
      document.getElementById("id_pin7_Out").style.display = "block"; // Show
      document.getElementById("id_pin7_Int").style.display = "none"; // hide
    }
    else 
    {
      document.getElementById("id_pin7_Out").style.display = "none"; // 
      document.getElementById("id_pin7_Int").style.display = "block"; //
      PinCh7 = 1; 
    }
    
    if(ModeP8 == "Tg" || ModeP8 == "Sw" || ModeP8 == "Pw")
    {
      document.getElementById("id_pin8_Out").style.display = "block"; // Show
      document.getElementById("id_pin8_Int").style.display = "none"; // hide
    }
    else 
    {
      document.getElementById("id_pin8_Out").style.display = "none"; // 
      document.getElementById("id_pin8_Int").style.display = "block"; //
      PinCh8 = 1; 
    }
  }
    function UpdateData()
    {
       //console.log("vao Upload: ");
       var xhttp = new XMLHttpRequest(); // dang bo do tai day
       xhttp.onreadystatechange = function()
       {
      if(this.readyState == 4 && this.status == 200)
      {
        DataVDK_GD ="";
        DataVDK_GD = xhttp.responseText;
        console.log("Dữ liệu VDK: " + DataVDK_GD);
        DataJsonGiaoDien = JSON.parse(DataVDK_GD);
        
        if(CheckOpen_GD == 0)
        { 
           //console.log("Dữ liệu VDK: " + DataVDK_GD);
           XuLyDataLan1();
           LoadForm();
           CheckOpen_GD = 1;  // tam thoi bo =0 da
        }
        else 
        {
          GlobalCheckTimeOut++;
          XuLyDataLan2();
        }
      
       
      }
     }
      xhttp.open("GET", "/GLoadData/UserInterface?CheckOpen_wb_GD=" + CheckOpen_GD, true);
      xhttp.send();
      setTimeout(function(){ UpdateData() }, 500); 
      
    }
  
  function XuLyDataLan1()
  {
    console.log("vao xu ly lan 1");
    
    if(DataJsonGiaoDien.u1 != null && DataJsonGiaoDien.p1 != null)
    {
     if(DataJsonGiaoDien.u1 != "" && DataJsonGiaoDien.p1 != "")
     {
      WB_GD_User1 = DataJsonGiaoDien.u1;
      WB_GD_Pass1 = DataJsonGiaoDien.p1;
      console.log("user1: "+WB_GD_User1);
      console.log("pass1: "+WB_GD_Pass1);
     }  
    }
    if(DataJsonGiaoDien.u2 != null && DataJsonGiaoDien.p2 != null)
    {
      if(DataJsonGiaoDien.u2 != "" && DataJsonGiaoDien.p2 != "")
      {
          WB_GD_User2 = DataJsonGiaoDien.u2;
          WB_GD_Pass2 = DataJsonGiaoDien.p2;
      }  
    }
          
    if(DataJsonGiaoDien.u3 != null && DataJsonGiaoDien.p3 != null)
    {
      if(DataJsonGiaoDien.u3 != "" && DataJsonGiaoDien.p3 != "")
      {
          WB_GD_User3 = DataJsonGiaoDien.u3;
          WB_GD_Pass3 = DataJsonGiaoDien.p3;
      }  
    }
    if(DataJsonGiaoDien.u4 != null && DataJsonGiaoDien.p4 != null)
    {
      if(DataJsonGiaoDien.u4 != "" && DataJsonGiaoDien.p4 != "")
      {
          WB_GD_User4 = DataJsonGiaoDien.u4;
          WB_GD_Pass4 = DataJsonGiaoDien.p4;
      }  
    }
    if(DataJsonGiaoDien.u5 != null && DataJsonGiaoDien.p5 != null)
    {
      if(DataJsonGiaoDien.u5 != "" && DataJsonGiaoDien.p5 != "")
      {
          WB_GD_User5 = DataJsonGiaoDien.u5;
          WB_GD_Pass5 = DataJsonGiaoDien.p5;
      }  
    }
    //mode for each pin
    if(DataJsonGiaoDien.MP1 != null && DataJsonGiaoDien.MP2 != null && DataJsonGiaoDien.MP3 != null && DataJsonGiaoDien.MP4 != null)
    {
          if(DataJsonGiaoDien.MP1 != "" && DataJsonGiaoDien.MP2 != "" && DataJsonGiaoDien.MP3 != "" && DataJsonGiaoDien.MP4 != "")
          {
             ModeP1 = DataJsonGiaoDien.MP1;
             ModeP2 = DataJsonGiaoDien.MP2;
             ModeP3 = DataJsonGiaoDien.MP3;
             ModeP4 = DataJsonGiaoDien.MP4;
       console.log("MP2: "+ModeP2);
          }  
    }
    if(DataJsonGiaoDien.MP5 != null && DataJsonGiaoDien.MP6 != null && DataJsonGiaoDien.MP7 != null && DataJsonGiaoDien.MP8 != null)
    {
      if(DataJsonGiaoDien.MP5 != "" && DataJsonGiaoDien.MP6 != "" && DataJsonGiaoDien.MP7 != "" && DataJsonGiaoDien.MP8 != "")
      {
             ModeP5 = DataJsonGiaoDien.MP5;
             ModeP6 = DataJsonGiaoDien.MP6;
             ModeP7 = DataJsonGiaoDien.MP7;
             ModeP8 = DataJsonGiaoDien.MP8;
      }  
    }
  if(ModeP1 === "Tg")
    document.getElementById("type_pin1").innerHTML = "Toogle";
  else if(ModeP1 === "Sw")
    document.getElementById("type_pin1").innerHTML = "Push Switch";
  else document.getElementById("type_pin1").innerHTML = "PWM";
  
  if(ModeP2 === "Tg")
    document.getElementById("type_pin2").innerHTML = "Toogle";
  else if(ModeP2 === "Sw")
    document.getElementById("type_pin2").innerHTML = "Push Switch";
  else document.getElementById("type_pin2").innerHTML = "PWM";
  
  if(ModeP3 === "Tg")
    document.getElementById("type_pin3").innerHTML = "Toogle";
  else if(ModeP3 === "Sw")
    document.getElementById("type_pin3").innerHTML = "Push Switch";
  else document.getElementById("type_pin3").innerHTML = "PWM";
  
  if(ModeP4 === "Tg")
    document.getElementById("type_pin4").innerHTML = "Toogle";
  else if(ModeP4 === "Sw")
    document.getElementById("type_pin4").innerHTML = "Push Switch";
  else document.getElementById("type_pin4").innerHTML = "PWM";
  
  if(ModeP5 === "Tg")
    document.getElementById("type_pin5").innerHTML = "Toogle";
  else if(ModeP5 === "Sw")
    document.getElementById("type_pin5").innerHTML = "Push Switch";
  else document.getElementById("type_pin5").innerHTML = "PWM";
  
  if(ModeP6 === "Tg")
    document.getElementById("type_pin6").innerHTML = "Toogle";
  else if(ModeP6 === "Sw")
    document.getElementById("type_pin6").innerHTML = "Push Switch";
  else document.getElementById("type_pin6").innerHTML = "PWM";
  
  if(ModeP7 === "Tg")
    document.getElementById("type_pin7").innerHTML = "Toogle";
  else if(ModeP7 === "Sw")
    document.getElementById("type_pin7").innerHTML = "Push Switch";
  else document.getElementById("type_pin7").innerHTML = "PWM";
  
  if(ModeP8 === "Tg")
    document.getElementById("type_pin8").innerHTML = "Toogle";
  else if(ModeP1 === "Sw")
    document.getElementById("type_pin8").innerHTML = "Push Switch";
  else document.getElementById("type_pin8").innerHTML = "PWM";
  
    if(DataJsonGiaoDien.Val != null)
    {
      if(DataJsonGiaoDien.Val != "")
      {
             ValSensor = DataJsonGiaoDien.Val;
      document.getElementById("ptemp").innerHTML = ValSensor;
      }  
    }
  }
  
  function XuLyDataLan2()
  {
    console.log("vao xu ly lan 2");
      
    if(DataJsonGiaoDien.Val != null)
    {
      if(DataJsonGiaoDien.Val != "")
        ValSensor = DataJsonGiaoDien.Val; 
    document.getElementById('ptemp').innerHTML = ValSensor;     
    }
    if(DataJsonGiaoDien.Pin1 != null && DataJsonGiaoDien.Pin2 != null && DataJsonGiaoDien.Pin3 != null && DataJsonGiaoDien.Pin4 != null)
    {
      //console.log("vao Pin 1-2-3-4 chua vay?");
      WB_Pin1 = DataJsonGiaoDien.Pin1;
      if(ModeP1 === "Tg")
      {
         
        if(WB_Pin1 === "1") 
        {
      checkTimeOut1 = 0;
            if(document.getElementById("respondP1V2").innerHTML != "ON")
      {
        $('#id_img_on_off').attr('src','/light_on');
        document.getElementById("respondP1V2").innerHTML = "ON";
        document.getElementById("respondP1V1").innerHTML = "transfer OK";
      }
        } 
        else if(WB_Pin1 === "0") 
        {
      checkTimeOut1 = 0;
            if(document.getElementById("respondP1V2").innerHTML != "OFF")
      {
        $('#id_img_on_off').attr('src','/light_off');
        document.getElementById("respondP1V2").innerHTML = "OFF";
        document.getElementById("respondP1V1").innerHTML = "transfer OK";
      }     
        } 
      }
      else if(ModeP1 === "Sw")
      {
        if(PinCh1 == 1)
        {
          if(PinCh1UpSw)
          {
            if(WB_Pin1=="1")
            {
              document.getElementById("respondP1V2").innerHTML = "ON";
              $('#id_img_on_off').attr('src','/light_on');
              document.getElementById("respondP1V1").innerHTML = "transfer OK";
              PinCh1UpSw = 0;
              checkTimeOut1Sw = 1;
            } 
          }
          if(WB_Pin1=="1")
            CntCh1Sw++;
          //console.log("dem: "+ CntCh1Sw);
          if(CntCh1Sw == 2)
            document.getElementById("respondP1V1").innerHTML = "";
            
          if(CntCh1Sw >= 4)
          {
            if(WB_Pin1=="0")
            {
              document.getElementById("respondP1V2").innerHTML = "OFF";
              $('#id_img_on_off').attr('src','/light_off');
              document.getElementById("respondP1V1").innerHTML = "";
              PinCh1 = 0;
              CntCh1Sw = 0;
            } 
            
          }
        } 
      }
    
      WB_Pin2 = DataJsonGiaoDien.Pin2;
      
      if(ModeP2 === "Tg" || ModeP2 === "Pw")
      {
        if(WB_Pin2 === "1") 
        {
      if(document.getElementById("respondP2V2").innerHTML != "ON")
      {
        $('#id_img_on_off_gpio1').attr('src','/light_on');
        document.getElementById("respondP2V2").innerHTML = "ON";
        document.getElementById("respondP2V1").innerHTML = "transfer OK";
      }
            checkTimeOut2 = 0;
        }  
        else if(WB_Pin2 === "0") 
        {
      if(document.getElementById("respondP2V2").innerHTML != "OFF")
      {
        $('#id_img_on_off_gpio1').attr('src','/light_off');
        document.getElementById("respondP2V2").innerHTML = "OFF";
        document.getElementById("respondP2V1").innerHTML = "transfer OK";
      }
            checkTimeOut2 = 0;
        }
      }
      else if(ModeP2 === "Sw")
      {
        if(PinCh2 == 1)
        {
          if(PinCh2UpSw)
          {
            if(WB_Pin2=="1")
            {
              document.getElementById("respondP2V2").innerHTML = "ON";
              $('#id_img_on_off_gpio1').attr('src','/light_on');
              document.getElementById("respondP2V1").innerHTML = "transfer OK";
              PinCh2UpSw = 0;
              checkTimeOut2Sw = 1;
            } 
          }
          if(WB_Pin2=="1")
            CntCh2Sw++;
          //console.log("dem: "+ CntCh1Sw);
          if(CntCh2Sw == 2)
            document.getElementById("respondP2V1").innerHTML = "";
            
          if(CntCh2Sw >= 4)
          {
            if(WB_Pin2=="0")
            {
              document.getElementById("respondP2V2").innerHTML = "OFF";
              $('#id_img_on_off_gpio1').attr('src','/light_off');
              document.getElementById("respondP2V1").innerHTML = "";
              PinCh2 = 0;
              CntCh2Sw = 0;
            } 
            
          }
        } 
      }
      else if(ModeP2 === "B")
      {
      if(WB_Pin2 == "1") 
      {
      if(PinCh2 == 1)
      {
        if(PinCh2OneTime)
        {
          PinCh2OneTime = 0;
          document.getElementById("Int_respondP2V1").innerHTML = "transfer OK";
          checkTimeOut2 = 0;
          if(document.getElementById("No2notify").innerHTML != "Activate")
            document.getElementById("No2notify").innerHTML = "Activate";
        }
        //console.log("thuxem: "); 
        //console.log(document.getElementById("respondP2V2").innerHTML);
        if(document.getElementById("Int_respondP2V2").innerHTML != "Impact")
        {
          $('#id_img_pin2').attr('src','/Bell');
          document.getElementById("Int_respondP2V2").innerHTML = "Impact";
        }
      }
      else {
        if(PinCh2OneTime)
        {
          PinCh2OneTime = 0;
          document.getElementById("Int_respondP2V1").innerHTML = "transfer OK";
          checkTimeOut2 = 0;
          if(document.getElementById("No2notify").innerHTML != "Turn Off")
            document.getElementById("No2notify").innerHTML = "Turn Off";
        }
        if(document.getElementById("Int_respondP2V2").innerHTML != "Turn Off")
        {
          $('#id_img_pin2').attr('src','/warning');
          document.getElementById("Int_respondP2V2").innerHTML = "Turn Off"; 
        }
      }
      }  
      else if(WB_Pin2 == "0") 
      {
        if(PinCh2 == 1)
        {
          if(PinCh2OneTime)
          {
            PinCh2OneTime = 0;
            document.getElementById("Int_respondP2V1").innerHTML = "transfer OK";
            checkTimeOut2 = 0;
            if(document.getElementById("No2notify").innerHTML != "Activate")
              document.getElementById("No2notify").innerHTML = "Activate";
          }
          console.log("thuxem2: "); 
          console.log(document.getElementById("Int_respondP2V2").innerHTML);
          if(document.getElementById("Int_respondP2V2").innerHTML != "No Impact")
          {
            $('#id_img_pin2').attr('src','/smoke');
            document.getElementById("Int_respondP2V2").innerHTML = "No Impact";
          }
          
        }
        else {
          if(PinCh2OneTime)
          {
            PinCh2OneTime = 0;
            document.getElementById("Int_respondP2V1").innerHTML = "transfer OK";
            checkTimeOut2 = 0;
            if(document.getElementById("No2notify").innerHTML != "Turn Off")
              document.getElementById("No2notify").innerHTML = "Turn Off";
          }
          if(document.getElementById("Int_respondP2V2").innerHTML != "Turn Off")
          {
            $('#id_img_pin2').attr('src','/warning');
            document.getElementById("Int_respondP2V2").innerHTML = "Turn Off";
          }
        }
      }
      }
    
      WB_Pin3 = DataJsonGiaoDien.Pin3;
      if(ModeP3 == "Tg" || ModeP3 == "Pw")
      {
        if(WB_Pin3 == "1") 
        {
          if(document.getElementById("respondP3V2").innerHTML != "ON")
          {
            $('#id_img_on_off_Pin3').attr('src','/light_on');
            document.getElementById("respondP3V2").innerHTML = "ON";
            document.getElementById("respondP3V1").innerHTML = "transfer OK";
            checkTimeOut3 = 0;
          }   
        }
        else if(WB_Pin3 == "0") 
        {
          if(document.getElementById("respondP3V2").innerHTML != "OFF")
          {
           
            $('#id_img_on_off_Pin3').attr('src','/light_off');
            document.getElementById("respondP3V2").innerHTML = "OFF";
            document.getElementById("respondP3V1").innerHTML = "transfer OK";
            checkTimeOut3 = 0;
          }
            
        }
      }
      else if(ModeP3 == "Sw")
      {
        if(PinCh3 == 1)
        {
          if(PinCh3UpSw)
          {
            if(WB_Pin3=="1")
            {
              document.getElementById("respondP3V2").innerHTML = "ON";
              $('#id_img_on_off_Pin3').attr('src','/light_on');
              document.getElementById("respondP3V1").innerHTML = "transfer OK";
              PinCh3UpSw = 0;
              checkTimeOut3Sw = 1;
            } 
          }
          if(WB_Pin3=="1")
            CntCh3Sw++;
          //console.log("dem: "+ CntCh1Sw);
          if(CntCh3Sw == 2)
            document.getElementById("respondP3V1").innerHTML = "";
            
          if(CntCh3Sw >= 4)
          {
            if(WB_Pin3=="0")
            {
              document.getElementById("respondP3V2").innerHTML = "OFF";
              $('#id_img_on_off_Pin3').attr('src','/light_off');
              document.getElementById("respondP3V1").innerHTML = "";
              PinCh3 = 0;
              CntCh3Sw = 0;
            } 
            
          }
        } 
      }
    else if(ModeP3 === "B")
      {
      if(WB_Pin3 == "1") 
      {
      if(PinCh3 == 1)
      {
        if(PinCh3OneTime)
        {
          PinCh3OneTime = 0;
          document.getElementById("Int_respondP3V1").innerHTML = "transfer OK";
          checkTimeOut3 = 0;
          if(document.getElementById("No3notify").innerHTML != "Activate")
            document.getElementById("No3notify").innerHTML = "Activate";
        }
        //console.log("thuxem: "); 
        //console.log(document.getElementById("respondP2V2").innerHTML);
        if(document.getElementById("Int_respondP3V2").innerHTML != "Impact")
        {
          $('#id_img_pin3').attr('src','/Bell');
          document.getElementById("Int_respondP3V2").innerHTML = "Impact";
        }
      }
      else {
        if(PinCh3OneTime)
        {
          PinCh3OneTime = 0;
          document.getElementById("Int_respondP3V1").innerHTML = "transfer OK";
          checkTimeOut3 = 0;
          if(document.getElementById("No3notify").innerHTML != "Turn Off")
            document.getElementById("No3notify").innerHTML = "Turn Off";
        }
        if(document.getElementById("Int_respondP3V2").innerHTML != "Turn Off")
        {
          $('#id_img_pin3').attr('src','/warning');
          document.getElementById("Int_respondP3V2").innerHTML = "Turn Off"; 
        }
      }
      }  
      else if(WB_Pin3 == "0") 
      {
        if(PinCh3 == 1)
        {
          if(PinCh3OneTime)
          {
            PinCh3OneTime = 0;
            document.getElementById("Int_respondP3V1").innerHTML = "transfer OK";
            checkTimeOut3 = 0;
            if(document.getElementById("No3notify").innerHTML != "Activate")
              document.getElementById("No3notify").innerHTML = "Activate";
          }
          //console.log("thuxem2: "); 
          //console.log(document.getElementById("respondP3V2").innerHTML);
          if(document.getElementById("Int_respondP3V2").innerHTML != "No Impact")
          {
            $('#id_img_pin3').attr('src','/smoke');
            document.getElementById("Int_respondP3V2").innerHTML = "No Impact";
          }
          
        }
        else {
          if(PinCh3OneTime)
          {
            PinCh3OneTime = 0;
            document.getElementById("Int_respondP3V1").innerHTML = "transfer OK";
            checkTimeOut3 = 0;
            if(document.getElementById("No3notify").innerHTML != "Turn Off")
              document.getElementById("No3notify").innerHTML = "Turn Off";
          }
          if(document.getElementById("Int_respondP3V2").innerHTML != "Turn Off")
          {
            $('#id_img_pin3').attr('src','/warning');
            document.getElementById("Int_respondP3V2").innerHTML = "Turn Off";
          }
        }
      }
      }
      
      WB_Pin4 = DataJsonGiaoDien.Pin4;
      if(ModeP4 === "Tg" || ModeP4 === "Pw")
      {
        if(WB_Pin4 === "1")
        {
      if(document.getElementById("respondP4V2").innerHTML != "ON")
          {
            
            $('#id_img_on_off_Pin4').attr('src','/light_on');
            document.getElementById("respondP4V2").innerHTML = "ON";
            document.getElementById("respondP4V1").innerHTML = "transfer OK";
            checkTimeOut4 = 0;
          } 
        }
        else if(WB_Pin4 === "0")
        {
          if(document.getElementById("respondP4V2").innerHTML != "OFF") 
          {
            
            $('#id_img_on_off_Pin4').attr('src','/light_off');
            document.getElementById("respondP4V2").innerHTML = "OFF";
            document.getElementById("respondP4V1").innerHTML = "transfer OK";
            checkTimeOut4 = 0;
          } 
        }
      }
      else if(ModeP4 === "Sw")
      {
        if(PinCh4 == 1)
        {
          if(PinCh4UpSw)
          {
            if(WB_Pin4=="1")
            {
              document.getElementById("respondP4V2").innerHTML = "ON";
              $('#id_img_on_off_Pin4').attr('src','/light_on');
              document.getElementById("respondP4V1").innerHTML = "transfer OK";
              PinCh4UpSw = 0;
              checkTimeOut4Sw = 1;
            } 
          }
          if(WB_Pin4=="1")
            CntCh4Sw++;
          //console.log("dem: "+ CntCh1Sw);
          if(CntCh4Sw == 2)
            document.getElementById("respondP4V1").innerHTML = "";
            
          if(CntCh4Sw >= 4)
          {
            if(WB_Pin4=="0")
            {
              document.getElementById("respondP4V2").innerHTML = "OFF";
              $('#id_img_on_off_Pin4').attr('src','/light_off');
              document.getElementById("respondP4V1").innerHTML = "";
              PinCh4 = 0;
              CntCh4Sw = 0;
            } 
            
          }
        } 
      }
    else if(ModeP4 === "B")
    {
      if(WB_Pin4 == "1") 
      {
      if(PinCh4 == 1)
      {
        if(PinCh4OneTime)
        {
          PinCh4OneTime = 0;
          document.getElementById("Int_respondP4V1").innerHTML = "transfer OK";
          checkTimeOut4 = 0;
          if(document.getElementById("No4notify").innerHTML != "Activate")
            document.getElementById("No4notify").innerHTML = "Activate";
        }
        //console.log("thuxem: "); 
        //console.log(document.getElementById("respondP2V2").innerHTML);
        if(document.getElementById("Int_respondP4V2").innerHTML != "Impact")
        {
          $('#id_img_pin4').attr('src','/Bell');
          document.getElementById("Int_respondP4V2").innerHTML = "Impact";
        }
      }
      else {
        if(PinCh4OneTime)
        {
          PinCh4OneTime = 0;
          document.getElementById("Int_respondP4V1").innerHTML = "transfer OK";
          checkTimeOut4 = 0;
          if(document.getElementById("No4notify").innerHTML != "Turn Off")
            document.getElementById("No4notify").innerHTML = "Turn Off";
        }
        if(document.getElementById("Int_respondP4V2").innerHTML != "Turn Off")
        {
          $('#id_img_pin4').attr('src','/warning');
          document.getElementById("Int_respondP4V2").innerHTML = "Turn Off"; 
        }
      }
      }
      else if(WB_Pin4 == "0") 
      {
        if(PinCh4 == 1)
        {
          if(PinCh4OneTime)
          {
            PinCh4OneTime = 0;
            document.getElementById("Int_respondP4V1").innerHTML = "transfer OK";
            checkTimeOut4 = 0;
            if(document.getElementById("No4notify").innerHTML != "Activate")
              document.getElementById("No4notify").innerHTML = "Activate";
          }
          //console.log("thuxem2: "); 
          //console.log(document.getElementById("respondP2V2").innerHTML);
          if(document.getElementById("Int_respondP4V2").innerHTML != "No Impact")
          {
            $('#id_img_pin4').attr('src','/smoke');
            document.getElementById("Int_respondP4V2").innerHTML = "No Impact";
          }
          
        }
        else {
          if(PinCh4OneTime)
          {
            PinCh4OneTime = 0;
            document.getElementById("Int_respondP4V1").innerHTML = "transfer OK";
            checkTimeOut4 = 0;
            if(document.getElementById("No4notify").innerHTML != "Turn Off")
              document.getElementById("No4notify").innerHTML = "Turn Off";
          }
          if(document.getElementById("Int_respondP4V2").innerHTML != "Turn Off")
          {
            $('#id_img_pin4').attr('src','/warning');
            document.getElementById("Int_respondP4V2").innerHTML = "Turn Off";
          }
        }
      }
      }
    }
    
    if(DataJsonGiaoDien.Pin5 != null && DataJsonGiaoDien.Pin6 != null && DataJsonGiaoDien.Pin7 != null && DataJsonGiaoDien.Pin8 != null)
    {
      //console.log("vao Pin 5-6-7-8 chua vay?");
      WB_Pin5 = DataJsonGiaoDien.Pin5;
      if(ModeP5 === "Tg" || ModeP5 === "Pw")
      {
        if(WB_Pin5 === "1") 
        {
          if(document.getElementById("respondP5V2").innerHTML != "ON")
          {
            
            $('#id_img_on_off_Pin5').attr('src','/light_on');
            document.getElementById("respondP5V2").innerHTML = "ON";
            document.getElementById("respondP5V1").innerHTML = "transfer OK";
            checkTimeOut5 = 0;
          }
          
        } 
        else if(WB_Pin5 === "0")
        {
          if(document.getElementById("respondP5V2").innerHTML != "OFF")
          {
            
            $('#id_img_on_off_Pin5').attr('src','/light_off');
            document.getElementById("respondP5V2").innerHTML = "OFF";
            document.getElementById("respondP5V1").innerHTML = "transfer OK";
            checkTimeOut5 = 0;
          }  
        }
      }
      else if(ModeP5 === "Sw")
      {
        if(PinCh5 == 1)
        {
          if(PinCh5UpSw)
          {
            if(WB_Pin5=="1")
            {
              document.getElementById("respondP5V2").innerHTML = "ON";
              $('#id_img_on_off_Pin5').attr('src','/light_on');
              document.getElementById("respondP5V1").innerHTML = "transfer OK";
              PinCh5UpSw = 0;
              checkTimeOut5Sw = 1;
            } 
          }
          if(WB_Pin5 == "1")
            CntCh5Sw++;
          //console.log("dem: "+ CntCh1Sw);
          if(CntCh5Sw == 2)
            document.getElementById("respondP5V1").innerHTML = "";
            
          if(CntCh5Sw >= 4)
          {
            if(WB_Pin5=="0")
            {
              document.getElementById("respondP5V2").innerHTML = "OFF";
              $('#id_img_on_off_Pin5').attr('src','/light_off');
              document.getElementById("respondP5V1").innerHTML = "";
              PinCh5 = 0;
              CntCh5Sw = 0;
            } 
            
          }
        } 
      }
    else if(ModeP5 === "B")
    {
    if(WB_Pin5 == "1")
    {
      if(PinCh5 == 1)
      {
        if(PinCh5OneTime)
        {
          PinCh5OneTime = 0;
          document.getElementById("Int_respondP5V1").innerHTML = "transfer OK";
          checkTimeOut5 = 0;
          if(document.getElementById("No5notify").innerHTML != "Activate")
            document.getElementById("No5notify").innerHTML = "Activate";
        }
        //console.log("thuxem: "); 
        //console.log(document.getElementById("respondP2V2").innerHTML);
        if(document.getElementById("Int_respondP5V2").innerHTML != "Impact")
        {
          $('#id_img_pin5').attr('src','/move_impact');
          document.getElementById("Int_respondP5V2").innerHTML = "Impact";
        }
      }
      else {
        if(PinCh5OneTime)
        {
          PinCh5OneTime = 0;
          document.getElementById("Int_respondP5V1").innerHTML = "transfer OK";
          checkTimeOut5 = 0;
          if(document.getElementById("No5notify").innerHTML != "Turn Off")
            document.getElementById("No5notify").innerHTML = "Turn Off";
        }
        if(document.getElementById("Int_respondP5V2").innerHTML != "Turn Off")
        {
          $('#id_img_pin5').attr('src','/warning');
          document.getElementById("Int_respondP5V2").innerHTML = "Turn Off"; 
        }
      }
    }
    else if(WB_Pin5 == "0")
    {
        if(PinCh5 == 1)
        {
          if(PinCh5OneTime)
          {
            PinCh5OneTime = 0;
            document.getElementById("Int_respondP5V1").innerHTML = "transfer OK";
            checkTimeOut5 = 0;
            if(document.getElementById("No5notify").innerHTML != "Activate")
              document.getElementById("No5notify").innerHTML = "Activate";
          }
          //console.log("thuxem2: "); 
          //console.log(document.getElementById("respondP2V2").innerHTML);
          if(document.getElementById("Int_respondP5V2").innerHTML != "No Impact")
          {
            $('#id_img_pin5').attr('src','/people_move');
            document.getElementById("Int_respondP5V2").innerHTML = "No Impact";
          }
          
        }
        else {
          if(PinCh5OneTime)
          {
            PinCh5OneTime = 0;
            document.getElementById("Int_respondP5V1").innerHTML = "transfer OK";
            checkTimeOut5 = 0;
            if(document.getElementById("No5notify").innerHTML != "Turn Off")
              document.getElementById("No5notify").innerHTML = "Turn Off";
          }
          if(document.getElementById("Int_respondP5V2").innerHTML != "Turn Off")
          {
            $('#id_img_pin5').attr('src','/warning');
            document.getElementById("Int_respondP5V2").innerHTML = "Turn Off";
          }
        }
        
    }
    }
      WB_Pin6 = DataJsonGiaoDien.Pin6;
      if(ModeP6 === "Tg" || ModeP6 === "Pw")
      {
        if(WB_Pin6 === "1") 
        {
          if(document.getElementById("respondP6V2").innerHTML != "ON")
          {
           
            $('#id_img_on_off_Pin6').attr('src','/light_on');
            document.getElementById("respondP6V2").innerHTML = "ON";
            document.getElementById("respondP6V1").innerHTML = "transfer OK";
            checkTimeOut6 = 0;
          }
          
        }
        else if(WB_Pin6 === "0")
        {
       if(document.getElementById("respondP6V2").innerHTML != "OFF")
          {
            PinCh6 = 0;
            $('#id_img_on_off_Pin6').attr('src','/light_off');
            document.getElementById("respondP6V2").innerHTML = "OFF";
            document.getElementById("respondP6V1").innerHTML = "transfer OK";
            checkTimeOut6 = 0;
          }
          
        }
      }
      else if(ModeP6 === "Sw")
      {
        if(PinCh6)
        {
          if(PinCh6UpSw)
          {
            if(WB_Pin6=="1")
            {
              document.getElementById("respondP6V2").innerHTML = "ON";
              $('#id_img_on_off_Pin6').attr('src','/light_on');
              document.getElementById("respondP6V1").innerHTML = "transfer OK";
              PinCh6UpSw = 0;
              checkTimeOut6Sw = 1;
            } 
          }
          if(WB_Pin6=="1")
            CntCh6Sw++;
          //console.log("dem: "+ CntCh1Sw);
          if(CntCh6Sw == 2)
            document.getElementById("respondP6V1").innerHTML = "";
            
          if(CntCh6Sw >= 4)
          {
            if(WB_Pin6=="0")
            {
              document.getElementById("respondP6V2").innerHTML = "OFF";
              $('#id_img_on_off_Pin6').attr('src','/light_off');
              document.getElementById("respondP6V1").innerHTML = "";
              PinCh6 = 0;
              CntCh6Sw = 0;
            } 
            
          }
        } 
      }
    else if(ModeP6 === "B")
    {
    if(WB_Pin6 == "1")
    {
      if(PinCh6 == 1)
      {
        if(PinCh6OneTime)
        {
          PinCh6OneTime = 0;
          document.getElementById("Int_respondP6V1").innerHTML = "transfer OK";
          checkTimeOut6 = 0;
          if(document.getElementById("No6notify").innerHTML != "Activate")
            document.getElementById("No6notify").innerHTML = "Activate";
        }
        //console.log("thuxem: "); 
        //console.log(document.getElementById("respondP2V2").innerHTML);
        if(document.getElementById("Int_respondP6V2").innerHTML != "Impact")
        {
          $('#id_img_pin6').attr('src','/Bell');
          document.getElementById("Int_respondP6V2").innerHTML = "Impact";
        }
      }
      else {
        if(PinCh6OneTime)
        {
          PinCh6OneTime = 0;
          document.getElementById("Int_respondP6V1").innerHTML = "transfer OK";
          checkTimeOut6 = 0;
          if(document.getElementById("No6notify").innerHTML != "Turn Off")
            document.getElementById("No6notify").innerHTML = "Turn Off";
        }
        if(document.getElementById("Int_respondP6V2").innerHTML != "Turn Off")
        {
          $('#id_img_pin6').attr('src','/warning');
          document.getElementById("Int_respondP6V2").innerHTML = "Turn Off"; 
        }
      }
    }
    else if(WB_Pin6 == "0")
    {
        if(PinCh6 == 1)
        {
          if(PinCh6OneTime)
          {
            PinCh6OneTime = 0;
            document.getElementById("Int_respondP6V1").innerHTML = "transfer OK";
            checkTimeOut6 = 0;
            if(document.getElementById("No6notify").innerHTML != "Activate")
              document.getElementById("No6notify").innerHTML = "Activate";
          }
          //console.log("thuxem2: "); 
          //console.log(document.getElementById("respondP2V2").innerHTML);
          if(document.getElementById("Int_respondP6V2").innerHTML != "No Impact")
          {
            $('#id_img_pin6').attr('src','/distance');
            document.getElementById("Int_respondP6V2").innerHTML = "No Impact"; 
          }
          
        }
        else {
          if(PinCh6OneTime)
          {
            PinCh6OneTime = 0;
            document.getElementById("Int_respondP6V1").innerHTML = "transfer OK";
            checkTimeOut6 = 0;
            if(document.getElementById("No6notify").innerHTML != "Turn Off")
              document.getElementById("No6notify").innerHTML = "Turn Off";
          }
          if(document.getElementById("Int_respondP6V2").innerHTML != "Turn Off")
          {
            $('#id_img_pin6').attr('src','/warning');
            document.getElementById("Int_respondP6V2").innerHTML = "Turn Off";
          }
        }
        
    }
    }
      WB_Pin7 = DataJsonGiaoDien.Pin7;
      if(ModeP7 === "Tg" || ModeP7 === "Pw")
      {
        if(WB_Pin7 == "1")
        {
          if(document.getElementById("respondP7V2").innerHTML != "ON")
          {
            
            $('#id_img_on_off_Pin7').attr('src','/light_on');
            document.getElementById("respondP7V2").innerHTML = "ON";
            document.getElementById("respondP7V1").innerHTML = "transfer OK";
            checkTimeOut7 = 0;
          }
        }
        else if(WB_Pin7 == "0") 
        {
          if(document.getElementById("respondP7V2").innerHTML != "OFF")
          {
            
            $('#id_img_on_off_Pin7').attr('src','/light_off');
            document.getElementById("respondP7V2").innerHTML = "OFF";
            document.getElementById("respondP7V1").innerHTML = "transfer OK";
            checkTimeOut7 = 0;
          }
          
        }
      }
      else if(ModeP7 === "Sw")
      {
        if(PinCh7)
        {
          if(PinCh7UpSw)
          {
            if(WB_Pin7=="1")
            {
              document.getElementById("respondP7V2").innerHTML = "ON";
              $('#id_img_on_off_Pin7').attr('src','/light_on');
              document.getElementById("respondP7V1").innerHTML = "transfer OK";
              PinCh7UpSw = 0;
              checkTimeOut7Sw = 1;
            } 
          }
          if(WB_Pin7=="1")
            CntCh7Sw++;
          //console.log("dem: "+ CntCh1Sw);
          if(CntCh7Sw == 2)
            document.getElementById("respondP7V1").innerHTML = "";
            
          if(CntCh7Sw >= 4)
          {
            if(WB_Pin7=="0")
            {
              document.getElementById("respondP7V2").innerHTML = "OFF";
              $('#id_img_on_off_Pin7').attr('src','/light_off');
              document.getElementById("respondP7V1").innerHTML = "";
              PinCh7 = 0;
              CntCh7Sw = 0;
            } 
            
          }
        } 
      }
    else if(ModeP7 === "B")
    {
    if(WB_Pin7 === "1")
    {
      if(PinCh7)
      {
        if(PinCh7OneTime)
        {
          PinCh7OneTime = 0;
          document.getElementById("Int_respondP7V1").innerHTML = "transfer OK";
          checkTimeOut7 = 0;
          if(document.getElementById("No7notify").innerHTML != "Activate")
            document.getElementById("No7notify").innerHTML = "Activate";
        }
        //console.log("thuxem: "); 
        //console.log(document.getElementById("respondP2V2").innerHTML);
        if(document.getElementById("Int_respondP7V2").innerHTML != "Impact")
        {
          $('#id_img_pin7').attr('src','/Bell');
          document.getElementById("Int_respondP7V2").innerHTML = "Impact";
        }
      }
      else {
        if(PinCh7OneTime)
        {
          PinCh7OneTime = 0;
          document.getElementById("Int_respondP7V1").innerHTML = "transfer OK";
          checkTimeOut7 = 0;
          if(document.getElementById("No7notify").innerHTML != "Turn Off")
            document.getElementById("No7notify").innerHTML = "Turn Off";
        }
        if(document.getElementById("Int_respondP7V2").innerHTML != "Turn Off")
        {
          $('#id_img_pin7').attr('src','/warning');
          document.getElementById("Int_respondP7V2").innerHTML = "Turn Off"; 
        }
      }
    }
    else if(WB_Pin7 === "0")
    {
        if(PinCh7 === 1)
        {
          if(PinCh7OneTime)
          {
            PinCh7OneTime = 0;
            document.getElementById("Int_respondP7V1").innerHTML = "transfer OK";
            checkTimeOut7 = 0;
            if(document.getElementById("No7notify").innerHTML != "Activate")
              document.getElementById("No7notify").innerHTML = "Activate";
          }
          //console.log("thuxem2: "); 
          //console.log(document.getElementById("respondP2V2").innerHTML);
          if(document.getElementById("Int_respondP7V2").innerHTML != "No Impact")
          {
            $('#id_img_pin7').attr('src','/smoke');
            document.getElementById("Int_respondP7V2").innerHTML = "No Impact"; 
          }
          
        }
        else {
          if(PinCh7OneTime)
          {
            PinCh7OneTime = 0;
            document.getElementById("Int_respondP7V1").innerHTML = "transfer OK";
            checkTimeOut7 = 0;
            if(document.getElementById("No7notify").innerHTML != "Turn Off")
              document.getElementById("No7notify").innerHTML = "Turn Off";
          }
          if(document.getElementById("Int_respondP7V2").innerHTML != "Turn Off")
          {
            $('#id_img_pin7').attr('src','/warning');
            document.getElementById("Int_respondP7V2").innerHTML = "Turn Off";
          }
        }
    }
    }
      
      WB_Pin8 = DataJsonGiaoDien.Pin8;
      if(ModeP8 === "Tg" || ModeP8 === "Pw")
      {
        if(WB_Pin8 === "1")
        {
          if(document.getElementById("respondP8V2").innerHTML != "ON")
          {
            
            $('#id_img_on_off_Pin8').attr('src','/light_on');
            document.getElementById("respondP8V2").innerHTML = "ON";
            document.getElementById("respondP8V1").innerHTML = "transfer OK";
            checkTimeOut8 = 0;
          }
        }
        else if(WB_Pin8 === "0")
        {
       if(document.getElementById("respondP8V2").innerHTML != "OFF")
          {
              
            $('#id_img_on_off_Pin8').attr('src','/light_off');
            document.getElementById("respondP8V2").innerHTML = "OFF";
            document.getElementById("respondP8V1").innerHTML = "transfer OK";
            checkTimeOut8 = 0;
            
          }
        }
      }  
       else if(ModeP8 === "Sw")
       {
      if(PinCh8)
      {
          if(PinCh8UpSw)
          {
          if(WB_Pin8=="1")
          {
            document.getElementById("respondP8V2").innerHTML = "ON";
            $('#id_img_on_off_Pin8').attr('src','/light_on');
            document.getElementById("respondP8V1").innerHTML = "transfer OK";
            PinCh8UpSw = 0;
            checkTimeOut8Sw = 1;
          } 
          }
          if(WB_Pin8=="1")
          CntCh8Sw++;
          //console.log("dem: "+ CntCh1Sw);
          if(CntCh8Sw == 2)
          document.getElementById("respondP8V1").innerHTML = "";
          
          if(CntCh8Sw >= 4)
          {
          if(WB_Pin8=="0")
          {
            document.getElementById("respondP8V2").innerHTML = "OFF";
            $('#id_img_on_off_Pin8').attr('src','/light_off');
            document.getElementById("respondP8V1").innerHTML = "";
            PinCh8 = 0;
            CntCh8Sw = 0;
          } 
          
          }
      } 
        }
    
    else if(ModeP8 === "B")
    {
      if(WB_Pin8 == "1")
      {
        if(PinCh8)
        {
          if(PinCh8OneTime)
          {
            PinCh8OneTime = 0;
            document.getElementById("Int_respondP8V1").innerHTML = "transfer OK";
            checkTimeOut8 = 0;
            if(document.getElementById("No8notify").innerHTML != "Activate")
              document.getElementById("No8notify").innerHTML = "Activate";
          }
          //console.log("thuxem: "); 
          //console.log(document.getElementById("respondP2V2").innerHTML);
          if(document.getElementById("Int_respondP8V2").innerHTML != "Impact")
          {
            $('#id_img_pin8').attr('src','/impact');
            document.getElementById("Int_respondP8V2").innerHTML = "Impact";
          }
        }
        else {
          if(PinCh8OneTime)
          {
            PinCh8OneTime = 0;
            document.getElementById("Int_respondP8V1").innerHTML = "transfer OK";
            checkTimeOut8 = 0;
            if(document.getElementById("No8notify").innerHTML != "Turn Off")
              document.getElementById("No8notify").innerHTML = "Turn Off";
          }
          if(document.getElementById("Int_respondP8V2").innerHTML != "Turn Off")
          {
            $('#id_img_pin8').attr('src','/warning');
            document.getElementById("Int_respondP8V2").innerHTML = "Turn Off"; 
          }
        }
      }
      else if(WB_Pin8 === "0")
      {
          if(PinCh8)
          {
            if(PinCh8OneTime)
            {
              PinCh8OneTime = 0;
              document.getElementById("Int_respondP8V1").innerHTML = "transfer OK";
              checkTimeOut8 = 0;
              if(document.getElementById("No8notify").innerHTML != "Activate")
                document.getElementById("No8notify").innerHTML = "Activate";
            }
            //console.log("thuxem2: "); 
            //console.log(document.getElementById("respondP2V2").innerHTML);
            if(document.getElementById("Int_respondP8V2").innerHTML != "No Impact")
            {
              $('#id_img_pin8').attr('src','/button');
              document.getElementById("Int_respondP8V2").innerHTML = "No Impact"; 
            }
            
          }
          else {
            if(PinCh8OneTime)
            {
              PinCh8OneTime = 0;
              document.getElementById("Int_respondP8V1").innerHTML = "transfer OK";
              checkTimeOut8 = 0;
              if(document.getElementById("No8notify").innerHTML != "Turn Off")
                document.getElementById("No8notify").innerHTML = "Turn Off";
            }
            if(document.getElementById("Int_respondP8V2").innerHTML != "Turn Off")
            {
              $('#id_img_pin8').attr('src','/warning');
              document.getElementById("Int_respondP8V2").innerHTML = "Turn Off";
            }
          }
      }
    }
      
    }
  
  }
  
  
  
    function TURN_ON_PIN1()
    {
    if(WB_Pin1 === "0")
    {
      console.log("ModeP1" + ModeP1);
      console.log("User: " + WB_GD_User1);
      console.log("Pass: " + WB_GD_Pass1);
      if(ModeP1 == "Tg")
      {
         //doTimer();
         ChannelPin[0] = 1; // dem phan timer dinh time
         readytime = 1; 
         document.getElementById("respondP1V1").innerHTML = "Sending..";
         checkTimeOut1 =1;

         PinCh1 = 1; // nhan biet kenh cho Upload
         checkPinNo1 = 1; // cho dk duo ESP nhan ve
         statusPin1 = "1";
          
         var xhttp = new XMLHttpRequest();
         xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo1 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin1, true); 
         xhttp.send();
      }
      else if(ModeP1 == "Sw")
      {
          statusPin1 = 1;
          document.getElementById("respondP1V1").innerHTML = "Sending..";
          
          checkPinNo1 = 1; // cho dk duo ESP nhan ve
          PinCh1 = 1; // nhan biet kenh cho Upload
          PinCh1UpSw = 1; // upload
          // timer
          //doTimer();
          ChannelPin[0] = 1; // dem phan timer dinh time
          readytime = 1;
          checkTimeOut1Sw =0;
          
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/push?Pin="+ checkPinNo1 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin1, true); 
          xhttp.send();
      }
    }
    }
    function TURN_OFF_PIN1()
    {
    if(WB_Pin1 == "1")
    {
      console.log("tac dong GPIO0_OFF!!!");
      if(ModeP1 == "Tg")
      {
         //doTimer();
         ChannelPin[0] = 1; // dem phan timer dinh time
         readytime = 1; 
         document.getElementById("respondP1V1").innerHTML = "Sending..";
         checkTimeOut1 =1;
        
         PinCh1 = 1; // nhan biet kenh upload
         checkPinNo1 = 1; // cho dk duo ESP nhan ve
         statusPin1 = "0";
        
         var xhttp = new XMLHttpRequest();
         xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo1 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin1, true);
         xhttp.send();
      }
    }
    }
  function TURN_ON_PIN2()
  {
      //console.log("tac dong GPIO1_ON!!!");
      //console.log("ModeP2 " + ModeP2);
      if(ModeP2 == "Tg")
      {
        //doTimer();
        ChannelPin[1] = 1; // dem phan timer dinh time
        readytime = 1; 
        document.getElementById("respondP2V1").innerHTML = "Sending..";
        checkTimeOut2 = 1;
         
        PinCh2 = 1; // nhan biet kenh upload
        checkPinNo2 = 2; // cho dk duo ESP nhan ve
        statusPin2 = "1";// 
        
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo2 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin2, true); 
        xhttp.send();
      }
      else if(ModeP2 == "Sw")
      {
        statusPin2 = 1;
        document.getElementById("respondP2V1").innerHTML = "Sending..";
        
        checkPinNo2 = 2; // cho dk duo ESP nhan ve
        PinCh2 = 1; // nhan biet kenh cho Upload
        PinCh2UpSw = 1; // upload
        // timer
        //doTimer();
        ChannelPin[1] = 1; // dem phan timer dinh time
        readytime = 1;
        checkTimeOut2Sw =0;
        
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/push?Pin="+ checkPinNo2 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin2, true); 
        xhttp.send();
      }
    else if(ModeP2 == "Pw")
    {
    
      ChannelPin[1] = 1; // dem phan timer dinh time
      readytime = 1; 
      document.getElementById("respondP2V1").innerHTML = "Sending..";
      checkTimeOut2 = 1;
        
      checkPinNo2 = 2; // cho dk duo ESP nhan ve
      statusPin2 = "1";//
        
      var xhttp = new XMLHttpRequest();
      xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo2 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin2, true); 
      xhttp.send();
    } 
 }
 
  function TURN_OFF_PIN2()
  {
    console.log("tac dong GPIO1_OFF!!!");
    if(ModeP2 === "Tg")
    {
          ChannelPin[1] = 1; // dem phan timer dinh time
          readytime = 1; 
          document.getElementById("respondP2V1").innerHTML = "Sending..";
          checkTimeOut2 = 1;
          
          PinCh2 = 1; // nhan biet kenh upload
          checkPinNo2 = 2; // cho dk duo ESP nhan ve
          statusPin2 = "0";
          
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo2 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin2, true); 
          xhttp.send();
    }
  else if(ModeP2 === "Pw")
    {
     
      ChannelPin[1] = 1; // dem phan timer dinh time
      readytime = 1; 
      document.getElementById("respondP2V1").innerHTML = "Sending..";
      checkTimeOut2 = 1;

      checkPinNo2 = 2; // cho dk duo ESP nhan ve
      statusPin2 = "0";
        
      var xhttp = new XMLHttpRequest();
      xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo2 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin2, true); 
      xhttp.send();
    }
 }
 
  function TURN_OFF_PIN3()
  {
    if(WB_Pin3 =="1")
    {
       console.log("tac dong Pin3_OFF!!!");
      if(ModeP3 === "Tg")
      {
        //doTimer();
        ChannelPin[2] = 1; // dem phan timer dinh time
        readytime = 1; 
        document.getElementById("respondP3V1").innerHTML = "Sending..";
        checkTimeOut3 = 1;
        
        PinCh3 = 1;
        checkPinNo3 = 3; // cho dk duo ESP nhan ve
        statusPin3 = "0";
        
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo3 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin3, true);
        
        xhttp.send();
      }
    else if(ModeP3 === "Pw")
    {
     
      ChannelPin[2] = 1; // dem phan timer dinh time
      readytime = 1; 
      document.getElementById("respondP3V1").innerHTML = "Sending..";
      checkTimeOut3 = 1;

      checkPinNo3 = 3; // cho dk duo ESP nhan ve
      statusPin3 = "0";
      
      var xhttp = new XMLHttpRequest();
      xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo3 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin3, true); 
      xhttp.send();
    }
    }
  }
  
  function TURN_ON_PIN3()
    {
  
    if(WB_Pin3 === "0")
    {
      console.log("tac dong PIN3_ON!!!");
      if(ModeP3 == "Tg")
      {
        //doTimer();
        ChannelPin[2] = 1; // dem phan timer dinh time
        readytime = 1; 
        document.getElementById("respondP3V1").innerHTML = "Sending..";
        checkTimeOut3 = 1;
        
        PinCh3 = 1; // nhan biet kenh phan upload
        checkPinNo3 = 3; // cho dk duo ESP nhan ve
        statusPin3 = "1";
        
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo3 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin3, true);
        
        xhttp.send();
      }
      else if(ModeP3 == "Sw")
      {
        statusPin3 = 1;
        document.getElementById("respondP3V1").innerHTML = "Sending..";
        
        checkPinNo3 = 3; // cho dk duo ESP nhan ve
        PinCh3 = 1; // nhan biet kenh cho Upload
        PinCh3UpSw = 1; // upload
        // timer
        //doTimer();
        ChannelPin[2] = 1; // dem phan timer dinh time
        readytime = 1;
        checkTimeOut3Sw =0;
        
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/push?Pin="+ checkPinNo3 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin3, true); 
        xhttp.send();
      }
    else if(ModeP3 == "Pw")
    {
    
      ChannelPin[2] = 1; // dem phan timer dinh time
      readytime = 1; 
      document.getElementById("respondP3V1").innerHTML = "Sending..";
      checkTimeOut3 = 1;
        
      checkPinNo3 = 3; // cho dk duo ESP nhan ve
      statusPin3 = "1";//
        
      var xhttp = new XMLHttpRequest();
      xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo3 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin3, true); 
      xhttp.send();
    } 
    }
    }
  function TURN_OFF_PIN4()
    {
      
    if(WB_Pin4 === "1")
    {
      console.log("tac dong Pin4_OFF!!!");
      if(ModeP4 === "Tg")
      {
         //doTimer();
         ChannelPin[3] = 1; // dem phan timer dinh time
         readytime = 1; 
         document.getElementById("respondP4V1").innerHTML = "Sending..";
         checkTimeOut4 = 1;
         
         PinCh4 = 1; // nhan biet kenh phan upload
         checkPinNo4 = 4; // cho dk duo ESP nhan ve
         statusPin4 = "0";
        
        
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo4 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin4, true);
        
        xhttp.send();
      }
    else if(ModeP4 === "Pw")
    {
     
      ChannelPin[3] = 1; // dem phan timer dinh time
      readytime = 1; 
      document.getElementById("respondP4V1").innerHTML = "Sending..";
      checkTimeOut4 = 1;

      checkPinNo4 = 4; // cho dk duo ESP nhan ve
      statusPin4 = "0";
      
      var xhttp = new XMLHttpRequest();
      xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo4 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin4, true); 
      xhttp.send();
    }
    }
    
    }
  function TURN_ON_PIN4()
    {
    if(WB_Pin4 == "0")
    {
      console.log("tac dong PIN4_ON!!!");
      if(ModeP4 == "Tg")
      {
        //doTimer();
        ChannelPin[3] = 1; // dem phan timer dinh time
        readytime = 1; 
        document.getElementById("respondP4V1").innerHTML = "Sending..";
        checkTimeOut4 = 1;
        
        PinCh4 = 1;  // nhan biet kenh phan upload
        checkPinNo4 = 4; // cho dk duo ESP nhan ve
        statusPin4 = "1";
         
         var xhttp = new XMLHttpRequest();
         xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo4 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin4, true);
        
        xhttp.send();
      }
      else if(ModeP4 == "Sw")
      {
        statusPin4 = 1;
        document.getElementById("respondP4V1").innerHTML = "Sending..";
        
        checkPinNo4 = 4; // cho dk duo ESP nhan ve
        PinCh4 = 1; // nhan biet kenh cho Upload
        PinCh4UpSw = 1; // upload
        // timer
        //doTimer();
        ChannelPin[3] = 1; // dem phan timer dinh time
        readytime = 1;
        checkTimeOut4Sw =0;
        
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/push?Pin="+ checkPinNo4 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin4, true); 
        xhttp.send();
      }
    else if(ModeP4 == "Pw")
    {
    
      ChannelPin[3] = 1; // dem phan timer dinh time
      readytime = 1; 
      document.getElementById("respondP4V1").innerHTML = "Sending..";
      checkTimeOut4 = 1;
        
      checkPinNo4 = 4; // cho dk duo ESP nhan ve
      statusPin4 = "1";//
        
      var xhttp = new XMLHttpRequest();
      xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo4 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin4, true); 
      xhttp.send();
    }
    }
  }
  function TURN_OFF_PIN5()
    {
    if(WB_Pin5 === "1")
    {
      console.log("tac dong Pin5_OFF!!!");
      if(ModeP5 === "Tg")
      {
        ///doTimer();
        ChannelPin[4] = 1; // dem phan timer dinh time
        readytime =1;
        document.getElementById("respondP5V1").innerHTML = "Sending..";
        checkTimeOut5 = 1;
        
        PinCh5 = 1; // nhan biet kenh phan upload
        checkPinNo5 = 5; // cho dk duo ESP nhan ve
        statusPin5 = "0";
        
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo5 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin5, true);
        xhttp.send();
      }
    else if(ModeP5 === "Pw")
    {
     
      ChannelPin[4] = 1; // dem phan timer dinh time
      readytime = 1; 
      document.getElementById("respondP5V1").innerHTML = "Sending..";
      checkTimeOut5 = 1;

      checkPinNo5 = 5; // cho dk duo ESP nhan ve
      statusPin5 = "0";
      
      var xhttp = new XMLHttpRequest();
      xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo5 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin5, true); 
      xhttp.send();
    }
    }
   }
  function TURN_ON_PIN5()
    {
    if(WB_Pin5 == "0")
    {
      console.log("tac dong PIN5_ON!!!");
      if(ModeP5 === "Tg")
      {
         //doTimer();
         ChannelPin[4] = 1; // dem phan timer dinh time
         readytime =1;
         document.getElementById("respondP5V1").innerHTML = "Sending..";
         checkTimeOut5 = 1;
         
         PinCh5 = 1; // nhan biet kenh phan upload
         checkPinNo5 = 5; // cho dk duo ESP nhan ve
         statusPin5 = "1";
        
        var xhttp = new XMLHttpRequest();
         xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo5 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin5, true);
         xhttp.send();
      }
      else if(ModeP5 === "Sw")
      {
        statusPin5 = 1;
        document.getElementById("respondP5V1").innerHTML = "Sending..";
        
        checkPinNo5 = 5; // cho dk duo ESP nhan ve
        PinCh5 = 1; // nhan biet kenh cho Upload
        PinCh5UpSw = 1; // upload
        // timer
        //doTimer();
        ChannelPin[4] = 1; // dem phan timer dinh time
        readytime = 1;
        checkTimeOut5Sw =0;
        
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/push?Pin="+ checkPinNo5 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin5, true); 
        xhttp.send();
      }
    else if(ModeP5 === "Pw")
    {
    
      ChannelPin[4] = 1; // dem phan timer dinh time
      readytime = 1; 
      document.getElementById("respondP5V1").innerHTML = "Sending..";
      checkTimeOut5 = 1;
        
      checkPinNo5 = 5; // cho dk duo ESP nhan ve
      statusPin5 = "1";//
        
      var xhttp = new XMLHttpRequest();
      xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo5 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin5, true); 
      xhttp.send();
    }
    }
    }
  function TURN_OFF_PIN6()
    {
    if(WB_Pin6 == "1")
    {
      console.log("tac dong Pin6_OFF!!!");
      if(ModeP6 == "Tg")
      {
        //doTimer();
        ChannelPin[5] = 1; // dem phan timer dinh time
        readytime =1;
        document.getElementById("respondP6V1").innerHTML = "Sending..";
        checkTimeOut6 = 1;
        
        PinCh6 = 1; // nhan biet kenh phan upload
        checkPinNo6 = 6; // cho dk duo ESP nhan ve
        statusPin6 = "0";
        
        var xhttp = new XMLHttpRequest();
         xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo6 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin6, true);
        
         xhttp.send();
      }
    else if(ModeP6 === "Pw")
    {
     
      ChannelPin[5] = 1; // dem phan timer dinh time
      readytime = 1; 
      document.getElementById("respondP6V1").innerHTML = "Sending..";
      checkTimeOut6 = 1;

      checkPinNo6 = 6; // cho dk duo ESP nhan ve
      statusPin6 = "0";
      
      var xhttp = new XMLHttpRequest();
      xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo6 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin6, true); 
      xhttp.send();
    }
    }
    }
  function TURN_ON_PIN6()
    {
    if(WB_Pin6 == "0")
    {
      console.log("tac dong PIN6_ON!!!");
      if(ModeP6 === "Tg")
      {
        //doTimer();
        ChannelPin[5] = 1; // dem phan timer dinh time
        readytime =1;
        document.getElementById("respondP6V1").innerHTML = "Sending..";
        checkTimeOut6 = 1;
        
        PinCh6 = 1; // nhan biet kenh phan upload
        checkPinNo6 = 6; // cho dk duo ESP nhan ve
        statusPin6 = "1";
        
        var xhttp = new XMLHttpRequest();
         xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo6 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin6, true);
        
        xhttp.send();
      }
      else if(ModeP6 === "Sw")
      {
        statusPin6 = 1;
        document.getElementById("respondP6V1").innerHTML = "Sending..";
        
        checkPinNo6 = 6; // cho dk duo ESP nhan ve
        PinCh6 = 1; // nhan biet kenh cho Upload
        PinCh6UpSw = 1; // upload
        // timer
        //doTimer();
        ChannelPin[5] = 1; // dem phan timer dinh time
        readytime = 1;
        checkTimeOut6Sw =0;
        
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/push?Pin="+ checkPinNo6 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin6, true); 
        xhttp.send();
      }
    else if(ModeP6 === "Pw")
    {
    
      ChannelPin[5] = 1; // dem phan timer dinh time
      readytime = 1; 
      document.getElementById("respondP6V1").innerHTML = "Sending..";
      checkTimeOut6 = 1;
        
      checkPinNo6 = 6; // cho dk duo ESP nhan ve
      statusPin6 = "1";//
        
      var xhttp = new XMLHttpRequest();
      xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo6 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin6, true); 
      xhttp.send();
    }
    }
    }
  function TURN_OFF_PIN7()
    {
        if(WB_Pin7 == "1")
    {
       console.log("tac dong Pin7_OFF!!!");
      if(ModeP7 === "Tg")
      {
        //doTimer();
        ChannelPin[6] = 1; // dem phan timer dinh time
        readytime =1;
        document.getElementById("respondP7V1").innerHTML = "Sending..";
        checkTimeOut7 = 1;
        
         PinCh7 = 1; // nhan biet kenh phan upload
         checkPinNo7 = 7; // cho dk duo ESP nhan ve
         statusPin7 = "0";
        
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo7 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin7, true);
        
        xhttp.send();
      }
    else if(ModeP7 === "Pw")
    {
     
      ChannelPin[6] = 1; // dem phan timer dinh time
      readytime = 1; 
      document.getElementById("respondP7V1").innerHTML = "Sending..";
      checkTimeOut7 = 1;

      checkPinNo7 = 7; // cho dk duo ESP nhan ve
      statusPin7 = "0";
      
      var xhttp = new XMLHttpRequest();
      xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo7 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin7, true); 
      xhttp.send();
    }
    }
    }
  function TURN_ON_PIN7()
    {
    if(WB_Pin7 == "0")
    {
      console.log("tac dong PIN7_ON!!!");
      if(ModeP7 === "Tg")
      {
        //doTimer();
        ChannelPin[6] = 1; // dem phan timer dinh time
        readytime =1;
        document.getElementById("respondP7V1").innerHTML = "Sending..";
        checkTimeOut7 = 1;
        
         PinCh7 = 1; // nhan biet kenh phan upload
         checkPinNo7 = 7; // cho dk duo ESP nhan ve
         statusPin7 = "1";
         
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo7 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin7, true);
        xhttp.send();
      }
      else if(ModeP7 === "Sw")
      {
        statusPin7 = 1;
        document.getElementById("respondP7V1").innerHTML = "Sending..";
        
        checkPinNo7 = 7; // cho dk duo ESP nhan ve
        PinCh7 = 1; // nhan biet kenh cho Upload
        PinCh7UpSw = 1; // upload
        // timer
        //doTimer();
        ChannelPin[6] = 1; // dem phan timer dinh time
        readytime = 1;
        checkTimeOut7Sw =0;
        
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/push?Pin="+ checkPinNo7 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin7, true); 
        xhttp.send();
      }
    else if(ModeP7 === "Pw")
    {
      ChannelPin[6] = 1; // dem phan timer dinh time
      readytime = 1; 
      document.getElementById("respondP7V1").innerHTML = "Sending..";
      checkTimeOut7 = 1;
        
      checkPinNo7 = 7; // cho dk duo ESP nhan ve
      statusPin7 = "1";//
        
      var xhttp = new XMLHttpRequest();
      xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo7 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin7, true); 
      xhttp.send();
    }
    }
    }
  function TURN_OFF_PIN8()
    {
    if(WB_Pin8 == "1")
    {
      console.log("tac dong Pin8_OFF!!!");
      if(ModeP8 === "Tg")
      {
        //doTimer();
        ChannelPin[7] = 1; // dem phan timer dinh time
        readytime =1;
        document.getElementById("respondP8V1").innerHTML = "Sending..";
        checkTimeOut8 = 1;
        
        PinCh8 = 1;
         checkPinNo8 = 8; // cho dk duo ESP nhan ve
         statusPin8 = "0";
         
         var xhttp = new XMLHttpRequest();
         xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo8 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin8, true);
         
        xhttp.send();
      }
    else if(ModeP8 === "Pw")
    {
      ChannelPin[7] = 1; // dem phan timer dinh time
      readytime = 1; 
      document.getElementById("respondP8V1").innerHTML = "Sending..";
      checkTimeOut8 = 1;

      checkPinNo8 = 8; // cho dk duo ESP nhan ve
      statusPin8 = "0";
      
      var xhttp = new XMLHttpRequest();
      xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo8 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin8, true); 
      xhttp.send();
    }
    }
    }
  function TURN_ON_PIN8()
    {
    if(WB_Pin8 == "0")
    {
      console.log("tac dong PIN8_ON!!!");
      if(ModeP8 == "Tg")
      {
        //doTimer();
        ChannelPin[7] = 1; // dem phan timer dinh time
        readytime =1;
        document.getElementById("respondP8V1").innerHTML = "Sending..";
        checkTimeOut8 = 1;
        
        PinCh8 = 1; // nhan biet kenh phan upload
        checkPinNo8 = 8; // cho dk duo ESP nhan ve
         statusPin8 = "1";
         
         var xhttp = new XMLHttpRequest();
         xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo8 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin8, true);
        xhttp.send();
      }
      else if(ModeP8 == "Sw")
      {
        statusPin8 = 1;
        document.getElementById("respondP8V1").innerHTML = "Sending..";
        
        checkPinNo8 = 8; // cho dk duo ESP nhan ve
        PinCh8 = 1; // nhan biet kenh cho Upload
        PinCh8UpSw = 1; // upload
        // timer
        //doTimer();
        ChannelPin[7] = 1; // dem phan timer dinh time
        readytime = 1;
        checkTimeOut8Sw =0;
        
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/push?Pin="+ checkPinNo8 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin8, true); 
        xhttp.send();
      }
    else if(ModeP8 === "Pw")
    {
      ChannelPin[7] = 1; // dem phan timer dinh time
      readytime = 1; 
      document.getElementById("respondP8V1").innerHTML = "Sending..";
      checkTimeOut8 = 1;
        
      checkPinNo8 = 8; // cho dk duo ESP nhan ve
      statusPin8 = "1";//
        
      var xhttp = new XMLHttpRequest();
      xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo8 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin8, true); 
      xhttp.send();
    }
    }
    }
  
  // PHAN NAY LA PHAN INPUT
  function INT_TURN_OFF_PIN2()
  {
    console.log("tac dong GPIO1_OFF!!!");
    if(document.getElementById("respondP2V1").innerHTML != "Disconnect")
    {
      if(ModeP2 == "B")
      {
        if(PinCh2)
        {
          readytime = 1; 
          ChannelPin[1] = 1; // dem phan timer dinh time
          document.getElementById("respondP2V1").innerHTML = "Sending..";
          checkTimeOut2 = 1; // chay vao phan timer
          PinCh2OneTime =1; // khoi dong de check timer cho phan truyen di success or faile
          
          PinCh2 = 0; // nhan biet kenh upload
          checkPinNo2 = 2; // cho dk duo ESP nhan ve
          statusPin2 = "0";
          
           var xhttp = new XMLHttpRequest();
           xhttp.open("GET", "/api/button?Pin="+ checkPinNo2 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin2, true); 
           xhttp.send();
        }
      }
    }
  }
  
  function INT_TURN_ON_PIN2()
  {
    console.log("tac dong GPIO1_ON!!!");
    console.log("ModeP2 " + ModeP2);
    if(document.getElementById("respondP2V1").innerHTML != "Disconnect")
    {
      if(ModeP2 == "B")
      {
        if(PinCh2 ==0)
        {
          readytime = 1; 
          ChannelPin[1] = 1; // dem phan timer dinh time
          document.getElementById("respondP2V1").innerHTML = "Sending..";
          checkTimeOut2 = 1; // chay vao phan timer
          PinCh2OneTime =1; // khoi dong de check timer cho phan truyen di success or faile
             
          PinCh2 = 1; // nhan biet kenh upload - off
          checkPinNo2 = 2; // cho dk duo ESP nhan ve
          statusPin2 = "1";// 
            
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/button?Pin="+ checkPinNo2 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin2, true); 
          xhttp.send();
        }
      }
    }
  }
  
  function INT_TURN_OFF_PIN3()
  {
    console.log("tac dong Pin3_OFF!!!");
    if(document.getElementById("respondP3V1").innerHTML != "Disconnect")
    {
      if(ModeP3 == "B")
      {
        if(PinCh3)
        {
          readytime = 1; // cho phep nhay vao phan timer de bat dau dem khi click
          ChannelPin[2] = 1; // phan dem timer chan nao
          checkTimeOut3 = 1; // phan check co phai a timeOut ko
          PinCh3OneTime = 1; // khoi dong 1 lan khi upload
          document.getElementById("respondP3V1").innerHTML = "Sending..";
          
          PinCh3 = 0; // trong phan upload ko tac dong
          checkPinNo3 = 3; // cho dk duo ESP nhan ve
          statusPin3 = "0";// 
          
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/button?Pin="+ checkPinNo3 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin3, true); 
          xhttp.send();
          
        }
      }
    }
  }
  
  function INT_TURN_ON_PIN3()
  {
    console.log("tac dong PIN3_ON!!!");
    if(document.getElementById("respondP3V1").innerHTML != "Disconnect")
    {
      if(ModeP3 == "B")
      {
        if(PinCh3 == 0)
        {
          readytime = 1;
          ChannelPin[2] = 1; // dem phan timer dinh time
          checkTimeOut3 = 1;  // chay vao phan timer
          PinCh3OneTime =1; // khoi dong de check timer cho phan truyen di success or faile
          document.getElementById("respondP3V1").innerHTML = "Sending..";
          
          PinCh3 = 1; // nhan biet kenh upload - off
          checkPinNo3 = 3; // cho dk duo ESP nhan ve
          statusPin3 = "1";// 
          
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/button?Pin="+ checkPinNo3 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin3, true); 
          xhttp.send();
        }
      }
    }
  }
  
  function INT_TURN_OFF_PIN4()
  {
    if(document.getElementById("respondP4V1").innerHTML != "Disconnect")
    {
      if(ModeP4 == "B")
      {
        if(PinCh4)
        {
          readytime = 1; 
          ChannelPin[3] = 1; // dem phan timer dinh time
          document.getElementById("respondP4V1").innerHTML = "Sending..";
          checkTimeOut4 = 1; // chay vao phan timer
          PinCh4OneTime =1; // khoi dong de check timer cho phan truyen di success or faile
          
          PinCh4 = 0; // nhan biet kenh upload
          checkPinNo4 = 4; // cho dk duo ESP nhan ve
          statusPin4 = "0";
          
           var xhttp = new XMLHttpRequest();
           xhttp.open("GET", "/api/button?Pin="+ checkPinNo4 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin4, true); 
           xhttp.send();
        }
      }
    }
  }
  
  function INT_TURN_ON_PIN4()
  {
    if(document.getElementById("respondP4V1").innerHTML != "Disconnect")
    {
      if(ModeP4 == "B")
      {
        if(PinCh4 ==0)
        {
          readytime = 1; 
          ChannelPin[3] = 1; // dem phan timer dinh time
          document.getElementById("respondP4V1").innerHTML = "Sending..";
          checkTimeOut4 = 1; // chay vao phan timer
          PinCh4OneTime =1; // khoi dong de check timer cho phan truyen di success or faile
             
          PinCh4 = 1; // nhan biet kenh upload - off
          checkPinNo4 = 4; // cho dk duo ESP nhan ve
          statusPin4 = "1";// 
            
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/button?Pin="+ checkPinNo4 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin4, true); 
          xhttp.send();
        }
      }
    }
  }
  
  function INT_TURN_OFF_PIN5()
  {
    if(document.getElementById("respondP5V1").innerHTML != "Disconnect")
    {
      if(ModeP5 == "B")
      {
        if(PinCh5)
        {
          readytime = 1; 
          ChannelPin[4] = 1; // dem phan timer dinh time
          document.getElementById("respondP5V1").innerHTML = "Sending..";
          checkTimeOut5 = 1; // chay vao phan timer
          PinCh5OneTime =1; // khoi dong de check timer cho phan truyen di success or faile
          
          PinCh5 = 0; // nhan biet kenh upload
          checkPinNo5 = 5; // cho dk duo ESP nhan ve
          statusPin5 = "0";
          
           var xhttp = new XMLHttpRequest();
           xhttp.open("GET", "/api/button?Pin="+ checkPinNo5 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin5, true); 
           xhttp.send();
        }
      }
    }
  }
  
  function INT_TURN_ON_PIN5()
  {
    if(document.getElementById("respondP5V1").innerHTML != "Disconnect")
    {
      if(ModeP5 == "B")
      {
        if(PinCh5 ==0)
        {
          readytime = 1; 
          ChannelPin[4] = 1; // dem phan timer dinh time
          document.getElementById("respondP5V1").innerHTML = "Sending..";
          checkTimeOut5 = 1; // chay vao phan timer
          PinCh5OneTime =1; // khoi dong de check timer cho phan truyen di success or faile
             
          PinCh5 = 1; // nhan biet kenh upload - off
          checkPinNo5 = 5; // cho dk duo ESP nhan ve
          statusPin5 = "1";// 
            
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/button?Pin="+ checkPinNo5 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin5, true); 
          xhttp.send();
        }
      }
    }
  }
  
  function INT_TURN_OFF_PIN6()
  {
    if(document.getElementById("respondP6V1").innerHTML != "Disconnect")
    {
      if(ModeP6 == "B")
      {
        if(PinCh6)
        {
          readytime = 1; 
          ChannelPin[5] = 1; // dem phan timer dinh time
          document.getElementById("respondP6V1").innerHTML = "Sending..";
          checkTimeOut6 = 1; // chay vao phan timer
          PinCh6OneTime =1; // khoi dong de check timer cho phan truyen di success or faile
          
          PinCh6 = 0; // nhan biet kenh upload
          checkPinNo6 = 6; // cho dk duo ESP nhan ve
          statusPin6 = "0";
          
           var xhttp = new XMLHttpRequest();
           xhttp.open("GET", "/api/button?Pin="+ checkPinNo6 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin6, true); 
           xhttp.send();
        }
      }
    }
  }
  
  function INT_TURN_ON_PIN6()
  {
    if(document.getElementById("respondP6V1").innerHTML != "Disconnect")
    {
      if(ModeP6 == "B")
      {
        if(PinCh6 ==0)
        {
          readytime = 1; 
          ChannelPin[5] = 1; // dem phan timer dinh time
          document.getElementById("respondP6V1").innerHTML = "Sending..";
          checkTimeOut6 = 1; // chay vao phan timer
          PinCh6OneTime =1; // khoi dong de check timer cho phan truyen di success or faile
             
          PinCh6 = 1; // nhan biet kenh upload - off
          checkPinNo6 = 6; // cho dk duo ESP nhan ve
          statusPin6 = "1";// 
            
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/button?Pin="+ checkPinNo6 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin6, true); 
          xhttp.send();
        }
      }
    }
  }
  
  function INT_TURN_OFF_PIN7()
  {
    console.log(document.getElementById("respondP7V1").innerHTML);
    console.log(document.getElementById("respondP7V2").innerHTML);
    console.log(ModeP7);
    console.log("PinCh7" + PinCh7);
    document.getElementById("respondP7V1").innerHTML = "Sending..";
    if(document.getElementById("respondP7V1").innerHTML != "Disconnect")
    {
      if(ModeP7 == "B")
      {
        if(PinCh7)
        {
           console.log("nhay vao phan cuoi OFF");
          readytime = 1; 
          ChannelPin[6] = 1; // dem phan timer dinh time
          document.getElementById("respondP7V1").innerHTML = "Sending..";
          checkTimeOut7 = 1; // chay vao phan timer
          PinCh7OneTime =1; // khoi dong de check timer cho phan truyen di success or faile
          
          PinCh7 = 0; // nhan biet kenh upload
          checkPinNo7 = 7; // cho dk duo ESP nhan ve
          statusPin7 = "0";
          
           var xhttp = new XMLHttpRequest();
           xhttp.open("GET", "/api/button?Pin="+ checkPinNo7 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin7, true); 
           xhttp.send();
           console.log("ket thuc nhay vao phan cuoi OFF");
        }
      }
    }
  }
  
  function INT_TURN_ON_PIN7()
  {
    console.log(document.getElementById("respondP7V1").innerHTML);
    console.log(document.getElementById("respondP7V2").innerHTML);
    console.log(ModeP7);
    console.log("PinCh7" + PinCh7);
    document.getElementById("respondP7V1").innerHTML = "Sending..";
    if(document.getElementById("respondP7V1").innerHTML != "Disconnect")
    {
      if(ModeP7 == "B")
      {
        if(PinCh7 ==0)
        {
         console.log("nhay vao phan cuoi ON");
          readytime = 1; 
          ChannelPin[6] = 1; // dem phan timer dinh time
          document.getElementById("respondP7V1").innerHTML = "Sending..";
          checkTimeOut7 = 1; // chay vao phan timer
          PinCh7OneTime =1; // khoi dong de check timer cho phan truyen di success or faile
             
          PinCh7 = 1; // nhan biet kenh upload - off
          checkPinNo7 = 7; // cho dk duo ESP nhan ve
          statusPin7 = "1";// 
            
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/button?Pin="+ checkPinNo7 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin7, true); 
          xhttp.send();
           console.log(" ket thuc nhay vao phan cuoi ON");
        }
      }
    }
  }
  
  function INT_TURN_OFF_PIN8()
  {
    if(document.getElementById("respondP8V1").innerHTML != "Disconnect")
    {
      if(ModeP8 == "B")
      {
        if(PinCh8)
        {
          readytime = 1; 
          ChannelPin[7] = 1; // dem phan timer dinh time
          document.getElementById("respondP8V1").innerHTML = "Sending..";
          checkTimeOut8 = 1; // chay vao phan timer
          PinCh8OneTime =1; // khoi dong de check timer cho phan truyen di success or faile
          
          PinCh8 = 0; // nhan biet kenh upload
          checkPinNo8 = 8; // cho dk duo ESP nhan ve
          statusPin8 = "0";
          
           var xhttp = new XMLHttpRequest();
           xhttp.open("GET", "/api/button?Pin="+ checkPinNo8 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin8, true); 
           xhttp.send();
        }
      }
    }
  }
  
  function INT_TURN_ON_PIN8()
  {
    if(document.getElementById("respondP8V1").innerHTML != "Disconnect")
    {
      if(ModeP8 == "B")
      {
        if(PinCh8 ==0)
        {
          readytime = 1; 
          ChannelPin[7] = 1; // dem phan timer dinh time
          document.getElementById("respondP8V1").innerHTML = "Sending..";
          checkTimeOut8 = 1; // chay vao phan timer
          PinCh8OneTime =1; // khoi dong de check timer cho phan truyen di success or faile
             
          PinCh8 = 1; // nhan biet kenh upload - off
          checkPinNo8 = 8; // cho dk duo ESP nhan ve
          statusPin8 = "1";// 
            
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/button?Pin="+ checkPinNo8 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin8, true); 
          xhttp.send();
        }
      }
    }
  }
  
  function stopCount()
  {
    clearTimeout(t);
    timer_is_on=0;
    
  } 
  
  
  function timedCount()
  {
    <!-- khi dem timeer thi chay trong phan nay -->
     
    //t=setTimeout("timedCount()",500);
    
    count_timer++;
    switch (count_timer)
    {
      case 6:
          count_timer=0;
          if(GlobalCheckTimeOut - LastGlobalCheckTimeOut > 0)
          {
            GlobalCheckTimeOut =0;
            LastGlobalCheckTimeOut = 0;
            LastGlobalCheckTimeOut = GlobalCheckTimeOut;
            if(ModeP1 == "Tg" || ModeP1 == "Sw" || ModeP1 == "Pw")
            {
              if(document.getElementById("respondP1V1").innerHTML == "Disconnect")
              document.getElementById("respondP1V1").innerHTML = "";
            }
            else 
            {
              if(document.getElementById("Int_respondP1V1").innerHTML == "Disconnect")
              document.getElementById("Int_respondP1V1").innerHTML = "";
            }
            if(ModeP2 == "Tg" || ModeP2 == "Sw" || ModeP2 == "Pw")
            {
              if(document.getElementById("respondP2V1").innerHTML == "Disconnect")
                document.getElementById("respondP2V1").innerHTML = ""; 
            }
            else 
            {
              if(document.getElementById("Int_respondP2V1").innerHTML == "Disconnect")
                document.getElementById("Int_respondP2V1").innerHTML = ""; 
            }
            if(ModeP3 == "Tg" || ModeP3 == "Sw" || ModeP3 == "Pw")
            {
              if(document.getElementById("respondP3V1").innerHTML == "Disconnect")
                document.getElementById("respondP3V1").innerHTML = "";
            }
            else
            {
              if(document.getElementById("Int_respondP3V1").innerHTML == "Disconnect")
                document.getElementById("Int_respondP3V1").innerHTML = "";
            }
            if(ModeP4 == "Tg" || ModeP4 == "Sw" || ModeP4 == "Pw")
            {
              if(document.getElementById("respondP4V1").innerHTML == "Disconnect")
                document.getElementById("respondP4V1").innerHTML = "";
            }
            else 
            {
              if(document.getElementById("Int_respondP4V1").innerHTML == "Disconnect")
                document.getElementById("Int_respondP4V1").innerHTML = "";
            }
            if(ModeP5 == "Tg" || ModeP5 == "Sw" || ModeP5 == "Pw")
            {
              if(document.getElementById("respondP5V1").innerHTML == "Disconnect")
                document.getElementById("respondP5V1").innerHTML = "";
            }
            else 
            {
              if(document.getElementById("Int_respondP5V1").innerHTML == "Disconnect")
                document.getElementById("Int_respondP5V1").innerHTML = "";
            }
            if(ModeP6 == "Tg" || ModeP6 == "Sw" || ModeP6 == "Pw")
            {
              if(document.getElementById("respondP6V1").innerHTML == "Disconnect")
                document.getElementById("respondP6V1").innerHTML = ""; 
            }
            else 
            {
              if(document.getElementById("Int_respondP6V1").innerHTML == "Disconnect")
                document.getElementById("Int_respondP6V1").innerHTML = ""; 
            }
            if(ModeP7 == "Tg" || ModeP7 == "Sw" || ModeP7 == "Pw")
            {
              if(document.getElementById("respondP7V1").innerHTML == "Disconnect")
                document.getElementById("respondP7V1").innerHTML = "";
            }
            else 
            {
              if(document.getElementById("Int_respondP7V1").innerHTML == "Disconnect")
                document.getElementById("Int_respondP7V1").innerHTML = "";
            }
            if(ModeP8 == "Tg" || ModeP8 =="Sw" || ModeP8 == "Pw")
            {
              if(document.getElementById("respondP8V1").innerHTML == "Disconnect")
                document.getElementById("respondP8V1").innerHTML = "";
            }
            else 
            {
              if(document.getElementById("Int_respondP8V1").innerHTML == "Disconnect")
                document.getElementById("Int_respondP8V1").innerHTML = "";
            } 
          }
          else {
            GlobalCheckTimeOut =0;
            LastGlobalCheckTimeOut = 0;
            LastGlobalCheckTimeOut = GlobalCheckTimeOut;
            if(ModeP1 == "Tg" || ModeP1 == "Sw" || ModeP1 == "Pw")
              document.getElementById("respondP1V1").innerHTML = "Disconnect";
            else  document.getElementById("Int_respondP1V1").innerHTML = "Disconnect";
            
            if(ModeP2 == "Tg" || ModeP2 == "Sw" || ModeP2 == "Pw")
              document.getElementById("respondP2V1").innerHTML = "Disconnect"; 
            else document.getElementById("Int_respondP2V1").innerHTML = "Disconnect";
            
            if(ModeP3 == "Tg" || ModeP3 == "Sw" || ModeP3 == "Pw")
              document.getElementById("respondP3V1").innerHTML = "Disconnect"; 
            else  document.getElementById("Int_respondP3V1").innerHTML = "Disconnect";
            
            if(ModeP4 == "Tg" || ModeP4 == "Sw" || ModeP4 == "Pw")
              document.getElementById("respondP4V1").innerHTML = "Disconnect"; 
            else document.getElementById("Int_respondP4V1").innerHTML = "Disconnect";
            
            if(ModeP5 == "Tg" || ModeP5 == "Sw" || ModeP5 == "Pw")
              document.getElementById("respondP5V1").innerHTML = "Disconnect"; 
            else document.getElementById("Int_respondP5V1").innerHTML = "Disconnect";
            
            if(ModeP6 == "Tg" || ModeP6 == "Sw" || ModeP6 == "Pw")
              document.getElementById("respondP6V1").innerHTML = "Disconnect"; 
            else document.getElementById("Int_respondP6V1").innerHTML = "Disconnect"; 
            
            if(ModeP7 == "Tg" || ModeP7 == "Sw" || ModeP7 == "Pw")
              document.getElementById("respondP7V1").innerHTML = "Disconnect";
            else  document.getElementById("Int_respondP7V1").innerHTML = "Disconnect";
            
            if(ModeP8 == "Tg" || ModeP8 == "Sw" || ModeP8 == "Pw")
              document.getElementById("respondP8V1").innerHTML = "Disconnect";
            else  document.getElementById("Int_respondP8V1").innerHTML = "Disconnect";
          }
          break;
    }
    if(readytime)
    {
       console.log("nhay vao time readytime chua?");
      if(ModeP1 === "Tg")
      {
        if(ChannelPin[0])
        {
      itimeCh1++;
      console.log("itimeCh1: "+ itimeCh1);
      if(checkTimeOut1)
      {
        if(itimeCh1 === Low_Asymptote)
        {
          document.getElementById("respondP1V1").innerHTML = "timeOut";    
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo1 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin1, true); 
          xhttp.send();
          console.log("gui lai lan 1");
        }
       
        if(itimeCh1 >= Upper_Asymptote) 
        {
          itimeCh1 = 0;
          ChannelPin[0] = 0;
          document.getElementById("respondP1V1").innerHTML = "Disconnect";
        }
      }
      else 
      {
        if(itimeCh1 >= Limit_Finish)
        {
          itimeCh1 = 0;
          ChannelPin[0] = 0;
          document.getElementById("respondP1V1").innerHTML = "";
        }
      }
        
        }
      }
      else if(ModeP1 === "Sw")
      {
        if(ChannelPin[0])
        {
      if(checkTimeOut1Sw === 0)
      {
          itimeCh1++;
          if(itimeCh1 === Low_Asymptote)
          {
            document.getElementById("respondP1V1").innerHTML = "timeOut";
            var xhttp = new XMLHttpRequest();
            xhttp.open("GET", "/api/push?Pin="+ checkPinNo1 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin1, true); 
            xhttp.send();
          }
          if(itimeCh1 >= Upper_Asymptote)
          {
            itimeCh1 = 0;
            ChannelPin[0] = 0;
            
            document.getElementById("respondP1V1").innerHTML = "Disconnect";
          }
      }
      else{
        itimeCh1 = 0;
        ChannelPin[0] = 0;
      }
        } 
      }
    
      if(ModeP2 === "Tg")
      {
        if(ChannelPin[1])
        {
      itimeCh2++;
      if(checkTimeOut2)
      {
          if(itimeCh2 === Low_Asymptote)
          {
            document.getElementById("respondP2V1").innerHTML = "timeOut";
            var xhttp = new XMLHttpRequest();
            xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo2 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin2, true); 
            xhttp.send();
            console.log("gui lan lan 1 pin 2"); 
          }
          
          if(itimeCh2 >= Upper_Asymptote)
          {
            itimeCh2 = 0;
            ChannelPin[1] = 0;
            document.getElementById("respondP2V1").innerHTML = "Disconnect";
          } 
      }
      else 
      {
          if(itimeCh2 >= Limit_Finish)
          {
          itimeCh2 = 0;
          ChannelPin[1] = 0;
          document.getElementById("respondP2V1").innerHTML = "";
          } 
      }     
        }
      }
      else if(ModeP2 === "Sw")
      {
        if(ChannelPin[1])
        {
      if(checkTimeOut2Sw === 0)
      {
          itimeCh2++;
          if(itimeCh2 === Low_Asymptote)
          {
            document.getElementById("respondP2V1").innerHTML = "timeOut";
            var xhttp = new XMLHttpRequest();
            xhttp.open("GET", "/api/push?Pin="+ checkPinNo2 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin2, true); 
            xhttp.send();
          }
          if(itimeCh2 >= Upper_Asymptote)
          {
          itimeCh2 = 0;
          ChannelPin[1] = 0;
          
          document.getElementById("respondP2V1").innerHTML = "Disconnect";
          }
      }
      else{
        itimeCh2 = 0;
        ChannelPin[1] = 0;
      }
        
        }
      }
    else if(ModeP2 == "Pw")
    {
    if(ChannelPin[1])
    {
      itimeCh2++;
      if(checkTimeOut2) // bij loi
      {
      if(itimeCh2 === Low_Asymptote)
      {
        document.getElementById("respondP2V1").innerHTML = "timeOut";
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo2 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin2, true); 
        xhttp.send();
        console.log("gui lan lan 1 pin 2"); 
      }
      else if(itimeCh2 >= Upper_Asymptote)
      {
        itimeCh2 = 0;
        ChannelPin[1] = 0;
        document.getElementById("respondP2V1").innerHTML = "Disconnect";
      } 
      }
      else 
      {
      if(itimeCh2 >= Limit_Finish)
      {
        itimeCh2 = 0;
        ChannelPin[1] = 0;
        document.getElementById("respondP2V1").innerHTML = "";
      } 
      }
    }
    }
      else if(ModeP2 === "B")
      {
        if(ChannelPin[1])
        {
      itimeCh2++;
      if(checkTimeOut2)
      {
        if(itimeCh2 === Low_Asymptote)
        {
          document.getElementById("Int_respondP2V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/button?Pin="+ checkPinNo2 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin2, true); 
          xhttp.send();
          console.log("gui lan lan 1 pin 2"); 
        }
        
        if(itimeCh2 >= Upper_Asymptote)
        {
          itimeCh2 = 0;
          ChannelPin[1] = 0;
          document.getElementById("Int_respondP2V1").innerHTML = "Disconnect";
        } 
      }
      else 
      {
        if(itimeCh2 >= Limit_Finish)
        {
          itimeCh2 = 0;
          ChannelPin[1] = 0;
          document.getElementById("Int_respondP2V1").innerHTML = "";
        } 
      }     
        }
      }
      
      if(ModeP3 === "Tg")
      {
        if(ChannelPin[2])
        {
      itimeCh3++;
      if(checkTimeOut3)
      {
        if(itimeCh3 === Low_Asymptote)
        {
          document.getElementById("respondP3V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo3 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin3, true);
          xhttp.send();
          console.log("gui lan 1 pin 3");
        }
        
        if(itimeCh3 >= Upper_Asymptote)
        {
          itimeCh3 = 0;
          ChannelPin[2] = 0;
          document.getElementById("respondP3V1").innerHTML = "Disconnect";
        }
      }
      else
      {
        if(itimeCh3 >= Limit_Finish)
        {
          itimeCh3 = 0;
          ChannelPin[2] = 0;
          document.getElementById("respondP3V1").innerHTML = "";
        }
      }
        
        }
      }
      else if(ModeP3 === "Sw")
      {
        if(ChannelPin[2])
        {
      if(checkTimeOut3Sw === 0)
      {
          itimeCh3++;
          if(itimeCh3 === Low_Asymptote)
          {
            document.getElementById("respondP3V1").innerHTML = "timeOut";
            var xhttp = new XMLHttpRequest();
            xhttp.open("GET", "/api/push?Pin="+ checkPinNo3 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin3, true); 
            xhttp.send();
          }
          if(itimeCh3 >= Upper_Asymptote)
          {
            itimeCh3 = 0;
            ChannelPin[2] = 0;
            
            document.getElementById("respondP3V1").innerHTML = "Disconnect";
          }
      }
      else
      {
        itimeCh3 = 0;
        ChannelPin[2] = 0;
      }
        }
      }
    else if(ModeP3 == "Pw")
    {
    if(ChannelPin[2])
    {
      itimeCh3++;
      if(checkTimeOut3) // bij loi
      {
      if(itimeCh3 === Low_Asymptote)
      {
        document.getElementById("respondP3V1").innerHTML = "timeOut";
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo3 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin3, true); 
        xhttp.send();
        console.log("gui lan lan 1 pin 3"); 
      }
      else if(itimeCh3 >= Upper_Asymptote)
      {
        itimeCh3 = 0;
        ChannelPin[2] = 0;
        document.getElementById("respondP3V1").innerHTML = "Disconnect";
      } 
      }
      else 
      {
      if(itimeCh3 >= Limit_Finish)
      {
        itimeCh3 = 0;
        ChannelPin[2] = 0;
        document.getElementById("respondP3V1").innerHTML = "";
      } 
      }
    }
    }
      else if(ModeP3 === "B")
      {
        if(ChannelPin[2])
        {
          itimeCh3++;
          if(checkTimeOut3)
          {
            if(itimeCh3 === Low_Asymptote)
            {
              document.getElementById("Int_respondP3V1").innerHTML = "timeOut";
              var xhttp = new XMLHttpRequest();
              xhttp.open("GET", "/api/button?Pin="+ checkPinNo3 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin3, true); 
              xhttp.send();
              console.log("gui lan lan 1 pin 3");
            }
            else if(itimeCh3 >= Upper_Asymptote)
            {
              itimeCh3 = 0;
              ChannelPin[2] = 0;
              document.getElementById("Int_respondP3V1").innerHTML = "Disconnect";
            }
          }
          else 
          {
            if(itimeCh3 >= Limit_Finish)
            {
              itimeCh3 = 0;
              ChannelPin[2] = 0;
              document.getElementById("Int_respondP3V1").innerHTML = "";
            }
          }
        }
      }
      
      if(ModeP4 === "Tg")
      {
        if(ChannelPin[3])
        {
      itimeCh4 = itimeCh4+1;
      if(checkTimeOut4)
      {
        if(itimeCh4 === Low_Asymptote)
        {
        document.getElementById("respondP4V1").innerHTML = "timeOut";
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo4 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin4, true);
      
        xhttp.send();
        console.log("gui lan 1 pin 4");
        }
        if(itimeCh4 >= Upper_Asymptote)
        {
          itimeCh4 = 0;
          ChannelPin[3] = 0;
          document.getElementById("respondP4V1").innerHTML = "Disconnect";
        }
      
      }
      else 
      {
        if(itimeCh4 >= Limit_Finish)
        {
          itimeCh4 = 0;
          ChannelPin[3] = 0;
          document.getElementById("respondP4V1").innerHTML = "";
        }
      }
        }
      }
      else if(ModeP4 === "Sw")
      {
        if(ChannelPin[3])
        {
      if(checkTimeOut4Sw === 0)
      {
        itimeCh4++;
        if(itimeCh4 === Low_Asymptote)
        {
          document.getElementById("respondP4V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/push?Pin="+ checkPinNo4 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin4, true); 
          xhttp.send();
        }
        if(itimeCh4 >= Upper_Asymptote)
        {
          itimeCh4 = 0;
          ChannelPin[3] = 0;
          
          document.getElementById("respondP4V1").innerHTML = "Disconnect";
        }
      }
      else{
        itimeCh4 = 0;
        ChannelPin[3] = 0;
      }
        }
      }
    else if(ModeP4 == "Pw")
    {
    if(ChannelPin[3])
    {
      itimeCh4++;
      if(checkTimeOut4) // bij loi
      {
      if(itimeCh4 === Low_Asymptote)
      {
        document.getElementById("respondP4V1").innerHTML = "timeOut";
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo4 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin4, true); 
        xhttp.send();
        console.log("gui lan lan 1 pin 4"); 
      }
      else if(itimeCh4 >= Upper_Asymptote)
      {
        itimeCh4 = 0;
        ChannelPin[3] = 0;
        document.getElementById("respondP4V1").innerHTML = "Disconnect";
      } 
      }
      else 
      {
      if(itimeCh4 >= Limit_Finish)
      {
        itimeCh4 = 0;
        ChannelPin[3] = 0;
        document.getElementById("respondP4V1").innerHTML = "";
      } 
      }
    }
    }
      else if(ModeP4 === "B")
      {
        if(ChannelPin[3])
        {
      itimeCh4++;
      if(checkTimeOut4)
      {
        if(itimeCh4 === Low_Asymptote)
        {
        document.getElementById("Int_respondP4V1").innerHTML = "timeOut";
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/button?Pin="+ checkPinNo4 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin4, true); 
        xhttp.send();
        console.log("gui lan lan 1 pin 4"); 
        }
        
        else if(itimeCh4 >= Upper_Asymptote)
        {
          itimeCh4 = 0;
          ChannelPin[3] = 0;
          document.getElementById("Int_respondP4V1").innerHTML = "Disconnect";
        } 
      }
      else 
      {
        if(itimeCh4 >= Limit_Finish)
        {
          itimeCh4 = 0;
          ChannelPin[3] = 0;
          document.getElementById("Int_respondP4V1").innerHTML = "";
        } 
      }     
        }
      }
      
      if(ModeP5 === "Tg")
      {
        if(ChannelPin[4])
        {
      itimeCh5 = itimeCh5+1;
      if(checkTimeOut5)
      {
        if(itimeCh5 === Low_Asymptote)
        {
          document.getElementById("respondP5V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
           xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo5 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin5, true);
           xhttp.send();
           console.log("gui lan 1 pin 5");
        }
      
        if(itimeCh5 >= Upper_Asymptote)
        {
        itimeCh5 = 0;
        ChannelPin[4] = 0;
        document.getElementById("respondP5V1").innerHTML = "Disconnect";
        }
      }
      else
      {
        if(itimeCh5 >= Limit_Finish) 
        {
        itimeCh5 = 0;
        ChannelPin[4] = 0;
        document.getElementById("respondP5V1").innerHTML = "";
        }
      }
        }
      }
      else if(ModeP5 === "Sw")
      {
        if(ChannelPin[4])
        {
        if(checkTimeOut5Sw === 0)
        {
          itimeCh5++;
          if(itimeCh5 === Low_Asymptote)
          {
        document.getElementById("respondP5V1").innerHTML = "timeOut";
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/push?Pin="+ checkPinNo5 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin5, true); 
        xhttp.send();
          }
          if(itimeCh5 >= Upper_Asymptote)
          {
        itimeCh5 = 0;
        ChannelPin[4] = 0;
          
          document.getElementById("respondP5V1").innerHTML = "Disconnect";
          }
        }
        else{
          itimeCh5 = 0;
          ChannelPin[4] = 0;
        }
        }
      }
    else if(ModeP5 === "Pw")
    {
    if(ChannelPin[4])
    {
      itimeCh5++;
      if(checkTimeOut5) // bij loi
      {
      if(itimeCh5 === Low_Asymptote)
      {
        document.getElementById("respondP5V1").innerHTML = "timeOut";
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo5 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin5, true); 
        xhttp.send();
        console.log("gui lan lan 1 pin 5"); 
      }
      else if(itimeCh5 >= Upper_Asymptote)
      {
        itimeCh5 = 0;
        ChannelPin[4] = 0;
        document.getElementById("respondP5V1").innerHTML = "Disconnect";
      } 
      }
      else 
      {
      if(itimeCh5 >= Limit_Finish)
      {
        itimeCh5 = 0;
        ChannelPin[4] = 0;
        document.getElementById("respondP5V1").innerHTML = "";
      } 
      }
    }
    }
      else if(ModeP5 === "B")
      {
        if(ChannelPin[4])
        {
        itimeCh5++;
        if(checkTimeOut5)
        {
          if(itimeCh5 === Low_Asymptote)
          {
          document.getElementById("Int_respondP5V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/button?Pin="+ checkPinNo5 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin5, true); 
          xhttp.send();
          console.log("gui lan lan 1 pin 5"); 
          }
          
          else if(itimeCh5 >= Upper_Asymptote)
          {
          itimeCh5 = 0;
          ChannelPin[4] = 0;
          document.getElementById("Int_respondP5V1").innerHTML = "Disconnect";
          } 
        }
        else 
        {
          if(itimeCh5 > Limit_Finish)
          {
          itimeCh5 = 0;
          ChannelPin[4] = 0;
          document.getElementById("Int_respondP5V1").innerHTML = "";
          } 
        }     
        }
      }
      
      if(ModeP6 === "Tg")
      {
        if(ChannelPin[5])
        {
        itimeCh6 = itimeCh6+1;
        if(checkTimeOut6)
        {
          if(itimeCh6 === Low_Asymptote)
          {
          document.getElementById("respondP6V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo6 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin6, true);
        
          xhttp.send();
           console.log("gui lan 1 pin 6");
          
          }
          else if(itimeCh6 >= Upper_Asymptote)
          {
          itimeCh6 = 0;
          ChannelPin[5] = 0;
          document.getElementById("respondP6V1").innerHTML = "Disconnect";
          }
        }
        else
        {
          if(itimeCh6 > Limit_Finish)
          {
          itimeCh6 = 0;
          ChannelPin[5] = 0;
          document.getElementById("respondP6V1").innerHTML = "";
          }
        }
        
        }
      }
      else if(ModeP6 === "Sw")
      {
        if(ChannelPin[5])
        {
        if(checkTimeOut6Sw === 0)
        {
          itimeCh6++;
          if(itimeCh6 === Low_Asymptote)
          {
        document.getElementById("respondP6V1").innerHTML = "timeOut";
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/push?Pin="+ checkPinNo6 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin6, true); 
        xhttp.send();
          }
          if(itimeCh6 >= Upper_Asymptote)
          {
          itimeCh6 = 0;
          ChannelPin[5] = 0;
          
          document.getElementById("respondP6V1").innerHTML = "Disconnect";
          }
        }
        else{
          itimeCh6 = 0;
          ChannelPin[5] = 0;
        }
        }
      }
    else if(ModeP6 === "Pw")
    {
    if(ChannelPin[5])
    {
      itimeCh6++;
      if(checkTimeOut6) // bij loi
      {
      if(itimeCh6 === Low_Asymptote)
      {
        document.getElementById("respondP6V1").innerHTML = "timeOut";
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo6 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin6, true); 
        xhttp.send();
        console.log("gui lan lan 1 pin 6"); 
      }
      else if(itimeCh6 >= Upper_Asymptote)
      {
        itimeCh6 = 0;
        ChannelPin[5] = 0;
        document.getElementById("respondP6V1").innerHTML = "Disconnect";
      } 
      }
      else 
      {
      if(itimeCh6 >= Limit_Finish)
      {
        itimeCh6 = 0;
        ChannelPin[5] = 0;
        document.getElementById("respondP6V1").innerHTML = "";
      } 
      }
    }
    }
      else if(ModeP6 === "B")
      {
        if(ChannelPin[5])
        {
        itimeCh6++;
        if(checkTimeOut6)
        {
          if(itimeCh6 === Low_Asymptote)
          {
          document.getElementById("Int_respondP6V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/button?Pin="+ checkPinNo6 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin6, true); 
          xhttp.send();
          console.log("gui lan lan 1 pin 6"); 
          }
          
          else if(itimeCh6 >= Upper_Asymptote)
          {
          itimeCh6 = 0;
          ChannelPin[5] = 0;
          document.getElementById("Int_respondP6V1").innerHTML = "Disconnect";
          } 
        }
        else 
        {
          if(itimeCh6 > Limit_Finish)
          {
          itimeCh6 = 0;
          ChannelPin[5] = 0;
          document.getElementById("Int_respondP6V1").innerHTML = "";
          } 
        }     
        }
      }
      
      if(ModeP7 === "Tg")
      {
        if(ChannelPin[6])
        {
        itimeCh7 = itimeCh7+1;
        if(checkTimeOut7)
        {
          if(itimeCh7 === Low_Asymptote)
          {
          document.getElementById("respondP7V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo7 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin7, true);
          xhttp.send();
           console.log("gui lan 1 pin 7");
          }
          else if(itimeCh7 >= Upper_Asymptote)
          {
          itimeCh7 = 0;
          ChannelPin[6] = 0;
          document.getElementById("respondP7V1").innerHTML = "Disconnect";
          }
        }
        else
        {
          if(itimeCh7 >= Limit_Finish)
          {
          itimeCh7 = 0;
          ChannelPin[6] = 0;
          document.getElementById("respondP7V1").innerHTML = "";
          }
        }
        
        }
      }
      else if(ModeP7 === "Sw")
      {
        if(ChannelPin[6])
        {
        if(checkTimeOut7Sw === 0)
        {
          itimeCh7++;
          if(itimeCh7 === Low_Asymptote)
          {
          document.getElementById("respondP7V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/push?Pin="+ checkPinNo7 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin7, true); 
          xhttp.send();
          }
          if(itimeCh7 >= Upper_Asymptote)
          {
          itimeCh7 = 0;
          ChannelPin[6] = 0;
          
          document.getElementById("respondP7V1").innerHTML = "Disconnect";
          }
        }
        else{
          itimeCh7 = 0;
          ChannelPin[6] = 0;
        }
        }
      }
    else if(ModeP7 === "Pw")
    {
    if(ChannelPin[6])
    {
      itimeCh7++;
      if(checkTimeOut7) // bij loi
      {
      if(itimeCh7 === Low_Asymptote)
      {
        document.getElementById("respondP7V1").innerHTML = "timeOut";
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo7 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin7, true); 
        xhttp.send();
        console.log("gui lan lan 1 pin 7"); 
      }
      else if(itimeCh7 >= Upper_Asymptote)
      {
        itimeCh7= 0;
        ChannelPin[6] = 0;
        document.getElementById("respondP7V1").innerHTML = "Disconnect";
      } 
      }
      else 
      {
      if(itimeCh7 >= Limit_Finish)
      {
        itimeCh7 = 0;
        ChannelPin[6] = 0;
        document.getElementById("respondP7V1").innerHTML = "";
      } 
      }
    }
    }
      else if(ModeP7 === "B")
      {
        if(ChannelPin[6])
        {
        itimeCh7++;
        if(checkTimeOut7)
        {
          if(itimeCh7 === Low_Asymptote)
          {
          document.getElementById("Int_respondP7V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/button?Pin="+ checkPinNo7 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin7, true); 
          xhttp.send();
          console.log("gui lan lan 1 pin 7"); 
          }
          
          else if(itimeCh7 >= Upper_Asymptote)
          {
          itimeCh7 = 0;
          ChannelPin[6] = 0;
          document.getElementById("Int_respondP7V1").innerHTML = "Disconnect";
          } 
        }
        else 
        {
          if(itimeCh7 >= Limit_Finish)
          {
          itimeCh7 = 0;
          ChannelPin[6] = 0;
          document.getElementById("Int_respondP7V1").innerHTML = "";
          } 
        }     
        }
      }
      
      if(ModeP8 === "Tg")
      {
        if(ChannelPin[7])
        {
        itimeCh8 = itimeCh8+1;
        if(checkTimeOut8)
        {
          if(itimeCh8 === Low_Asymptote)
          {
          document.getElementById("respondP8V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/toggle?Pin="+ checkPinNo8 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin8, true);
          xhttp.send();
          console.log("gui lan 1 pin 8");
          
          }
          
          else if(itimeCh8 >= Upper_Asymptote)
          {
          itimeCh8 = 0;
          ChannelPin[7] = 0;
          document.getElementById("respondP8V1").innerHTML = "Disconnect";
          }
        }
        else 
        {
          if(itimeCh8 >= Limit_Finish)
          {
          itimeCh8 = 0;
          ChannelPin[7] = 0;
          document.getElementById("respondP8V1").innerHTML = "";
          }
        }
        }
      }
      else if(ModeP8 === "Sw")
      {
        if(ChannelPin[7])
        {
        if(checkTimeOut8Sw ===0)
        {
          itimeCh8++;
          if(itimeCh8 === Low_Asymptote)
          {
          document.getElementById("respondP8V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/push?Pin="+ checkPinNo8 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin8, true); 
          xhttp.send();
          }
          if(itimeCh8 >= Upper_Asymptote)
          {
          itimeCh8 = 0;
          ChannelPin[7] = 0;
          
          document.getElementById("respondP8V1").innerHTML = "Disconnect";
          }
        }
        else{
          itimeCh8 = 0;
          ChannelPin[7] = 0;
        }
        }
      }
    else if(ModeP8 === "Pw")
    {
    if(ChannelPin[7])
    {
      itimeCh8++;
      if(checkTimeOut8) // bij loi
      {
      if(itimeCh8 === Low_Asymptote)
      {
        document.getElementById("respondP8V1").innerHTML = "timeOut";
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/pwm?Pin="+ checkPinNo8 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin8, true); 
        xhttp.send();
        console.log("gui lan lan 1 pin 8"); 
      }
      else if(itimeCh8 >= Upper_Asymptote)
      {
        itimeCh8= 0;
        ChannelPin[7] = 0;
        document.getElementById("respondP8V1").innerHTML = "Disconnect";
      } 
      }
      else 
      {
      if(itimeCh8 >= Limit_Finish)
      {
        itimeCh8 = 0;
        ChannelPin[7] = 0;
        document.getElementById("respondP8V1").innerHTML = "";
      } 
      }
    }
    }
      else if(ModeP8 === "B")
      {
        if(ChannelPin[7])
        {
        itimeCh8++;
        if(checkTimeOut8)
        {
          if(itimeCh8 === Low_Asymptote)
          {
          document.getElementById("Int_respondP8V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/button?Pin="+ checkPinNo8 +"&U="+ WB_GD_User1+"&P="+ WB_GD_Pass1+ "&control=" + statusPin8, true); 
          xhttp.send();
          console.log("gui lan lan 1 pin 8"); 
          }
          
          else if(itimeCh8 >= Upper_Asymptote)
          {
          itimeCh8 = 0;
          ChannelPin[7] = 0;
          document.getElementById("Int_respondP8V1").innerHTML = "Disconnect";
          } 
        }
        else 
        {
          if(itimeCh8 >= Limit_Finish)
          {
          itimeCh8 = 0;
          ChannelPin[7] = 0;
          document.getElementById("Int_respondP8V1").innerHTML = "";
          } 
        }     
        }
      }
      
      for(var i=0;i<8;i++)
      {
        if(ChannelPin[i])
        {
        check_Channel_pin = 1;
        break;
        }
        else check_Channel_pin = 0;
      }
      if(check_Channel_pin ==0) 
      {
        readytime = 0; 
        //stopCount();
      }
      
    }
    <!-- t=setTimeout("timedCount()",1000); -->
    t=setTimeout("timedCount()",500);
  }
  
   doTimer();
  function doTimer()
  {
    if (!timer_is_on)
    {
      timer_is_on=1;
      timedCount();
    } 
  }
  
    </script> 
    </body>
</html>
)=====";
