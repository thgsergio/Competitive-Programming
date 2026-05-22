# Aula 03 - STL (Map | Set | Priority Queue | Deque)
> Por: Thiago Sergio - May 22, 2026 | Friday

- Funções auxiliares:
    - find()  -> procura se uma chave existe e retorna seu iterador
    - count() -> conta as ocorrência de uma chave

## Map (std::map)
- Estrutura baseada em pares (*key*, *value*)
- Inserção, remoção e consulta em O(log m)
- Implementado com **árvore rubro-negra (RB Tree)**
- Outro tipo: unordered_map
    - Implementado usando **tabela Hash**
    - Complexidade O(1) (em tese)
    - Problema: **colisão de Hash**. Problemas em competições por conta do grande número de dados
        - A banca de questões faz os inputs com esse intuito de dar esse problema mesmo
- OBS.: o map, a cada inserção, já se ordena, por conta da implementação de árovre que ele possui
- Sintaxe de algumas coisas:
    - Acesso a uma chave, mesmo que ela nao exista: 
    ```cpp
    map<int, int> m;
    cout << m[chave]; // Existindo ou não, ela vai pegar o valor dessa chave, que no caso, seria 0
    ```
    - Retirar chave do map:
    ```cpp
    m.erase()
    ```
    - Percorrer um map:
    ```cpp
    for(auto [key, value] : freq){

    }
    ```
    ou
    ```cpp
    for(auto x : freq){
        x.first;  // chave
        x.second; // valor
    }
    ```

## Set (std::set e std::multiset)
- Conjunto de elementos únicos (set); múltiplas ocorrências permitidas em multiset
- Inserção, remoção e busca em O(log n)
- Implementado com **árvore rubro-negra (RB Tree)**
- Ordena os valoes automaticamente
- **Atenção:** count() em multiset pode levar até O(n)
- Sintaxe:
    ```cpp
    set<tipo> s;
    ```
    - Inserir elemento:
    ```cpp
    s.insert(item)
    ```
    - Remover elemento?
    ```cpp
    s.erase(item)
    ```
    - Contar ocorrências de um certo valor:
    ```cpp
    s.count() // 0 ou 1, mais fácil de identificar se uma chave existe por aqui do que usando find()
    ```
    - Não tão simples de percorrer um set, pois ele não é indexado. Solução: usar iteradores?
    ```cpp
    for(auto it = s.begin(); it != s.end(); it++){
    
    }
    ``` 
- Integração set x vector
    ```cpp
    vector<int> v;

    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);

    set<int> s = {v.begin(), v.end()} // Conversão pra set {1, 2}
    v = {s.begin(), s.end()} // Conversão pra vector {1, 2}
    
    multiset<int> m = {v.begin(), v.end()} // Conversão para multiset {1,1,2,2}
    v = {m.begin(), m.end()} // Conversão pra vector {1,1,2,2}
    ```
    - OBS.: dá pra brincar com ele no lugar do *sort()*

## Fila de prioridade (std::priority_queue)
- Estrutura que permite acesso o maior (ou menor) elemento com prioridade
- Inserção e remoção do topo em O(log n)
- Implementada com **heap binário** (por padrão)
- Não há suporte direto para verificação de existência
- [PESQUISAR] Heap Mínimo
- Sintaxe:
    - Ordem decrescente **(heap máximo)**
    ```cpp
    priority_queue<tipo> pq;
    pq.push(3);
    pq.push(2);
    pq.push(4);
    pq.push(1);
    // Resultado: [4, 3, 2, 1]
    ```

    - Ordem crescente **(heap mínimo)**
    ```cpp
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(3);
    pq.push(2);
    pq.push(4);
    pq.push(1);
    // Resultado: [1, 2, 3, 4]
    ```

## Deque ("Um vector só que melhor")

- Inserção (ou remoção) no início (ou no fim) com complexidade O(1)
- Sintaxe:
    - Uso
    ```cpp
    deque<tipo> dq;
    q.push_back(1);
    q.push_front(3);
    q.pop_back();
    q.pop_front();
    ```
    - Percorrer:
    ```cpp
    for(int i = 0; i < n; i++){
        cout << dq[i];
    }
    ```
