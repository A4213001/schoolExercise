var http = require("http");
var path = require("path");
var express = require("express");
var logger = require("morgan");
var bodyParser = require("body-parser");
var url = require('url');

var app = express();

app.set("views", path.resolve(__dirname, "views"));
app.set("view engine", "ejs");

app.use('/images', express.static(__dirname + '/images'));
app.use('/css', express.static(__dirname + '/css'));

app.use(logger("dev"));

app.use(bodyParser.urlencoded({ extended: false }));

app.get("/", function(request, response) {
  response.render("index",
 		{
 			loginStatus:loginStatus,
 		}
 	);
});

app.get("/index", function(request, response) {
  response.render("index",
 		{
 			loginStatus:loginStatus,
 		}
 	);
});

var vegArray=[{
	  "image": "images/veg1.jpg",
	  "name": "胡蘿蔔",
	  "useEat": 96,
	  "heat": 37,
	  "protein": 1,
	  "fat": 0.2,
	  "cholesterol": 0,
	  "dietaryFiber": 1.1,
	  "carbohydrates": 7.7,
	  "vitaminsA": 688,
	  "score": 0,
	  "grade": 0,
	  "ID": 0,
	  "count": 0,
	  "textAry": [],
  },{
  	  "image": "images/veg2.jpg",
	  "name": "白蘿蔔",
	  "useEat": 94,
	  "heat": 20,
	  "protein": 0.8,
	  "fat": 0.1,
	  "cholesterol": 0,
	  "dietaryFiber": 0.6,
	  "carbohydrates": 4,
	  "vitaminsA": 3,
	  "score": 0,
	  "grade": 0,
	  "ID": 1,
	  "count": 0,
	  "textAry": [],
  },{
  	  "image": "images/veg3.jpg",
	  "name": "大白菜",
	  "useEat": 92,
	  "heat": 21,
	  "protein": 1.7,
	  "fat": 0.2,
	  "cholesterol": 0,
	  "dietaryFiber": 0.6,
	  "carbohydrates": 3.1,
	  "vitaminsA": 42,
	  "score": 0,
	  "grade": 0,
	  "ID": 2,
	  "count": 0,
	  "textAry": [],
  },{
  	  "image": "images/veg4.jpg",
	  "name": "菠菜",
	  "useEat": 89,
	  "heat": 24,
	  "protein": 2.6,
	  "fat": 0.3,
	  "cholesterol": 0,
	  "dietaryFiber": 1.7,
	  "carbohydrates": 2.8,
	  "vitaminsA": 487,
	  "score": 0,
	  "grade": 0,
	  "ID": 3,
	  "count": 0,
	  "textAry": [],
  },{
  	  "image": "images/veg5.jpg",
	  "name": "韭菜",
	  "useEat": 66,
	  "heat": 14,
	  "protein": 0.8,
	  "fat": 0.1,
	  "cholesterol": 0,
	  "dietaryFiber": 1.4,
	  "carbohydrates": 3.2,
	  "vitaminsA": 235,
	  "score": 0,
	  "grade": 0,
	  "ID": 4,
	  "count": 0,
	  "textAry": [],
  },{
  	  "image": "images/veg6.jpg",
	  "name": "油菜",
	  "useEat": 87,
	  "heat": 23,
	  "protein": 1.8,
	  "fat": 0.5,
	  "cholesterol": 0,
	  "dietaryFiber": 1.1,
	  "carbohydrates": 2.7,
	  "vitaminsA": 103,
	  "score": 0,
	  "grade": 0,
	  "ID": 5,
	  "count": 0,
	  "textAry": [],
  },{
  	  "image": "images/veg7.jpg",
	  "name": "冬瓜",
	  "useEat": 80,
	  "heat": 11,
	  "protein": 0.4,
	  "fat": 0.2,
	  "cholesterol": 0,
	  "dietaryFiber": 0.7,
	  "carbohydrates": 1.9,
	  "vitaminsA": 13,
	  "score": 0,
	  "grade": 0,
	  "ID": 6,
	  "count": 0,
	  "textAry": [],
  },{
  	  "image": "images/veg8.jpg",
	  "name": "西紅柿",
	  "useEat": 97,
	  "heat": 23,
	  "protein": 1.4,
	  "fat": 0.3,
	  "cholesterol": 0,
	  "dietaryFiber": 0.5,
	  "carbohydrates": 3.5,
	  "vitaminsA": 92,
	  "score": 0,
	  "grade": 0,
	  "ID": 7,
	  "count": 0,
	  "textAry": [],
  },{
  	  "image": "images/veg9.jpg",
	  "name": "青椒",
	  "useEat": 84,
	  "heat": 23,
	  "protein": 1.4,
	  "fat": 0.3,
	  "cholesterol": 0,
	  "dietaryFiber": 2.1,
	  "carbohydrates": 3.7,
	  "vitaminsA": 57,
	  "score": 0,
	  "grade": 0,
	  "ID": 8,
	  "count": 0,
	  "textAry": [],
  }
];

app.get("/vegetables", function(req, res) {
    res.render("vegetables",
      {
      	vegArray:vegArray,
 		loginStatus:loginStatus,
      }
    ); 
});

var fruArray=[{
	  "image": "images/fru1.jpg",
	  "name": "蘋果",
	  "water": 88.5,
	  "fiber": 0.8,
	  "calcium": 11,
	  "phosphorus": 10,
	  "iron": 0.5,
	  "vitaminsB1": 0.03,
	  "vitaminsB2": 0.06,
	  "vitaminsC": 5,
	  "score": 0,
	  "grade": 0,
	  "ID": 0,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru2.jpg",
	  "name": "香蕉",
	  "water": 75.3,
	  "fiber": 0.5,
	  "calcium": 9,
	  "phosphorus": 24,
	  "iron": 0.5,
	  "vitaminsB1": 0.03,
	  "vitaminsB2": 0.06,
	  "vitaminsC": 8,
	  "score": 0,
	  "grade": 0,
	  "ID": 1,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru3.jpg",
	  "name": "楊桃",
	  "water": 90.0,
	  "fiber": 0.8,
	  "calcium": 4,
	  "phosphorus": 16,
	  "iron": 0.9,
	  "vitaminsB1": 0.04,
	  "vitaminsB2": 0.03,
	  "vitaminsC": 40,
	  "score": 0,
	  "grade": 0,
	  "ID": 2,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru4.jpg",
	  "name": "釋迦",
	  "water": 77.3,
	  "fiber": 2.9,
	  "calcium": 40,
	  "phosphorus": 49,
	  "iron": 0.4,
	  "vitaminsB1": 0.18,
	  "vitaminsB2": 0.20,
	  "vitaminsC": 35,
	  "score": 0,
	  "grade": 0,
	  "ID": 3,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru5.jpg",
	  "name": "葡萄",
	  "water": 84.6,
	  "fiber": 0.3,
	  "calcium": 15,
	  "phosphorus": 27,
	  "iron": 0.7,
	  "vitaminsB1": 0.06,
	  "vitaminsB2": 0.05,
	  "vitaminsC": 9,
	  "score": 0,
	  "grade": 0,
	  "ID": 4,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru6.jpg",
	  "name": "芭樂",
	  "water": 80.2,
	  "fiber": 5.8,
	  "calcium": 10,
	  "phosphorus": 10,
	  "iron": 0.6,
	  "vitaminsB1": 0.04,
	  "vitaminsB2": 0.03,
	  "vitaminsC": 225,
	  "score": 0,
	  "grade": 0,
	  "ID": 5,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru7.jpg",
	  "name": "檸檬",
	  "water": 91.3,
	  "fiber": 0.7,
	  "calcium": 50,
	  "phosphorus": 23,
	  "iron": 0.2,
	  "vitaminsB1": 0.06,
	  "vitaminsB2": 0.02,
	  "vitaminsC": 43,
	  "score": 0,
	  "grade": 0,
	  "ID": 6,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru8.jpg",
	  "name": "荔枝",
	  "water": 82.6,
	  "fiber": 0.4,
	  "calcium": 19,
	  "phosphorus": 27,
	  "iron": 0.3,
	  "vitaminsB1": 0.19,
	  "vitaminsB2": 0.08,
	  "vitaminsC": 63,
	  "score": 0,
	  "grade": 0,
	  "ID": 7,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru9.jpg",
	  "name": "龍眼",
	  "water": 82.4,
	  "fiber": 0.4,
	  "calcium": 23,
	  "phosphorus": 42,
	  "iron": 0.3,
	  "vitaminsB1": 0.04,
	  "vitaminsB2": 0.14,
	  "vitaminsC": 112,
	  "score": 0,
	  "grade": 0,
	  "ID": 8,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru10.jpg",
	  "name": "枇杷",
	  "water": 89.1,
	  "fiber": 0.3,
	  "calcium": 9,
	  "phosphorus": 10,
	  "iron": 0.1,
	  "vitaminsB1": 0.02,
	  "vitaminsB2": 0.07,
	  "vitaminsC": 5,
	  "score": 0,
	  "grade": 0,
	  "ID": 9,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru11.jpg",
	  "name": "芒果",
	  "water": 83.3,
	  "fiber": 0.9,
	  "calcium": 20,
	  "phosphorus": 8,
	  "iron": 0.4,
	  "vitaminsB1": 0.04,
	  "vitaminsB2": 0.05,
	  "vitaminsC": 34,
	  "score": 0,
	  "grade": 0,
	  "ID": 10,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru12.jpg",
	  "name": "香瓜",
	  "water": 90.1,
	  "fiber": 0.2,
	  "calcium": 17,
	  "phosphorus": 17,
	  "iron": 0.3,
	  "vitaminsB1": 0.04,
	  "vitaminsB2": 0.02,
	  "vitaminsC": 22,
	  "score": 0,
	  "grade": 0,
	  "ID": 11,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru13.jpg",
	  "name": "椪柑",
	  "water": 87.4,
	  "fiber": 0.4,
	  "calcium": 25,
	  "phosphorus": 17,
	  "iron": 0.2,
	  "vitaminsB1": 0.11,
	  "vitaminsB2": 0.05,
	  "vitaminsC": 68,
	  "score": 0,
	  "grade": 0,
	  "ID": 12,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru14.jpg",
	  "name": "桶柑",
	  "water": 89.3,
	  "fiber": 0.4,
	  "calcium": 36,
	  "phosphorus": 15,
	  "iron": 0.2,
	  "vitaminsB1": 0.08,
	  "vitaminsB2": 0.05,
	  "vitaminsC": 68,
	  "score": 0,
	  "grade": 0,
	  "ID": 13,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru15.jpg",
	  "name": "木瓜",
	  "water": 88.4,
	  "fiber": 0.5,
	  "calcium": 22,
	  "phosphorus": 22,
	  "iron": 0.3,
	  "vitaminsB1": 0.04,
	  "vitaminsB2": 0.03,
	  "vitaminsC": 73,
	  "score": 0,
	  "grade": 0,
	  "ID": 14,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru16.jpg",
	  "name": "桃子",
	  "water": 86.9,
	  "fiber": 1.5,
	  "calcium": 8,
	  "phosphorus": 38,
	  "iron": 1.0,
	  "vitaminsB1": 0.03,
	  "vitaminsB2": 0.23,
	  "vitaminsC": 9,
	  "score": 0,
	  "grade": 0,
	  "ID": 15,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru17.jpg",
	  "name": "水梨",
	  "water": 90.1,
	  "fiber": 0.6,
	  "calcium": 10,
	  "phosphorus": 17,
	  "iron": 0.4,
	  "vitaminsB1": 0.02,
	  "vitaminsB2": 0.02,
	  "vitaminsC": 9,
	  "score": 0,
	  "grade": 0,
	  "ID": 16,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru18.jpg",
	  "name": "紅柿",
	  "water": 86.4,
	  "fiber": 0.2,
	  "calcium": 10,
	  "phosphorus": 18,
	  "iron": 0.4,
	  "vitaminsB1": 0.05,
	  "vitaminsB2": 0.09,
	  "vitaminsC": 35,
	  "score": 0,
	  "grade": 0,
	  "ID": 17,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru19.jpg",
	  "name": "鳳梨",
	  "water": 88.4,
	  "fiber": 0.6,
	  "calcium": 16,
	  "phosphorus": 9,
	  "iron": 0.7,
	  "vitaminsB1": 0.10,
	  "vitaminsB2": 0.04,
	  "vitaminsC": 29,
	  "score": 0,
	  "grade": 0,
	  "ID": 18,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru20.jpg",
	  "name": "李子",
	  "water": 88.1,
	  "fiber": 0.3,
	  "calcium": 10,
	  "phosphorus": 19,
	  "iron": 0.9,
	  "vitaminsB1": 0.04,
	  "vitaminsB2": 0.17,
	  "vitaminsC": 10,
	  "score": 0,
	  "grade": 0,
	  "ID": 19,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru21.jpg",
	  "name": "蓮霧",
	  "water": 89.8,
	  "fiber": 0.6,
	  "calcium": 21,
	  "phosphorus": 23,
	  "iron": 0.4,
	  "vitaminsB1": 0.03,
	  "vitaminsB2": 0.04,
	  "vitaminsC": 20,
	  "score": 0,
	  "grade": 0,
	  "ID": 20,
	  "count": 0,
	  "textAry": [],
  },{
	  "image": "images/fru22.jpg",
	  "name": "西瓜",
	  "water": 93.8,
	  "fiber": 0.2,
	  "calcium": 8,
	  "phosphorus": 11,
	  "iron": 0.3,
	  "vitaminsB1": 0.05,
	  "vitaminsB2": 0.04,
	  "vitaminsC": 10,
	  "score": 0,
	  "grade": 0,
	  "ID": 21,
	  "count": 0,
	  "textAry": [],
  }
];

app.get("/fruit", function(req, res) {
    res.render("fruit",
      {
      	fruArray:fruArray,
 		loginStatus:loginStatus,
      }
    ); 
});

app.get("/grade", function(req, res) {
    res.render("grade",
      {
      	vegArray:vegArray,
      	fruArray:fruArray,
 		loginStatus:loginStatus,
      }
    ); 
});

app.post("/grade", function(req, res) {
    if (req.body.select=="請選擇"||req.body.num=="請選擇"||!req.body.text) {
		res.render("fail",
 			{
 				loginStatus:loginStatus,
 			}
 		);
	}
	else{
		vegArray.forEach(function(mv){
	  		if(req.body.select==mv.name){
	  			vegArray[mv.ID].score+=parseInt(req.body.num);
	  			vegArray[mv.ID].count++;
	  			vegArray[mv.ID].grade=vegArray[mv.ID].score/vegArray[mv.ID].count;
	  			vegArray[mv.ID].textAry.push({
	  				select: loginStatus.name,
	  				num: req.body.num,
	    			text: req.body.text,
	    			published: new Date()
	  			});
	  			res.render("sucess",
 					{
 						loginStatus:loginStatus,
 					}
 				);
	  		}
		})
		fruArray.forEach(function(mv){
	  		if(req.body.select==mv.name){
	  			fruArray[mv.ID].score+=parseInt(req.body.num);
	  			fruArray[mv.ID].count++;
	  			fruArray[mv.ID].grade=fruArray[mv.ID].score/fruArray[mv.ID].count;
	  			fruArray[mv.ID].textAry.push({
	  				select: loginStatus.name,
	  				num: req.body.num,
	    			text: req.body.text,
	    			published: new Date(),
	    			ID: "1",
	  			});
	  			res.render("sucess",
 					{
 						loginStatus:loginStatus,
 					}
 				);
	  		}
		})
	}
});

app.get("/sucess", function(req, res) {
    res.render("sucess",
 		{
 			loginStatus:loginStatus,
 		}
 	);
});

app.get("/text", function(req, res) {
	var params = url.parse(req.url, true).query;
 	console.log(params);
 	if(params.fOv==0){
 		res.render("text",
      		{
      			array:vegArray[params.getId].textAry,
 				loginStatus:loginStatus,
      		}
    	); 
 	}
 	else{
    res.render("text",
	      {
	      	array:fruArray[params.getId].textAry,
 			loginStatus:loginStatus,
	      }
	    ); 
	}
});

var eql=0;

app.get("/search", function(req, res) {
	var params = url.parse(req.url, true).query;
 	console.log(params);
 	eql=0;
 	vegArray.forEach(function(mv){
 		if(params.search==mv.name){
 			res.render("searchVeg",
 				{
 					array:vegArray[mv.ID],
 					loginStatus:loginStatus,
 				}
 			); 
 			eql=1;
 		}
 	})
 	fruArray.forEach(function(mv){
 		if(params.search==mv.name){
 			res.render("searchFru",
 				{
 					array:fruArray[mv.ID],
 					loginStatus:loginStatus,
 				}
 			); 
 			eql=1;
 		}
 	})
 	if(eql==0){
 		res.render("search-error",
 			{
 				searchWord:params.search,
 				loginStatus:loginStatus,
 			}
 		);
 	}
});

var loginStatus={
	name: "",
	status: 0,
	permissions: 0,
	id: -1,
}
var memberId=0;
var member=[{
	account: "system999",
	password: "123456789",
	permissions: "1",
	name: "管理員",
	id: memberId,
}]

app.get("/login", function(req, res) {
    res.render("login",
 		{
 			loginStatus:loginStatus,
 		}
 	);
});

app.post("/login", function(req, res) {
	member.forEach(function(mv){
 		if(req.body.acc==mv.account){
 			if(req.body.pas==mv.password){
 				loginStatus.name=mv.name;
 				loginStatus.status=1;
 				loginStatus.permissions=mv.permissions;
 				loginStatus.id=mv.id;
 				res.render("index",
 					{
 						loginStatus:loginStatus,
 					}
 				);
 			}
 		}
 	})
 	if(loginStatus.status==0){
 		res.render("loginError",
 			{
 				loginStatus:loginStatus,
 			}
 		);
 	}
});

app.get("/logout", function(req, res) {
 	loginStatus.name="";
 	loginStatus.status=0;
 	loginStatus.permissions=0;
 	res.render("index",
 		{
 			loginStatus:loginStatus,
 		}
 	);
});

app.get("/signUp", function(req, res) {
 	res.render("signUp",
 		{
 			loginStatus:loginStatus,
 		}
 	);
});

app.post("/signUp", function(req, res) {
	memberId++;
	member.push({
		account: req.body.acc,
		password: req.body.pas,
		permissions: "0",
		name: req.body.name,
		id: memberId,
	});
 	res.render("index",
 		{
 			loginStatus:loginStatus,
 		}
 	);
});

app.get("/accountManagement", function(req, res) {
 	res.render("accountManagement",
 		{
 			loginStatus:loginStatus,
 			member:member,
 		}
 	);
});

app.get("/changeData", function(req, res) {
 	res.render("changeData",
 		{
 			loginStatus:loginStatus,
 		}
 	);
});

app.post("/changeData", function(req, res) {
	if(req.body.newPas!=""){
		   member[req.body.getmemId].password=req.body.newPas;
	}
	if(req.body.newName!=""){
		   member[req.body.getmemId].name=req.body.newName;
		   loginStatus.name=req.body.newName;
	}
 	res.render("index",
 		{
 			loginStatus:loginStatus,
 		}
 	);
});

app.use(function(request, response) {
  response.status(404).render("404",
 		{
 			loginStatus:loginStatus,
 		}
 	);
});

http.createServer(app).listen(3000, function() {
  console.log("started on port 3000.");
});