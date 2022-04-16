-- Query a list of CITY and STATE from the STATION table. 

SELECT CITY,STATE FROM  STATION;

-- Query a list of CITY names from STATION for cities that have an even ID number. Print the results in any order, but exclude duplicates from the answer. 

SELECT DISTINCT CITY FROM STATION
    WHERE MOD(ID,2)=0
    ;
    
-- Find the difference between the total number of CITY entries in the table and the number of distinct CITY entries in the table. 

SELECT COUNT(CITY) - COUNT(DISTINCT CITY) FROM STATION;

-- Query the list of CITY names starting with vowels (i.e., a, e, i, o, or u) from STATION. Your result cannot contain duplicates.

SELECT DISTINCT CITY FROM STATION 
    WHERE (CITY LIKE 'a%' 
        OR CITY LIKE 'e%' 
        OR CITY LIKE 'i%' 
        OR CITY LIKE 'o%'
        OR CITY LIKE 'u%'
)

-- Query the list of CITY names ending with vowels (i.e., a, e, i, o, or u) from STATION. Your result cannot contain duplicates.

SELECT DISTINCT CITY FROM STATION 
    WHERE (CITY LIKE '%a' 
        OR CITY LIKE '%e' 
        OR CITY LIKE '%i' 
        OR CITY LIKE '%o'
        OR CITY LIKE '%u'
)

-- Query the list of CITY both starting and ending with vowels (i.e., a, e, i, o, or u) from STATION. Your result cannot contain duplicates.

SELECT DISTINCT CITY FROM STATION 
   WHERE ((CITY LIKE 'a%' 
        OR CITY LIKE 'e%' 
        OR CITY LIKE 'i%' 
        OR CITY LIKE 'o%'
        OR CITY LIKE 'u%')
     AND (CITY LIKE '%a' 
        OR CITY LIKE '%e' 
        OR CITY LIKE '%i' 
        OR CITY LIKE '%o'
        OR CITY LIKE '%u')
  );

