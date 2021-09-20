const char ConfigurateDevice[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
    <head>
       
        <link rel="shortcut icon" href="favicon.ico" type="image/x-icon">
        <meta charset="utf-8">
        <meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">
        <title>ANV Group</title>
        <!------------------->

         <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.1/dist/css/bootstrap.min.css">
        

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
    background: url("/footer"); 
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
  .khungchon {
    
    text-align: center; 
    color: #fffff; 
    width : 100%; 
  height: 30px;
    font-size: 15px;
    font-weight: lighter;
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
                  
          <a class="nav-link" href="/api/system/Network"  target="iframe_a" style="margin-left: 15px; margin-right: 15px;">Next Page</a>
                </li>
        <li class="nav-item">
                  
          <a class="nav-link" href="/api/control" onclick="SaveFinish()"  target="iframe_a" style="margin-left: 15px; margin-right: 15px;">UserInterface</a>
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
                <div id="id_load1" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-8 col-sm-12 col-xs-12" style="margin-top: 5px;margin-bottom: 5px;"><span style="margin-left: 5px;">LOAD 1</span> </div>
                        
                            </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
                <div class="row">
                  <div class="col-md-3 col-ms-3 col-xs-12">
                  <label style="margin-top: 15px;">Mode</label>
                  </div>
                  <div class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="ModeLoad1Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="ModeLoad1">
                    <option value = "1" style="text-align: center;">INPUT</option>
                    <option value = "2" Selected >OUTPUT</option>
                    </select>
                  </div>
                  <div class="col-md-3 col-ms-3 col-xs-12">
                  <label style="margin-top: 15px;">Type</label>
                  </div>
                  <div id="DivOptionOutPutLoad1" class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="OutPutLoad1Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="TypeOutPutLoad1">
                    <option value = "1" Selected style="text-align: center;">Toogle</option>
                    <option value = "2" >Push Switch</option>
                    <option value = "3" >PWM</option>
                    </select>
                  </div>
                  <div id="DivOptionInPutLoad1" class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="InPutLoad1Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="TypeInPutLoad1">
                    <option value = "1" Selected style="text-align: center;">Button</option>
                    <option value = "2" >SenSor</option>
                    </select>
                  </div>
                </div>
                 <hr width="100%" style="margin-top:1px; margin-bottom:5px;"/>
                 <div class="row">
                   <div class="col-md-6 col-ms-6 col-xs-12"> 
                    <button id="saveload1" type="submit" onclick="saveload1()" class="btn btn-primary" style="margin-top:0px; margin-left:5px; margin-bottom: 5px;"><i class="bi bi-check2">Save</i></button>
                   </div>
                   <div class="col-md-6 col-ms-6 col-xs-12"> 
                    <button id="cancelload1" type="submit" onclick="cancelload1()" class="btn btn-primary" style="margin-left:30px; margin-bottom: 5px;"><i style="margin: center; color: white;">Cancel</i></button>
                   </div>
                </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="respondP1V1" style="margin-left: 5px; color:#000000"></p></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="respondP1V2" style="margin-left: 5px; color:#000000"></p></div>
                            </div>
                        </div>
                    </div>
                </div> 
                <div id="id_load2" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                             <div class="row">
                                <div class="col-md-8 col-sm-12 col-xs-12" style="margin-top: 5px;margin-bottom: 5px;"><span style="margin-left: 5px;">LOAD 2</span> </div>
                        
                            </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
                <div class="row">
                  <div class="col-md-3 col-ms-3 col-xs-12">
                  <label style="margin-top: 15px;">Mode</label>
                  </div>
                  <div class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="ModeLoad2Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="ModeLoad2">
                    <option value = "1" style="text-align: center;">INPUT</option>
                    <option value = "2" Selected >OUTPUT</option>
                    </select>
                  </div>
                  <div class="col-md-3 col-ms-3 col-xs-12">
                  <label style="margin-top: 15px;">Type</label>
                  </div>
                  <div id="DivOptionOutPutLoad2" class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="OutPutLoad2Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="TypeOutPutLoad2">
                    <option value = "1" Selected style="text-align: center;">Toogle</option>
                    <option value = "2" >Push Switch</option>
                    <option value = "3" >PWM</option>
                    </select>
                  </div>
                  <div id="DivOptionInPutLoad2" class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="InPutLoad2Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="TypeInPutLoad2">
                    <option value = "1" Selected style="text-align: center;">Button</option>
                    <option value = "2" >SenSor</option>
                    </select>
                  </div>
                </div>
                 <hr width="100%" style="margin-top:1px; margin-bottom:5px;"/>
                 <div class="row">
                   <div class="col-md-6 col-ms-6 col-xs-12"> 
                    <button id="saveload2" type="submit" onclick="saveload2()" class="btn btn-primary" style="margin-top:0px; margin-left:5px; margin-bottom: 5px;"><i class="bi bi-check2">Save</i></button>
                   </div>
                   <div class="col-md-6 col-ms-6 col-xs-12"> 
                    <button id="cancelload2" type="submit" onclick="cancelload2()" class="btn btn-primary" style="margin-left:30px; margin-bottom: 5px;"><i style="margin: center; color: white;">Cancel</i></button>
                   </div>
                </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="respondP2V1" style="margin-left: 5px;color:#000000"></p></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="respondP2V2" style="margin-left: 5px;color:#000000"></p></div>
                            </div>
                        </div>
                    </div>
                </div> 
        
                <div id="id_load3" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
              <div class="row">
                                <div class="col-md-12 col-sm-12 col-xs-12" style="margin-top: 5px;"><span style="margin-left: 5px;">LOAD 3</span> </div>
                            </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-3 col-ms-3 col-xs-12">
                  <label style="margin-top: 15px;">Mode</label>
                  </div>
                  <div class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="ModeLoad3Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="ModeLoad3">
                    <option value = "1" style="text-align: center;">INPUT</option>
                    <option value = "2" Selected >OUTPUT</option>
                    </select>
                  </div>
                  <div class="col-md-3 col-ms-3 col-xs-12">
                  <label style="margin-top: 15px;">Type</label>
                  </div>
                  <div id="DivOptionOutPutLoad3" class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="OutPutLoad3Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="TypeOutPutLoad3">
                    <option value = "1" Selected style="text-align: center;">Toogle</option>
                    <option value = "2" >Push Switch</option>
                    <option value = "3" >PWM</option>
                    </select>
                  </div>
                  <div id="DivOptionInPutLoad3" class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="InPutLoad3Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="TypeInPutLoad3">
                    <option value = "1" Selected style="text-align: center;">Button</option>
                    <option value = "2" >SenSor</option>
                    </select>
                  </div>
                            </div>
                <hr width="100%" style="margin-top:1px; margin-bottom:5px;"/>
                 <div class="row">
                 <div class="col-md-6 col-ms-6 col-xs-12"> 
                  <button id="saveload3" type="submit" onclick="saveload3()" class="btn btn-primary" style="margin-top:0px; margin-left:5px; margin-bottom: 5px;"><i class="bi bi-check2">Save</i></button>
                 </div>
                 <div class="col-md-6 col-ms-6 col-xs-12"> 
                  <button id="cancelload3" type="submit" onclick="cancelload3()" class="btn btn-primary" style="margin-left:30px; margin-bottom: 5px;"><i style="margin: center; color: white;">Cancel</i></button>
                 </div>
                </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="respondP3V1" style="margin-left: 5px;color:#000000"></p></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="respondP3V2" style="margin-left: 5px;color:#000000"></p></div>
                            </div>
                        </div>
                    </div>
                </div> 
                <div id="id_load4" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-8 col-sm-12 col-xs-12" style="margin-top: 5px;"><span style="margin-left: 5px;">LOAD 4</span> </div>
                                
                            </div>
                        </div>

                         <div class="row">
                                <div class="col-md-3 col-ms-3 col-xs-12">
                  <label style="margin-top: 15px;">Mode</label>
                  </div>
                  <div class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="ModeLoad4Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="ModeLoad4">
                    <option value = "1" Selected style="text-align: center;">INPUT</option>
                    <option value = "2" Selected >OUTPUT</option>
                    </select>
                  </div>
                  <div class="col-md-3 col-ms-3 col-xs-12">
                  <label style="margin-top: 15px;">Type</label>
                  </div>
                  <div id="DivOptionOutPutLoad4" class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="OutPutLoad4Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="TypeOutPutLoad4">
                    <option value = "1" Selected style="text-align: center;">Toogle</option>
                    <option value = "2" >Push Switch</option>
                    <option value = "3" >PWM</option>
                    </select>
                  </div>
                  <div id="DivOptionInPutLoad4" class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="InPutLoad4Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="TypeInPutLoad4">
                    <option value = "1" style="text-align: center;">Button</option>
                    <option value = "2" >SenSor</option>
                    </select>
                  </div>
                            </div>
              <hr width="100%" style="margin-top:1px; margin-bottom:5px;"/>
               <div class="row">
               <div class="col-md-6 col-ms-6 col-xs-12"> 
                <button id="saveload4" type="submit" onclick="saveload4()" class="btn btn-primary" style="margin-top:0px; margin-left:5px; margin-bottom: 5px;"><i class="bi bi-check2">Save</i></button>
               </div>
               <div class="col-md-6 col-ms-6 col-xs-12"> 
                <button id="cancelload4" type="submit" onclick="cancelload4()" class="btn btn-primary" style="margin-left:30px; margin-bottom: 5px;"><i style="margin: center; color: white;">Cancel</i></button>
               </div>
              </div>
                    </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="respondP4V1" style="margin-left: 5px;color:#000000"></p></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="respondP4V2" style="margin-left: 5px;color:#000000"></p></div>
                            </div>
                        </div>
                    </div>
                </div> 
                <div class="col-md-2 col-sm-1 col-xs-1"></div> 
            </div>
       <!-- </div>  -->
        
        <div class="container-fluid padding" style="margin-top: 50px;">
            <div class="row">
                <div class="col-md-2 col-sm-1 col-xs-1"></div>
                <div id="id_load5" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
               <div class="row">
                <div class="col-md-12 col-sm-12 col-xs-12" style="margin-top: 5px;"><span style="margin-left: 5px;">LOAD 5</span> </div>
              </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
              <div class="row">
                                <div class="col-md-3 col-ms-3 col-xs-12">
                  <label style="margin-top: 15px;">Mode</label>
                  </div>
                  <div class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="ModeLoad5Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="ModeLoad5">
                    <option value = "1" Selected style="text-align: center;">INPUT</option>
                    <option value = "2" Selected >OUTPUT</option>
                    </select>
                  </div>
                  <div class="col-md-3 col-ms-3 col-xs-12">
                  <label style="margin-top: 15px;">Type</label>
                  </div>
                  <div id="DivOptionOutPutLoad5" class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="OutPutLoad5Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="TypeOutPutLoad5">
                    <option value = "1" Selected style="text-align: center;">Toogle</option>
                    <option value = "2" >Push Switch</option>
                    <option value = "3" >PWM</option>
                    </select>
                  </div>
                  <div id="DivOptionInPutLoad5" class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="InPutLoad5Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="TypeInPutLoad5">
                    <option value = "1" style="text-align: center;">Button</option>
                    <option value = "2" >SenSor</option>
                    </select>
                  </div>
                            </div>
              
              <hr width="100%" style="margin-top:1px; margin-bottom:5px;"/>
               <div class="row">
               <div class="col-md-6 col-ms-6 col-xs-12"> 
                <button id="saveload5" type="submit" onclick="saveload5()" class="btn btn-primary" style="margin-top:0px; margin-left:5px; margin-bottom: 5px;"><i class="bi bi-check2">Save</i></button>
               </div>
               <div class="col-md-6 col-ms-6 col-xs-12"> 
                <button id="cancelload5" type="submit" onclick="cancelload5()" class="btn btn-primary" style="margin-left:30px; margin-bottom: 5px;"><i style="margin: center; color: white;">Cancel</i></button>
               </div>
              </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="respondP5V1" style="margin-left: 5px;color:#000000"></p></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="respondP5V2" style="margin-left: 5px;color:#000000"></p></div>
                            </div>
                        </div>
                    </div>
                </div> 
                <div id="id_load6" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-12 col-sm-12 col-xs-12" style="margin-top: 5px;"><span style="margin-left: 5px;">LOAD 6</span> </div>
                                
                            </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
              <div class="row">
                                <div class="col-md-3 col-ms-3 col-xs-12">
                  <label style="margin-top: 15px;">Mode</label>
                  </div>
                  <div class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="ModeLoad6Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="ModeLoad6">
                    <option value = "1" style="text-align: center;">INPUT</option>
                    <option value = "2" Selected >OUTPUT</option>
                    </select>
                  </div>
                  <div class="col-md-3 col-ms-3 col-xs-12">
                  <label style="margin-top: 15px;">Type</label>
                  </div>
                  <div id="DivOptionOutPutLoad6" class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" Selected onchange="OutPutLoad6Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="TypeOutPutLoad6">
                    <option value = "1" style="text-align: center;">Toogle</option>
                    <option value = "2" >Push Switch</option>
                    <option value = "3" >PWM</option>
                    </select>
                  </div>
                  <div id="DivOptionInPutLoad6" class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="InPutLoad6Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="TypeInPutLoad6">
                    <option value = "1" Selected style="text-align: center;">Button</option>
                    <option value = "2" >SenSor</option>
                    </select>
                  </div>
                            </div>
              <hr width="100%" style="margin-top:1px; margin-bottom:5px;"/>
               <div class="row">
                 <div class="col-md-6 col-ms-6 col-xs-12"> 
                  <button id="saveload6" type="submit" onclick="saveload6()" class="btn btn-primary" style="margin-top:0px; margin-left:5px; margin-bottom: 5px;"><i class="bi bi-check2">Save</i></button>
                 </div>
                 <div class="col-md-6 col-ms-6 col-xs-12"> 
                  <button id="cancelload6" type="submit" onclick="cancelload6()" class="btn btn-primary" style="margin-left:30px; margin-bottom: 5px;"><i style="margin: center; color: white;">Cancel</i></button>
                 </div>
              </div>
                        </div>
                        
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="respondP6V1" style="margin-left: 5px;color:#000000"></p></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="respondP6V2" style="margin-left: 5px;color:#000000"></p></div>
                            </div>
                        </div>
                    </div>
                </div> 
                <div id="id_load7" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-8 col-sm-12 col-xs-12" style="margin-top: 5px;"><span style="margin-left: 5px;">LOAD 7</span> </div>
                                
                            </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
              <div class="row">
                                <div class="col-md-3 col-ms-3 col-xs-12">
                  <label style="margin-top: 15px;">Mode</label>
                  </div>
                  <div class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="ModeLoad7Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="ModeLoad7">
                    <option value = "1" style="text-align: center;">INPUT</option>
                    <option value = "2" Selected >OUTPUT</option>
                    </select>
                  </div>
                  <div class="col-md-3 col-ms-3 col-xs-12">
                  <label style="margin-top: 15px;">Type</label>
                  </div>
                  <div id="DivOptionOutPutLoad7" class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="OutPutLoad7Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="TypeOutPutLoad7">
                    <option value = "1" Selected style="text-align: center;">Toogle</option>
                    <option value = "2" >Push Switch</option>
                    <option value = "3" >PWM</option>
                    </select>
                  </div>
                  <div id="DivOptionInPutLoad7" class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="InPutLoad7Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="TypeInPutLoad7">
                    <option value = "1" Selected style="text-align: center;">Button</option>
                    <option value = "2" >SenSor</option>
                    </select>
                  </div>
                            </div>
                        </div>
                        <hr width="100%" style="margin-top:1px; margin-bottom:5px;"/>
               <div class="row">
                 <div class="col-md-6 col-ms-6 col-xs-12"> 
                  <button id="saveload7" type="submit" onclick="saveload7()" class="btn btn-primary" style="margin-top:0px; margin-left:5px; margin-bottom: 5px;"><i class="bi bi-check2">Save</i></button>
                 </div>
                 <div class="col-md-6 col-ms-6 col-xs-12"> 
                  <button id="cancelload7" type="submit" onclick="cancelload7()" class="btn btn-primary" style="margin-left:30px; margin-bottom: 5px;"><i style="margin: center; color: white;">Cancel</i></button>
                 </div>
              </div>
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="respondP7V1" style="margin-left: 5px;color:#000000"></p></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="respondP7V2" style="margin-left: 5px;color:#000000"></p></div>
                            </div>
                        </div>
                    </div>
                </div> 
                <div id="id_load8" class="element_x col-md-2 col-sm-5 col-xs-10">
                    <div style="border: 1px solid black;">
                        <div class="title_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="col-md-12 col-sm-12 col-xs-12" style="margin-top: 5px;"><span style="margin-left: 5px;">LOAD 8</span> </div>
                                
                            </div>
                        </div>

                        <div class="content_e col-md-12 col-sm-12 col-xs-12">
              <div class="row">
                                <div class="col-md-3 col-ms-3 col-xs-12">
                  <label style="margin-top: 15px;">Mode</label>
                  </div>
                  <div class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="ModeLoad8Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="ModeLoad8">
                    <option value = "1" style="text-align: center;">INPUT</option>
                    <option value = "2" Selected >OUTPUT</option>
                    </select>
                  </div>
                  <div class="col-md-3 col-ms-3 col-xs-12">
                  <label style="margin-top: 15px;">Type</label>
                  </div>
                  <div id="DivOptionOutPutLoad8" class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="OutPutLoad8Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="TypeOutPutLoad8">
                    <option value = "1" Selected style="text-align: center;">Toogle</option>
                    <option value = "2" >Push Switch</option>
                    <option value = "3" >PWM</option>
                    </select>
                  </div>
                  <div id="DivOptionInPutLoad8" class="col-md-8 col-ms-8 col-xs-12">
                    <select class="khungchon" onchange="InPutLoad8Changed(this)" style=" margin-top: 10px; margin-bottom: 10px;" id="TypeInPutLoad8">
                    <option value = "1" Selected style="text-align: center;">Button</option>
                    <option value = "2" >SenSor</option>
                    </select>
                  </div>
                            </div>
                        </div>
                        <hr width="100%" style="margin-top:1px; margin-bottom:5px;"/>
               <div class="row">
                 <div class="col-md-6 col-ms-6 col-xs-12"> 
                  <button id="saveload8" type="submit" onclick="saveload8()" class="btn btn-primary" style="margin-top:0px; margin-left:5px; margin-bottom: 5px;"><i class="bi bi-check2">Save</i></button>
                 </div>
                 <div class="col-md-6 col-ms-6 col-xs-12"> 
                  <button id="cancelload8" type="submit" onclick="cancelload8()" class="btn btn-primary" style="margin-left:30px; margin-bottom: 5px;"><i style="margin: center; color: white;">Cancel</i></button>
                 </div>
              </div>
                        <div class="footer_e col-md-12 col-sm-12 col-xs-12">
                            <div class="row">
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="margin-top: 5px; height: 32px;"><p id="respondP8V1" style="margin-left: 5px;color:#000000"></div>
                                <div class="footer_e_x col-md-6 col-sm-6 col-xs-6" style="text-align: right; margin-top: 5px; height: 32px;"><p id="respondP8V2" style="margin-left: 5px;color:#000000"></p></div>
                            </div>
                        </div>
                    </div>
                </div> 
                <div class="col-md-2 col-sm-1 col-xs-1"></div> 
            </div>
        </div>
  </div> <!--toi them o day-->
    <hr width="100%" style="margin-top:1px; margin-bottom:5px;"/>
     
      <button id="finish" type="submit" onclick="NextPage()" class="btn btn-primary" style="margin-bottom: 5px; margin-left: 240px;"><i class="bi bi-check2">Next Page</i></button>
     
     </div>
        <div class="footer">
            <br/>
             Copyright © ANVGroup | Control Center. All rights reserved
        </div>

        <script>
    //document.getElementById('dien id chu the slect').getElementsByTagName('option')[1].selected = 'selected'; // option chay tu 0-n
    var DataJsonGiaoDien;
    var WB_GD_User1, WB_GD_Pass1, WB_GD_User2, WB_GD_Pass2, WB_GD_User3, WB_GD_Pass3, WB_GD_User4, WB_GD_Pass4, WB_GD_User5, WB_GD_Pass5;
    var PinCh1=0,PinCh2=0,PinCh3=0,PinCh4=0,PinCh5=0,PinCh6=0,PinCh7=0,PinCh8=0, GPinCh=0;
    var checkPinNo1=0, checkPinNo2=0,checkPinNo3=0, checkPinNo4=0, checkPinNo5=0, checkPinNo6=0, checkPinNo7=0, checkPinNo8=0;
    var DataVDK_GD;
    var sendDataload1="", sendDataload2="", sendDataload3="", sendDataload4="", sendDataload5="", sendDataload6="", sendDataload7="", sendDataload8="";
  var dataModePin1= "", dataModePin2 = "", dataModePin3= "", dataModePin4 = "", dataModePin5 = "", dataModePin6 = "", dataModePin7 = "", dataModePin8 = "";
    var GlobalCheckTimeOut=0, LastGlobalCheckTimeOut=0;
    var CheckOpen_GD=0;
    
    <!--  phan set timer dem time-->
    const ChannelPin = [];
    var itimeCh1=0,itimeCh2=0,itimeCh3=0,itimeCh4=0,itimeCh5=0,itimeCh6=0,itimeCh7=0, itimeCh8=0;
    var readytime =0, check_Channel_pin = 0;
    var checkTimeOut1 = 0, checkTimeOut2 = 0, checkTimeOut3 = 0, checkTimeOut4 = 0, checkTimeOut5 = 0, checkTimeOut6 = 0, checkTimeOut7 = 0, checkTimeOut8 = 0;
      var count_timer=0;
      var t; <!-- t nay cho timer de ktra -->
      var timer_is_on=0;
  
  
  function Start()
  {
    LoadForm();
    UpdateData();
    
  }
  function LoadForm()
  {
      document.getElementById("DivOptionOutPutLoad1").style.display = "block"; // show
      document.getElementById("DivOptionInPutLoad1").style.display = "none"; // hidden
    document.getElementById("DivOptionOutPutLoad2").style.display = "block"; // show
      document.getElementById("DivOptionInPutLoad2").style.display = "none"; // hidden
    document.getElementById("DivOptionOutPutLoad3").style.display = "block"; // show
      document.getElementById("DivOptionInPutLoad3").style.display = "none"; // hidden
    document.getElementById("DivOptionOutPutLoad4").style.display = "block"; // show
      document.getElementById("DivOptionInPutLoad4").style.display = "none"; // hidden
    document.getElementById("DivOptionOutPutLoad5").style.display = "block"; // show
      document.getElementById("DivOptionInPutLoad5").style.display = "none"; // hidden
    document.getElementById("DivOptionOutPutLoad6").style.display = "block"; // show
      document.getElementById("DivOptionInPutLoad6").style.display = "none"; // hidden
    document.getElementById("DivOptionOutPutLoad7").style.display = "block"; // show
      document.getElementById("DivOptionInPutLoad7").style.display = "none"; // hidden
    document.getElementById("DivOptionOutPutLoad8").style.display = "block"; // show
      document.getElementById("DivOptionInPutLoad8").style.display = "none"; // hidden
    document.getElementById("saveload1").disabled = false;
    document.getElementById("saveload2").disabled = false;
    document.getElementById("saveload3").disabled = false; 
    document.getElementById("saveload4").disabled = false; 
    document.getElementById("saveload5").disabled = false; 
    document.getElementById("saveload6").disabled = false; 
    document.getElementById("saveload7").disabled = false;
    document.getElementById("saveload8").disabled = false;
      
  }
  function NextPage()
  {
    console.log("bam Finish");
    location.href ="/api/system/Network";
  }
  
  function OutPutLoad1Changed(obj)
  {
    var value = obj.value;
    
    if (value === '1'){
      document.getElementById("saveload1").disabled = false; // 
    }
    else if (value === '2'){
      document.getElementById("saveload1").disabled = false; //
    }
    else 
    {
      document.getElementById("saveload1").disabled = true; //
    }
  }
  function InPutLoad1Changed(obj)
  {
    var value = obj.value;
    
    if (value === '1')
      document.getElementById("saveload1").disabled = false; // 
    else 
      document.getElementById("saveload1").disabled = true; //
    
  }
  
  function ModeLoad1Changed(obj)
  {
    var value = obj.value;
    
    if (value === '1'){
      document.getElementById("saveload1").disabled = true;
      document.getElementById("TypeInPutLoad1").disabled = true;
      document.getElementById("DivOptionOutPutLoad1").style.display = "none"; // 
      document.getElementById("DivOptionInPutLoad1").style.display = "block"; // 
      document.getElementById('TypeInPutLoad1').getElementsByTagName('option')[0].selected = 'selected';
    }
    else if (value === '2'){
      document.getElementById("DivOptionOutPutLoad1").style.display = "block"; // 
      document.getElementById("DivOptionInPutLoad1").style.display = "none"; // 
      document.getElementById('TypeOutPutLoad1').getElementsByTagName('option')[0].selected = 'selected';
      document.getElementById("saveload1").disabled = false;
    }
  }
  // laod 2
  function OutPutLoad2Changed(obj)
  {
    var value = obj.value;
    
    if (value === '1'){
      document.getElementById("saveload2").disabled = false; // 
    }
    else if (value === '2'){
      document.getElementById("saveload2").disabled = false; //
    }
    else 
    {
      document.getElementById("saveload2").disabled = false; //
    }
  }
  function InPutLoad2Changed(obj)
  {
    var value = obj.value;
    
    if (value === '1')
      document.getElementById("saveload2").disabled = false; // 
    else 
      document.getElementById("saveload2").disabled = true; //
    
  }
  
  function ModeLoad2Changed(obj)
  {
    var value = obj.value;
    document.getElementById("saveload2").disabled = false;
    if (value === '1'){
      document.getElementById("DivOptionOutPutLoad2").style.display = "none"; // 
      document.getElementById("DivOptionInPutLoad2").style.display = "block"; // 
      document.getElementById('TypeInPutLoad2').getElementsByTagName('option')[0].selected = 'selected';  
    }
    else if (value === '2'){
      document.getElementById("DivOptionOutPutLoad2").style.display = "block"; // 
      document.getElementById("DivOptionInPutLoad2").style.display = "none"; //
      document.getElementById('TypeOutPutLoad2').getElementsByTagName('option')[0].selected = 'selected';     
    }
  }
  // load 3
  function OutPutLoad3Changed(obj)
  {
    var value = obj.value;
    
    if (value === '1'){
      document.getElementById("saveload3").disabled = false; // 
    }
    else if (value === '2'){
      document.getElementById("saveload3").disabled = false; //
    }
    else 
    {
      document.getElementById("saveload3").disabled = false; //
    }
  }
  function InPutLoad3Changed(obj)
  {
    var value = obj.value;
    
    if (value === '1')
      document.getElementById("saveload3").disabled = false; // 
    else 
      document.getElementById("saveload3").disabled = true; //
    
  }
  
  function ModeLoad3Changed(obj)
  {
    var value = obj.value;
    document.getElementById("saveload3").disabled = false;
    if (value === '1'){
      document.getElementById("DivOptionOutPutLoad3").style.display = "none"; // 
      document.getElementById("DivOptionInPutLoad3").style.display = "block"; // 
      document.getElementById('TypeInPutLoad3').getElementsByTagName('option')[0].selected = 'selected';  
    }
    else if (value === '2'){
      document.getElementById("DivOptionOutPutLoad3").style.display = "block"; // 
      document.getElementById("DivOptionInPutLoad3").style.display = "none"; // 
      document.getElementById('TypeOutPutLoad3').getElementsByTagName('option')[0].selected = 'selected'; 
    }
  }
  // load 4
  function OutPutLoad4Changed(obj)
  {
    var value = obj.value;
    
    if (value === '1'){
      document.getElementById("saveload4").disabled = false; // 
    }
    else if (value === '2'){
      document.getElementById("saveload4").disabled = false; //
    }
    else 
    {
      document.getElementById("saveload4").disabled = false; //
    }
  }
  function InPutLoad4Changed(obj)
  {
    var value = obj.value;
    
    if (value === '1')
      document.getElementById("saveload4").disabled = false; // 
    else 
      document.getElementById("saveload4").disabled = true; //
  }
  
  function ModeLoad4Changed(obj)
  {
    var value = obj.value;
    document.getElementById("saveload4").disabled = false;
    if (value === '1'){
      document.getElementById("DivOptionOutPutLoad4").style.display = "none"; // 
      document.getElementById("DivOptionInPutLoad4").style.display = "block"; // 
      document.getElementById('TypeInPutLoad4').getElementsByTagName('option')[0].selected = 'selected';
    }
    else if (value === '2'){
      document.getElementById("DivOptionOutPutLoad4").style.display = "block"; // 
      document.getElementById("DivOptionInPutLoad4").style.display = "none"; // 
      document.getElementById('TypeOutPutLoad4').getElementsByTagName('option')[0].selected = 'selected';
    }
  }
  // load 5
  function OutPutLoad5Changed(obj)
  {
    var value = obj.value;
    
    if (value === '1'){
      document.getElementById("saveload5").disabled = false; // 
    }
    else if (value === '2'){
      document.getElementById("saveload5").disabled = false; //
    }
    else 
    {
      document.getElementById("saveload5").disabled = false; //
    }
  }
  function InPutLoad5Changed(obj)
  {
    var value = obj.value;
    
    if (value === '1')
      document.getElementById("saveload5").disabled = false; // 
    else 
      document.getElementById("saveload5").disabled = true; //
    
  }
  
  function ModeLoad5Changed(obj)
  {
    var value = obj.value;
    document.getElementById("saveload5").disabled = false;
    if (value === '1'){
      document.getElementById("DivOptionOutPutLoad5").style.display = "none"; // 
      document.getElementById("DivOptionInPutLoad5").style.display = "block"; // 
      document.getElementById('TypeInPutLoad5').getElementsByTagName('option')[0].selected = 'selected';
    }
    else if (value === '2'){
      document.getElementById("DivOptionOutPutLoad5").style.display = "block"; // 
      document.getElementById("DivOptionInPutLoad5").style.display = "none"; //
      document.getElementById('TypeOutPutLoad5').getElementsByTagName('option')[0].selected = 'selected';     
    }
  }
  // load 6
   function OutPutLoad6Changed(obj)
  {
    var value = obj.value;
    
    if (value === '1'){
      document.getElementById("saveload6").disabled = false; // 
    }
    else if (value === '2'){
      document.getElementById("saveload6").disabled = false; //
    }
    else 
    {
      document.getElementById("saveload6").disabled = false; //
    }
  }
  function InPutLoad6Changed(obj)
  {
    var value = obj.value;
    
    if (value === '1')
      document.getElementById("saveload6").disabled = false; // 
    else 
      document.getElementById("saveload6").disabled = true; //
    
  }
  
  function ModeLoad6Changed(obj)
  {
    var value = obj.value;
    document.getElementById("saveload6").disabled = false;
    if (value === '1'){
      document.getElementById("DivOptionOutPutLoad6").style.display = "none"; // 
      document.getElementById("DivOptionInPutLoad6").style.display = "block"; // 
      document.getElementById('TypeInPutLoad6').getElementsByTagName('option')[0].selected = 'selected';  
    }
    else if (value === '2'){
      document.getElementById("DivOptionOutPutLoad6").style.display = "block"; // 
      document.getElementById("DivOptionInPutLoad6").style.display = "none"; //
      document.getElementById('TypeOutPutLoad6').getElementsByTagName('option')[0].selected = 'selected';       
    }
  }
  // load 7
  function OutPutLoad7Changed(obj)
  {
    var value = obj.value;
    
    if (value === '1'){
      document.getElementById("saveload7").disabled = false; // 
    }
    else if (value === '2'){
      document.getElementById("saveload7").disabled = false; //
    }
    else 
    {
      document.getElementById("saveload7").disabled = false; //
    }
  }
  function InPutLoad7Changed(obj)
  {
    var value = obj.value;
    
    if (value === '1')
      document.getElementById("saveload7").disabled = false; // 
    else 
      document.getElementById("saveload7").disabled = true; //
    
  }
  
  function ModeLoad7Changed(obj)
  {
    var value = obj.value;
    document.getElementById("saveload7").disabled = false;
    if (value === '1'){
      document.getElementById("DivOptionOutPutLoad7").style.display = "none"; // 
      document.getElementById("DivOptionInPutLoad7").style.display = "block"; // 
      document.getElementById('TypeInPutLoad7').getElementsByTagName('option')[0].selected = 'selected';  
    }
    else if (value === '2'){
      document.getElementById("DivOptionOutPutLoad7").style.display = "block"; // 
      document.getElementById("DivOptionInPutLoad7").style.display = "none"; // 
      document.getElementById('TypeOutPutLoad7').getElementsByTagName('option')[0].selected = 'selected'; 
    }
  }
  // load 8
  function OutPutLoad8Changed(obj)
  {
    var value = obj.value;
    
    if (value === '1'){
      document.getElementById("saveload8").disabled = false; // 
    }
    else if (value === '2'){
      document.getElementById("saveload8").disabled = false; //
    }
    else 
    {
      document.getElementById("saveload8").disabled = false; //
    }
  }
  function InPutLoad8Changed(obj)
  {
    var value = obj.value;
    
    if (value === '1')
      document.getElementById("saveload8").disabled = false; // 
    else 
      document.getElementById("saveload8").disabled = true; //
    
  }
  
  function ModeLoad8Changed(obj)
  {
    var value = obj.value;
    document.getElementById("saveload8").disabled = false;
    if (value === '1'){
      document.getElementById("DivOptionOutPutLoad8").style.display = "none"; // 
      document.getElementById("DivOptionInPutLoad8").style.display = "block"; // 
      document.getElementById('TypeInPutLoad8').getElementsByTagName('option')[0].selected = 'selected';  
    }
    else if (value === '2'){
      document.getElementById("DivOptionOutPutLoad8").style.display = "block"; // 
      document.getElementById("DivOptionInPutLoad8").style.display = "none"; // 
      document.getElementById('TypeOutPutLoad8').getElementsByTagName('option')[0].selected = 'selected'; 
    }
  }
  
  
  function UpdateData()
  {
  //console.log("ok roi nhe: ");
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function()
    {
    if(this.readyState == 4 && this.status == 200)
    {
       DataVDK_GD = xhttp.responseText;
    console.log("Du lieu VDK: "+ DataVDK_GD);
      
      if(CheckOpen_GD == 0)
      { 
        DataJsonGiaoDien = JSON.parse(DataVDK_GD);
        XuLyDataLan1();
        CheckOpen_GD = 1;  // tam thoi bo =0 da
      }
      else 
      {
        GlobalCheckTimeOut++;
        XuLyDataLan2();
      }   
    }
    }
    
    xhttp.open("GET", "/GLoadData/configpin?CheckOpen_wb_GD=" + CheckOpen_GD + "&PinCh=" + GPinCh, true);
    xhttp.send();
    setTimeout(function(){ UpdateData() }, 1000);  
    }
  
  function XuLyDataLan1()
  {
    console.log("vao xu ly lan 1");
    // lay user va pass
    if(DataJsonGiaoDien.user1 != null && DataJsonGiaoDien.pass1 != null)
    {
      if(DataJsonGiaoDien.user1 != "" && DataJsonGiaoDien.pass1 != "")
      {
      WB_GD_User1 = DataJsonGiaoDien.user1;
      WB_GD_Pass1 = DataJsonGiaoDien.pass1;
      
      }  
    }
    
    if(DataJsonGiaoDien.user2 != null && DataJsonGiaoDien.pass2 != null)
    {
      if(DataJsonGiaoDien.user2 != "" && DataJsonGiaoDien.pass2 != "")
      {
        WB_GD_User2 = DataJsonGiaoDien.user2;
        WB_GD_Pass2 = DataJsonGiaoDien.pass2;
      }  
    }
          
    if(DataJsonGiaoDien.user3 != null && DataJsonGiaoDien.pass3 != null)
    {
      if(DataJsonGiaoDien.user3 != "" && DataJsonGiaoDien.pass3 != "")
      {
          WB_GD_User3 = DataJsonGiaoDien.user3;
          WB_GD_Pass3 = DataJsonGiaoDien.pass3;
      }  
    }
    if(DataJsonGiaoDien.user4 != null && DataJsonGiaoDien.pass4 != null)
    {
      if(DataJsonGiaoDien.user4 != "" && DataJsonGiaoDien.pass4 != "")
      {
          WB_GD_User4 = DataJsonGiaoDien.user4;
          WB_GD_Pass4 = DataJsonGiaoDien.pass4;
      }  
    }
    if(DataJsonGiaoDien.user5 != null && DataJsonGiaoDien.pass5 != null)
    {
      if(DataJsonGiaoDien.user5 != "" && DataJsonGiaoDien.pass5 != "")
      {
          WB_GD_User5 = DataJsonGiaoDien.user5;
          WB_GD_Pass5 = DataJsonGiaoDien.pass5;
      }  
    }
  }
  
  function XuLyDataLan2()
  {
    DataJsonGiaoDien = JSON.parse(DataVDK_GD);
    if(PinCh1)
    {
     
      if(DataJsonGiaoDien.Pin1 != null)
      {
        // DL ok khong can biet tra ve gia tri gi 
        document.getElementById("respondP1V1").innerHTML = "transfer OK";
        PinCh1 = 0;
        GPinCh = 0;
        checkTimeOut1 = 0;
      }
    }
    if(PinCh2)
    {
      if(DataJsonGiaoDien.Pin2 != null)
      {
        // DL ok khong can biet tra ve gia tri gi 
        document.getElementById("respondP2V1").innerHTML = "transfer OK";
        checkTimeOut2 = 0;
        PinCh2 = 0;
        GPinCh = 0;
      }
    }
    if(PinCh3)
    {
      if(DataJsonGiaoDien.Pin3 != null)
      {
        // DL ok khong can biet tra ve gia tri gi 
        document.getElementById("respondP3V1").innerHTML = "transfer OK";
        PinCh3 = 0;
        GPinCh = 0;
        checkTimeOut3 = 0;
      }
    }
    if(PinCh4)
    {
      if(DataJsonGiaoDien.Pin4 != null)
      {
        // DL ok khong can biet tra ve gia tri gi
        document.getElementById("respondP4V1").innerHTML = "transfer OK";
        PinCh4 = 0;
        GPinCh = 0;
        checkTimeOut4 = 0;
      }
    }
    if(PinCh5)
    {
      if(DataJsonGiaoDien.Pin5 != null)
      {
        // DL ok khong can biet tra ve gia tri gi 
        document.getElementById("respondP5V1").innerHTML = "transfer OK";
        PinCh5 = 0;
        GPinCh = 0;
        checkTimeOut5 = 0;
      }
    }
    if(PinCh6)
    {
      if(DataJsonGiaoDien.Pin6 != null)
      {
        // DL ok khong can biet tra ve gia tri gi 
        document.getElementById("respondP6V1").innerHTML = "transfer OK";
        PinCh6 = 0;
        GPinCh = 0;
        checkTimeOut6 = 0;
      }
    }
  if(PinCh7)
    {
      if(DataJsonGiaoDien.Pin7 != null)
      {
        // DL ok khong can biet tra ve gia tri gi 
        document.getElementById("respondP7V1").innerHTML = "transfer OK";
        PinCh7 = 0;
        GPinCh = 0;
        checkTimeOut7 = 0;
      }
    }
  if(PinCh8)
    {
      if(DataJsonGiaoDien.Pin8 != null)
      {
        // DL ok khong can biet tra ve gia tri gi 
        document.getElementById("respondP8V1").innerHTML = "transfer OK";
        PinCh8 = 0;
        GPinCh = 0;
        checkTimeOut8 = 0;
      }
    }
   
  }

    function saveload1()
    {
    console.log("tac dong save load 1!!!");
    if(document.getElementById("respondP1V1").innerHTML != "Disconnect")
    {
        var oModeLoad1 = document.getElementById("ModeLoad1");
        var valueModeLoad1 = oModeLoad1.options[oModeLoad1.selectedIndex].value;
        if(valueModeLoad1 === "1")
        {
         
        }
        else if(valueModeLoad1 === "2")
        {   console.log("chon Type OutPut");
          dataModePin1 = "OUTPUT";
          var oTypeLoad1 = document.getElementById("TypeOutPutLoad1");
          var valueTypeLoad1 = oTypeLoad1.options[oTypeLoad1.selectedIndex].value;
          
          if(valueTypeLoad1 === "1")
            sendDataload1 = "Tg";
          else if(valueTypeLoad1 === "2")
            sendDataload1 = "Sw";
          else sendDataload1 = "Pw";
        }
         document.getElementById("respondP1V1").innerHTML = "Sending..";
         
         readytime = 1; 
         ChannelPin[0] = 1; // dem phan timer dinh time
         checkTimeOut1 = 1;
        
         checkPinNo1 =1;
         PinCh1 = 1;
         GPinCh = 1;
      
        var xhttp = new XMLHttpRequest();
        xhttp.open("GET", "/api/setting/config/GPIO?Pin="+ checkPinNo1 +"&SetMode="+ dataModePin1 + "&status=" + sendDataload1, true); 
        xhttp.send();
    }
    }
    function cancelload1()
    {
       console.log("tac dong cancel load 1");
     
    }
  
  function saveload2()
    {
    console.log("tac dong save load 2!!!");
  console.log(document.getElementById("respondP2V1").innerHTML);
    if(document.getElementById("respondP2V1").innerHTML != "Disconnect")
    {
   
      var oModeLoad2 = document.getElementById("ModeLoad2");
      var valueModeLoad2 = oModeLoad2.options[oModeLoad2.selectedIndex].value;
    
      if(valueModeLoad2 === "1")
      {
        console.log("chon INPUT");
    dataModePin2 = "INPUT";
    var oTypeLoad2 = document.getElementById("TypeOutPutLoad2");
    var valueTypeLoad2 = oTypeLoad2.options[oTypeLoad2.selectedIndex].value;
    if(valueTypeLoad2 === "1")
      sendDataload2 = "B";
      }
      else if(valueModeLoad2 === "2")
      {
        console.log("chon OUTPUT");
    dataModePin2 = "OUTPUT";
    var oTypeLoad2 = document.getElementById("TypeOutPutLoad2");
    var valueTypeLoad2 = oTypeLoad2.options[oTypeLoad2.selectedIndex].value;
    if(valueTypeLoad2 === "1")
      sendDataload2 = "Tg";
    else if(valueTypeLoad2 === "2")
      sendDataload2 = "Sw";
    else sendDataload2 = "Pw";
      }
    
       document.getElementById("respondP2V1").innerHTML = "Sending..";
       
       readytime = 1; 
       ChannelPin[1] = 1; // dem phan timer dinh time
       checkTimeOut2 = 1;
        
       checkPinNo2 =2;
       PinCh2 = 1;
       GPinCh = 2;
      
      var xhttp = new XMLHttpRequest();
       xhttp.open("GET", "/api/setting/config/GPIO?Pin="+ checkPinNo2 +"&SetMode="+ dataModePin2 + "&status=" + sendDataload2, true); 
      xhttp.send();
    }
    }
  function cancelload2()
    {
       console.log("tac dong cancel load 2");
     
    }
  function saveload3()
    {
    console.log("tac dong save load 3!!!");
    if(document.getElementById("respondP3V1").innerHTML != "Disconnect")
    {
      var oModeLoad3 = document.getElementById("ModeLoad3");
      var valueModeLoad3 = oModeLoad3.options[oModeLoad3.selectedIndex].value;
    
        if(valueModeLoad3 === "1")
        {
        console.log("chon INPUT");
        dataModePin3 = "INPUT";
        var oTypeLoad3 = document.getElementById("TypeOutPutLoad3");
        var valueTypeLoad3 = oTypeLoad3.options[oTypeLoad3.selectedIndex].value;
        if(valueTypeLoad3 === "1")
          sendDataload3 = "B";
        }
        else if(valueModeLoad3 === "2")
        {
        console.log("chon OUTPUT");
        dataModePin3 = "OUTPUT";
        var oTypeLoad3 = document.getElementById("TypeOutPutLoad3");
        var valueTypeLoad3 = oTypeLoad3.options[oTypeLoad3.selectedIndex].value;
        if(valueTypeLoad3 === "1")
          sendDataload3 = "Tg";
        else if(valueTypeLoad3 === "2")
          sendDataload3 = "Sw";
        else sendDataload3 = "Pw";
        }
    
         document.getElementById("respondP3V1").innerHTML = "Sending..";
         
         readytime = 1; 
         ChannelPin[2] = 1; // dem phan timer dinh time
         checkTimeOut3 = 1;
        
         checkPinNo3 = 3;
         PinCh3 = 1;
         GPinCh = 3;
        
        var xhttp = new XMLHttpRequest();
         xhttp.open("GET", "/api/setting/config/GPIO?Pin="+ checkPinNo3 +"&SetMode="+ dataModePin3 + "&status=" + sendDataload3, true); 
        xhttp.send();
    }
    }
  function cancelload3()
    {
       console.log("tac dong cancel load 3");
     
    }
  
  function saveload4()
    {
    console.log("tac dong save load 4!!!");
    if(document.getElementById("respondP4V1").innerHTML != "Disconnect")
    {
      var oModeLoad4 = document.getElementById("ModeLoad4");
      var valueModeLoad4 = oModeLoad4.options[oModeLoad4.selectedIndex].value;
    
        if(valueModeLoad4 === "1")
        {
        console.log("chon INPUT");
        dataModePin4 = "INPUT";
        var oTypeLoad4 = document.getElementById("TypeOutPutLoad4");
        var valueTypeLoad4 = oTypeLoad4.options[oTypeLoad4.selectedIndex].value;
        if(valueTypeLoad4 === "1")
          sendDataload4 = "B";
        }
        else if(valueModeLoad4 === "2")
        {
        console.log("chon OUTPUT");
        dataModePin4 = "OUTPUT";
        var oTypeLoad4 = document.getElementById("TypeOutPutLoad4");
        var valueTypeLoad4 = oTypeLoad4.options[oTypeLoad4.selectedIndex].value;
        if(valueTypeLoad4 === "1")
          sendDataload4 = "Tg";
        else if(valueTypeLoad4 === "2")
          sendDataload4 = "Sw";
        else sendDataload4 = "Pw";
        }
    
         document.getElementById("respondP4V1").innerHTML = "Sending..";
         
         readytime = 1; 
         ChannelPin[3] = 1; // dem phan timer dinh time
         checkTimeOut4 = 1;
        
         checkPinNo4 = 4;
         PinCh4 = 1;
         GPinCh = 4;
        
        var xhttp = new XMLHttpRequest();
         xhttp.open("GET", "/api/setting/config/GPIO?Pin="+ checkPinNo4 +"&SetMode="+ dataModePin4 + "&status=" + sendDataload4, true); 
        xhttp.send();
    }
    }
  function cancelload4()
    {
       console.log("tac dong cancel load 4");
     
    }
  function saveload5()
    {
    console.log("tac dong save load 5!!!");
    if(document.getElementById("respondP5V1").innerHTML != "Disconnect")
    {
      var oModeLoad5 = document.getElementById("ModeLoad5");
      var valueModeLoad5 = oModeLoad5.options[oModeLoad5.selectedIndex].value;
    
        if(valueModeLoad5 === "1")
        {
        console.log("chon INPUT");
        dataModePin5 = "INPUT";
        var oTypeLoad5 = document.getElementById("TypeOutPutLoad5");
        var valueTypeLoad5 = oTypeLoad5.options[oTypeLoad5.selectedIndex].value;
        if(valueTypeLoad5 === "1")
          sendDataload5 = "B";
        }
        else if(valueModeLoad5 === "2")
        {
        console.log("chon OUTPUT");
        dataModePin5 = "OUTPUT";
        var oTypeLoad5 = document.getElementById("TypeOutPutLoad5");
        var valueTypeLoad5 = oTypeLoad5.options[oTypeLoad5.selectedIndex].value;
        if(valueTypeLoad5 === "1")
          sendDataload5 = "Tg";
        else if(valueTypeLoad5 === "2")
          sendDataload5 = "Sw";
        else sendDataload5 = "Pw";
        }
    
         document.getElementById("respondP5V1").innerHTML = "Sending..";
         
         readytime = 1; 
         ChannelPin[4] = 1; // dem phan timer dinh time
         checkTimeOut5 = 1;
        
         checkPinNo5 = 5;
         PinCh5 = 1;
         GPinCh = 5;
        
        var xhttp = new XMLHttpRequest();
         xhttp.open("GET", "/api/setting/config/GPIO?Pin="+ checkPinNo5 +"&SetMode="+ dataModePin5 + "&status=" + sendDataload5, true); 
        xhttp.send();
    }
    }
  function cancelload5()
    {
       console.log("tac dong cancel load 5");
     
    }
  
  function saveload6()
    {
    console.log("tac dong save load 6!!!");
    if(document.getElementById("respondP6V1").innerHTML != "Disconnect")
    {
      var oModeLoad6 = document.getElementById("ModeLoad6");
      var valueModeLoad6 = oModeLoad6.options[oModeLoad6.selectedIndex].value;
    
        if(valueModeLoad6 === "1")
        {
        console.log("chon INPUT");
        dataModePin6 = "INPUT";
        var oTypeLoad6 = document.getElementById("TypeOutPutLoad6");
        var valueTypeLoad6 = oTypeLoad6.options[oTypeLoad6.selectedIndex].value;
        if(valueTypeLoad6 === "1")
          sendDataload6 = "B";
        }
        else if(valueModeLoad6 === "2")
        {
        console.log("chon OUTPUT");
        dataModePin6 = "OUTPUT";
        var oTypeLoad6 = document.getElementById("TypeOutPutLoad6");
        var valueTypeLoad6 = oTypeLoad6.options[oTypeLoad6.selectedIndex].value;
        if(valueTypeLoad6 === "1")
          sendDataload6 = "Tg";
        else if(valueTypeLoad6 === "2")
          sendDataload6 = "Sw";
        else sendDataload6 = "Pw";
        }
    
         document.getElementById("respondP6V1").innerHTML = "Sending..";
         
         readytime = 1; 
         ChannelPin[5] = 1; // dem phan timer dinh time
         checkTimeOut6 = 1;
        
         checkPinNo6 = 6;
         PinCh6 = 1;
         GPinCh = 6;
        
        var xhttp = new XMLHttpRequest();
         xhttp.open("GET", "/api/setting/config/GPIO?Pin="+ checkPinNo6 +"&SetMode="+ dataModePin6 + "&status=" + sendDataload6, true); 
        xhttp.send();
    }
    }
  function cancelload6()
    {
       console.log("tac dong cancel load 6");
     
    }
  
  function saveload7()
    {
    console.log("tac dong save load 7!!!");
    if(document.getElementById("respondP7V1").innerHTML != "Disconnect")
    {
      var oModeLoad7 = document.getElementById("ModeLoad7");
      var valueModeLoad7 = oModeLoad7.options[oModeLoad7.selectedIndex].value;
    
        if(valueModeLoad7 === "1")
        {
        console.log("chon INPUT");
        dataModePin7 = "INPUT";
        var oTypeLoad7 = document.getElementById("TypeOutPutLoad7");
        var valueTypeLoad7 = oTypeLoad7.options[oTypeLoad7.selectedIndex].value;
        if(valueTypeLoad7 === "1")
          sendDataload7 = "B";
        }
        else if(valueModeLoad7 === "2")
        {
        console.log("chon OUTPUT");
        dataModePin7 = "OUTPUT";
        var oTypeLoad7 = document.getElementById("TypeOutPutLoad7");
        var valueTypeLoad7 = oTypeLoad7.options[oTypeLoad7.selectedIndex].value;
        if(valueTypeLoad7 === "1")
          sendDataload7 = "Tg";
        else if(valueTypeLoad7 === "2")
          sendDataload7 = "Sw";
        else sendDataload7 = "Pw";
        }
    
         document.getElementById("respondP7V1").innerHTML = "Sending..";
         
         readytime = 1; 
         ChannelPin[6] = 1; // dem phan timer dinh time
         checkTimeOut7 = 1;
        
         checkPinNo7 = 7;
         PinCh7 = 1;
         GPinCh = 7;
        
        var xhttp = new XMLHttpRequest();
         xhttp.open("GET", "/api/setting/config/GPIO?Pin="+ checkPinNo7 +"&SetMode="+ dataModePin7 + "&status=" + sendDataload7, true); 
        xhttp.send();
    }
    }
  function cancelload7()
    {
       console.log("tac dong cancel load 7");
     
    }
  
  function saveload8()
    {
    console.log("tac dong save load 7!!!");
    if(document.getElementById("respondP8V1").innerHTML != "Disconnect")
    {
      var oModeLoad8 = document.getElementById("ModeLoad8");
      var valueModeLoad8 = oModeLoad8.options[oModeLoad8.selectedIndex].value;
    
        if(valueModeLoad8 === "1")
        {
        console.log("chon INPUT");
        dataModePin8 = "INPUT";
        var oTypeLoad8 = document.getElementById("TypeOutPutLoad8");
        var valueTypeLoad8 = oTypeLoad8.options[oTypeLoad8.selectedIndex].value;
        if(valueTypeLoad8 === "1")
          sendDataload8 = "B";
        }
        else if(valueModeLoad8 === "2")
        {
        console.log("chon OUTPUT");
        dataModePin8 = "OUTPUT";
        var oTypeLoad8 = document.getElementById("TypeOutPutLoad8");
        var valueTypeLoad8 = oTypeLoad8.options[oTypeLoad8.selectedIndex].value;
        if(valueTypeLoad8 === "1")
          sendDataload8 = "Tg";
        else if(valueTypeLoad8 === "2")
          sendDataload8 = "Sw";
        else sendDataload8 = "Pw";
        }
    
         document.getElementById("respondP8V1").innerHTML = "Sending..";
         
         readytime = 1; 
         ChannelPin[7] = 1; // dem phan timer dinh time
         checkTimeOut8 = 1;
        
         checkPinNo8 = 8;
         PinCh8 = 1;
         GPinCh = 8;
        
        var xhttp = new XMLHttpRequest();
         xhttp.open("GET", "/api/setting/config/GPIO?Pin="+ checkPinNo8 +"&SetMode="+ dataModePin8 + "&status=" + sendDataload8, true); 
        xhttp.send();
    }
    }
  function cancelload7()
    {
       console.log("tac dong cancel load 7");
     
    }
 
  
  function stopCount()
  {
    clearTimeout(t);
    timer_is_on=0;
    
  } 
  
  
  function timedCount()
  {
    <!-- khi dem timeer thi chay trong phan nay -->
    t=setTimeout("timedCount()",1000);
  count_timer++;
    switch(count_timer)
    {
    case 3:
      count_timer=0;
      if(GlobalCheckTimeOut - LastGlobalCheckTimeOut > 0)
      {
        GlobalCheckTimeOut =0;
        LastGlobalCheckTimeOut = 0;
        LastGlobalCheckTimeOut = GlobalCheckTimeOut;
        if(document.getElementById("respondP1V1").innerHTML == "Disconnect")
        document.getElementById("respondP1V1").innerHTML = "";
        if(document.getElementById("respondP2V1").innerHTML == "Disconnect")
        document.getElementById("respondP2V1").innerHTML = ""; 
        if(document.getElementById("respondP3V1").innerHTML == "Disconnect")
        document.getElementById("respondP3V1").innerHTML = "";
        if(document.getElementById("respondP4V1").innerHTML == "Disconnect")
        document.getElementById("respondP4V1").innerHTML = "";
        if(document.getElementById("respondP5V1").innerHTML == "Disconnect")
        document.getElementById("respondP5V1").innerHTML = "";
        if(document.getElementById("respondP6V1").innerHTML == "Disconnect")
        document.getElementById("respondP6V1").innerHTML = ""; 
        if(document.getElementById("respondP7V1").innerHTML == "Disconnect")
        document.getElementById("respondP7V1").innerHTML = "";
        if(document.getElementById("respondP8V1").innerHTML == "Disconnect")
        document.getElementById("respondP8V1").innerHTML = "";
      }
      else {
        GlobalCheckTimeOut =0;
        LastGlobalCheckTimeOut = 0;
        LastGlobalCheckTimeOut = GlobalCheckTimeOut;
        document.getElementById("respondP1V1").innerHTML = "Disconnect"; 
        document.getElementById("respondP2V1").innerHTML = "Disconnect"; 
        document.getElementById("respondP3V1").innerHTML = "Disconnect"; 
        document.getElementById("respondP4V1").innerHTML = "Disconnect"; 
        document.getElementById("respondP5V1").innerHTML = "Disconnect"; 
        document.getElementById("respondP6V1").innerHTML = "Disconnect"; 
        document.getElementById("respondP7V1").innerHTML = "Disconnect";
        document.getElementById("respondP8V1").innerHTML = "Disconnect";    
      }
      break;
      
    }
  if(readytime)
  {
    if(ChannelPin[0])
    {
      itimeCh1++;
      if(checkTimeOut1) // bi loi
      {
        if(itimeCh1 == 4)
        {
          document.getElementById("respondP1V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/setting/config/GPIO?Pin="+ checkPinNo1 +"&SetMode=" + "OUTPUT" + "&status=" + sendDataload1, true); 
          xhttp.send();
          console.log("gui lan lan 1 pin 2"); 
        }
        else if(itimeCh1 == 7)
        {
          document.getElementById("respondP1V1").innerHTML = "Disconnect";
          itimeCh1 = 0;
          ChannelPin[0] = 0;
        }
      }
      else 
      {
        if(itimeCh1 > 2)
        {
          itimeCh1 = 0;
          ChannelPin[0] = 0;
          document.getElementById("respondP1V1").innerHTML = "";
        }
      }
    }
    
    if(ChannelPin[1])
    {
      itimeCh2++;
      if(checkTimeOut2) // bi loi
      {
        if(itimeCh2 == 4)
        {
          document.getElementById("respondP2V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
      xhttp.open("GET", "/api/setting/config/GPIO?Pin="+ checkPinNo2 +"&SetMode="+ dataModePin2 + "&status=" + sendDataload2, true); 
          xhttp.send();
          console.log("gui lan lan 1 pin 2"); 
        }
        else if(itimeCh2 == 7)
        {
          document.getElementById("respondP2V1").innerHTML = "Disconnect";
          itimeCh2 = 0;
          ChannelPin[1] = 0;
        }
      }
      else 
      {
        if(itimeCh2 > 2)
        {
          itimeCh2 = 0;
          ChannelPin[1] = 0;
          document.getElementById("respondP2V1").innerHTML = "";
        }
      }
    }
    
    if(ChannelPin[2])
    {
      itimeCh3++;
      if(checkTimeOut3) // bi loi
      {
        if(itimeCh3 == 4)
        {
          document.getElementById("respondP3V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/setting/config/GPIO?Pin="+ checkPinNo3 +"&SetMode="+ dataModePin3 + "&status=" + sendDataload3, true);
          xhttp.send();
          console.log("gui lan lan 1 pin 3"); 
        }
        else if(itimeCh3 == 7)
        {
          document.getElementById("respondP3V1").innerHTML = "Disconnect";
          itimeCh3 = 0;
          ChannelPin[2] = 0;
        }
      }
      else 
      {
        if(itimeCh3 > 2)
        {
          itimeCh3 = 0;
          ChannelPin[2] = 0;
          document.getElementById("respondP3V1").innerHTML = "";
        }
      }
    }
    
    if(ChannelPin[3])
    {
      itimeCh4++;
      if(checkTimeOut4) // bi loi
      {
        if(itimeCh4 == 4)
        {
          document.getElementById("respondP4V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/setting/config/GPIO?Pin="+ checkPinNo4 +"&SetMode="+ dataModePin4 + "&status=" + sendDataload4, true);
          xhttp.send();
          console.log("gui lan lan 1 pin 4"); 
        }
        else if(itimeCh4 == 7)
        {
          document.getElementById("respondP4V1").innerHTML = "Disconnect";
          itimeCh4 = 0;
          ChannelPin[3] = 0;
        }
      }
      else 
      {
        if(itimeCh4 > 2)
        {
          itimeCh4 = 0;
          ChannelPin[3] = 0;
          document.getElementById("respondP4V1").innerHTML = "";
        }
      }
    }
    
    if(ChannelPin[4])
    {
      itimeCh5++;
      if(checkTimeOut5) // bi loi
      {
        if(itimeCh5 == 4)
        {
          document.getElementById("respondP5V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/setting/config/GPIO?Pin="+ checkPinNo5 +"&SetMode="+ dataModePin5 + "&status=" + sendDataload5, true);
          xhttp.send();
          console.log("gui lan lan 1 pin 5"); 
        }
        else if(itimeCh4 == 7)
        {
          document.getElementById("respondP5V1").innerHTML = "Disconnect";
          itimeCh5 = 0;
          ChannelPin[4] = 0;
        }
      }
      else 
      {
        if(itimeCh5 > 2)
        {
          itimeCh5 = 0;
          ChannelPin[4] = 0;
          document.getElementById("respondP5V1").innerHTML = "";
        }
      }
    }
    
    if(ChannelPin[5])
    {
      itimeCh6++;
      if(checkTimeOut6) // bi loi
      {
        if(itimeCh6 == 4)
        {
          document.getElementById("respondP6V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/setting/config/GPIO?Pin="+ checkPinNo6 +"&SetMode="+ dataModePin6 + "&status=" + sendDataload6, true);
          xhttp.send();
          console.log("gui lan lan 1 pin 6"); 
        }
        else if(itimeCh6 == 7)
        {
          document.getElementById("respondP6V1").innerHTML = "Disconnect";
          itimeCh6 = 0;
          ChannelPin[5] = 0;
        }
      }
      else 
      {
        if(itimeCh6 > 2)
        {
          itimeCh6 = 0;
          ChannelPin[5] = 0;
          document.getElementById("respondP6V1").innerHTML = "";
        }
      }
    }
  
  if(ChannelPin[6])
    {
      itimeCh7++;
      if(checkTimeOut7) // bi loi
      {
        if(itimeCh7 == 4)
        {
          document.getElementById("respondP7V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/setting/config/GPIO?Pin="+ checkPinNo7 +"&SetMode="+ dataModePin7 + "&status=" + sendDataload7, true);
          xhttp.send();
          console.log("gui lan lan 1 pin 7"); 
        }
        else if(itimeCh7 == 7)
        {
          document.getElementById("respondP7V1").innerHTML = "Disconnect";
          itimeCh7 = 0;
          ChannelPin[6] = 0;
        }
      }
      else 
      {
        if(itimeCh7 > 2)
        {
          itimeCh7 = 0;
          ChannelPin[6] = 0;
          document.getElementById("respondP7V1").innerHTML = "";
        }
      }
    }
  
  if(ChannelPin[7])
    {
      itimeCh8++;
      if(checkTimeOut8) // bi loi
      {
        if(itimeCh8 == 4)
        {
          document.getElementById("respondP8V1").innerHTML = "timeOut";
          var xhttp = new XMLHttpRequest();
          xhttp.open("GET", "/api/setting/config/GPIO?Pin="+ checkPinNo8 +"&SetMode="+ dataModePin8 + "&status=" + sendDataload8, true);
          xhttp.send();
          console.log("gui lan lan 1 pin 8"); 
        }
        else if(itimeCh8 == 7)
        {
          document.getElementById("respondP8V1").innerHTML = "Disconnect";
          itimeCh8 = 0;
          ChannelPin[7] = 0;
        }
      }
      else 
      {
        if(itimeCh8 > 2)
        {
          itimeCh8 = 0;
          ChannelPin[7] = 0;
          document.getElementById("respondP8V1").innerHTML = "";
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
      
    }
    
  }
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
