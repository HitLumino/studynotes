CREATE DATABASE gradesystem;

use gradesystem;

CREATE TABLE student
(
  sid   INT (20)  PRIMARY KEY,
  sname VARCHAR(10) NOT NULL,
  gender VARCHAR(10)NOT NULL
 );

CREATE TABLE course
(
  cid     INT (20) PRIMARY KEY,
  cname    VARCHAR(20)
 );
 
CREATE TABLE mark
(
  mid   INT (20)  PRIMARY KEY,
  sid   INT(10) NOT NULL,
  cid   INT(10) NOT NULL,
  score   INT(10) NOT NULL,
  CONSTRAINT mark_fk1 FOREIGN KEY (sid) REFERENCES student(sid),
  CONSTRAINT mark_fk2 FOREIGN KEY (cid) REFERENCES course(cid)
 );

