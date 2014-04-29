var details = new Array();
var def_wdt = "650";
var def_hgt = "250";
var def_tbar = "no";
var def_sbar = "yes";
var def_rszbl = "yes";

function nop() {}

function set_params(form)
{
  cleanUp();
  if (form.tbar.checked) {
    // alert(form.tbar.value);
    def_tbar="yes";
  }
  else {
    def_tbar="no";
  }
}
function disit(i,url)
{
   disit_(i,url,def_wdt,def_hgt,def_tbar,def_sbar,def_rszbl);
}
function disitwh(i,url,w,h)
{
   disit_(i,url,w,h,def_tbar,def_sbar,def_rszbl);
}
function disit_(i, url, wdt, hgt, tbar, sbar, rszbl)
{
   if (!details[i] || details[i] == null || details[i].closed) {
       details[i] = window.open(url,"details" + i,
                                "width="+wdt+",height="+hgt+
                                ",toolbar="+tbar+",scrollbars="+sbar+
                                ",location="+tbar+
                                ",menubar="+tbar+
                                ",resizable="+rszbl);
      // alert("length of details is " + details.length);
   }
   else {
      details[i].location.href = url;
      details[i].resizeTo(wdt,hgt);
   }
   details[i].focus();
}

function cleanUp()
{
   for (var i in details) {
      if (details[i] != null && !details[i].closed) {
         details[i].close();
      }
   }
}
