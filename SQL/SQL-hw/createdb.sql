CREATE DATABASE gradesystem;

use gradesystem

CREATE TABLE student(
	sid int NOT NULL AUTO_INCREMENT,
	sname varchar(20) NOT NULL,
	gender varchar(10) NOT NULL,
	PRIMARY KEY(sid)
	);

CREATE TABLE course(
	cid int NOT NULL AUTO_INCREMENT,
	cname varchar(20) NOT NULL,
	PRIMARY KEY(cid)
);

CREATE TABLE mark(
 	mid int NOT NULL AUTO_INCREMENT,
 	sid int NOT NULL,
	cid int NOT NULL,
	score int NOT NULL,
	PRIMARY KEY(mid),
	FOREIGN KEY(sid) REFERENCES student(sid),
	FOREIGN KEY(cid) REFERENCES course(cid)
);

INSERT INTO student VALUES(1,'Tom','male'),(2,'Jack','male'),(3,'Rose','female');

INSERT INTO course VALUES(1,'math'),(2,'physics'),(3,'chemistry');

INSERT INTO mark VALUES(1,1,1,80),(2,2,1,85),(3,3,1,90),(4,1,2,60),(5,2,2,90),(6,3,2,75),(7,1,3,95),(8,2,3,75),(9,3,3,85);

