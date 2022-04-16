-- Query all attributes of every Japanese city in the CITY table. The COUNTRYCODE for Japan is JPN. 

SELECT * FROM CITY
    WHERE COUNTRYCODE = 'JPN'
    ;
    
-- Query the names of all the Japanese cities in the CITY table. The COUNTRYCODE for Japan is JPN. 

SELECT NAME FROM CITY
    WHERE COUNTRYCODE = 'JPN'
    ;
