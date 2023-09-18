

# План тестирования:

<h2>Аттестационное тестирование</h2>
<ol>
  <li>
    <h3>Тест А1 (положительный)</h3>
    <ul>
      <li>Начальное состояние: Открытый терминал</li>
      <li>Действие: Пользователь запускает программу с аргументом 4</li>
      <li>Ожидаемый результат: 
      ``
      	Квадратный корень: 2
      	Фибоначи: 3
      	Квадратный корень из фибоначи: 1.732051
      ``
      </li>
    </ul>
  </li>
  <li>
    <h3>Тест А2 (негативный)</h3>
    <ul>
      <li>Начальное состояние: Открытый терминал</li>
      <li>Действие: Пользователь запускает программу без аргумента</li>
      <li>Ожидаемый результат: 
      ``
     	Неверное количество аргументов\n
      ``
      </li>
    </ul>
  </li>
  <li>
      <h3>Тест А3 (положительный)</h3>
    <ul>
      <li>Начальное состояние: Открытый терминал</li>
      <li>Действие: Пользователь запускает программу с 2 аргументами (4 и 5)</li>
      <li>Ожидаемый результат: 
      ``
      	Квадратный корень: 2
      	Фибоначи: 3
      	Квадратный корень из фибоначи: 1.732051
      ``
      </li>
    </ul>
  </li>
    <li>
      <h3>Тест А4 (положительный)</h3>
    <ul>
      <li>Начальное состояние: Открытый терминал</li>
      <li>Действие: Пользователь запускает программу с аргументом 0</li>
      <li>Ожидаемый результат: 
      ``
      	Квадратный корень: 0
      	Фибоначи: 0
      	Квадратный корень из фибоначи: 0.000000
      ``
      </li>
    </ul>
  </li>
    <li>
      <h3>Тест А5 (негативный)</h3>
    <ul>
      <li>Начальное состояние: Открытый терминал</li>
      <li>Действие: Пользователь запускает программу с аргументом -1</li>
      <li>Ожидаемый результат: 
      ``
      	Аргумент должен быть не менее 0!
      ``
      </li>
    </ul>
  </li>
  </li>
    <li>
      <h3>Тест А5 (негативный)</h3>
    <ul>
      <li>Начальное состояние: Открытый терминал</li>
      <li>Действие: Пользователь запускает программу с аргументом bob</li>
      <li>Ожидаемый результат: 
      ``
      	Аргумент должен быть натуральным числом!
      ``
      </li>
    </ul>
  </li>
</ol>

<h2>Блочное тестирование (класс my_func)</h2>
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
    	    <li>Ожидаемый результат: 0</li>
    	  </ul>
    	</li>
    </ol>
  </li>
</ol>

<h2>Интеграционное тестирование</h2>
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


