[![Coverage Status](https://coveralls.io/repos/github/juicissKa/ctest/badge.svg?branch=main)](https://coveralls.io/github/juicissKa/ctest?branch=main)

# План тестирования:

# Аттестационное тестирование
  - Тест А1 (положительный)
    - Начальное состояние: Открытый терминал
    - Действие: Пользователь запускает программу с аргументом 4
    - Ожидаемый результат:
                    
      	Квадратный корень: 2
      	Фибоначи: 3
      	Квадратный корень из фибоначи: 1.732051
                       
  - Тест А2 (негативный)
    - Начальное состояние: Открытый терминал
    - Действие: Пользователь запускает программу без аргумента
    - Ожидаемый результат: 
                        
     	Неверное количество аргументов
                               
  - Тест А3 (положительный)
    - Начальное состояние: Открытый терминал
    - Действие: Пользователь запускает программу с 2 аргументами (4 и 5)
    - Ожидаемый результат: 
                             
      	Квадратный корень: 2
      	Фибоначи: 3
      	Квадратный корень из фибоначи: 1.732051
                              
  - Тест А4 (положительный)
    - Начальное состояние: Открытый терминал
    - Действие: Пользователь запускает программу с аргументом 0
    - Ожидаемый результат: 
                                   
      	Квадратный корень: 0
      	Фибоначи: 0
      	Квадратный корень из фибоначи: 0.000000
                                   
  - Тест А5 (негативный)
    - Начальное состояние: Открытый терминал
    - Действие: Пользователь запускает программу с аргументом -1
    - Ожидаемый результат: 
                                    
      	Аргумент должен быть не менее 0!
                             
  - Тест А6 (негативный)
    - Начальное состояние: Открытый терминал</li>
    - Действие: Пользователь запускает программу с аргументом bob</li>
    - Ожидаемый результат: 
                               
      	Аргумент должен быть натуральным числом!
                             

# Блочное тестирование (класс my_func)
<ol>
  <li>
    <h3>Метод int fibonachi(int num)</h3>
    <ol>
    	<li>
    	  <h4>Тест Б1.1 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: 4</li>
    	    <li>Ожидаемый результат: 3</li>
    	  </ul>
    	</li>
    	<li>
    	  <h4>Тест Б1.2 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: 0</li>
    	    <li>Ожидаемый результат: 0</li>
    	  </ul>
    	</li>
    	<li>
    	  <h4>Тест Б1.3 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: -1</li>
    	    <li>Ожидаемый результат: 0</li>
    	  </ul>
    	</li>
    </ol>
  </li>
    <li>
    <h2>Метод double my_sqrt(double num)</h2>
    <ol>
    	<li>
    	  <h4>Тест Б2.1 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: 4</li>
    	    <li>Ожидаемый результат: 2</li>
    	  </ul>
    	</li>
    	<li>
    	  <h4>Тест Б2.2 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: 0</li>
    	    <li>Ожидаемый результат: 0</li>
    	  </ul>
    	</li>
    	<li>
    	  <h4>Тест Б2.3 (положительный)</h4>
    	  <ul>
    	    <li>Входные данные: -1</li>
    	    <li>
            Ожидаемый результат: 0  
          </li>
    	  </ul>
    	</li>
    </ol>
  </li>
</ol>

# Интеграционное тестирование
<ol>
  <li>
    <h3>Тест И1</h3>
    <ul>
      <li>Методы: int fibonachi(int num), double my_sqrt(double num)</li>
      <li>Описание: Проверяем, можно ли использовать результат работы функции fibonachi в функции my_sqrt</li>
      <li>Входные данные: 4</li>
      <li>Ожидаемый результат: 1.73205</li>
    </ul>	
  </li>
  
</ol>


