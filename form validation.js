function formValidation()
{
var frm=document.getElementById("registration");
var uid = document.getElementById("userid");
var passid = document.getElementById("passid");
var uname = document.getElementById("username");
var uadd = document.getElementById("address");
var ucountry = document.getElementById("country");
var uzip = document.getElementById("zip");
var uemail = document.getElementById("email");
var ugender = document.getElementsByName("gender");
if(userid_validation(uid,5,12))
{
if(passid_validation(passid,7,12))
{
if(allLetter(uname))
{
if(alphanumeric(uadd))
{
if(countryselect(ucountry))
{
if(allnumeric(uzip))
{
if(ValidateEmail(uemail))
{
if(validgender(ugender))
{
frm.submit();
} } } } } } }
}
document.getElementById("registration").reset();
}
function userid_validation(uid,mx,my)
{
var uid_len = uid.value.length;
if(uid_len == 0 || uid_len >= my || uid_len < mx)
{
alert("User Id should not be empty / length be between "+mx+" to "+my);
uid.focus();
return false;
}
return true;
}
function passid_validation(passid,mx,my)
{
var passid_len = passid.value.length;
if (passid_len == 0 ||passid_len >= my || passid_len < mx)
{
alert("Password should not be empty / length be between "+mx+" to "+my);
passid.focus();
return false;
}
return true;
}
function allLetter(uname)
{
var letters = /^[A-Za-z]+$/;
if(uname.value==null)
{
alert('Username should not be empty');
}
else if(uname.value.match(letters)) //letters.test(uname.value);
{
return true;
}
else
{
alert('Username must have alphabet characters only');
uname.value="";
uname.focus();
return false;
}
}
function alphanumeric(uadd)
{
var letters = /^[0-9a-zA-Z]+$/;
if(uadd.value.match(letters))
{
return true;
}
else
{
alert('User address must have alphanumeric characters only');
uadd.focus();
return false;
}
}
function countryselect(ucountry)
{
if(ucountry.value == "Default")
{
alert('Select your country from the list');
ucountry.focus();
return false;
}
else
{
return true;
}
}
function allnumeric(uzip)
{
var numbers = /^[0-9]+$/;
if(uzip.value.match(numbers))
{
return true;
}
else
{
alert('ZIP code must have numeric characters only');
uzip.focus();
return false;
}
}
function ValidateEmail(uemail)
{
var mailformat = /^([a-zA-Z0-9_\.\-])+\@(([a-zA-Z0-9\-])+\.)+([a-zA-Z0-9]{2,4})+$/;
if(uemail.value.match(mailformat))
{
return true;
}
else
{
alert("You have entered an invalid email address!");
uemail.focus();
return false;
}
}
function validgender(ugender)
{
var isChecked = false;
for (var i = 0; i < ugender.length; i++) {
if (ugender[i].checked) {
isChecked = true; // found one element checked
break;
}
}
if(isChecked==false)
{
alert("Select male/female");
}
return isChecked;
}