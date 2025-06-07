    unordered_map<int, int> direita = {};
    unordered_map<int, int> esquerda = {};

    int s=0;
    string l = "";

    while (t--){
        cin >> s >> l;
        if (l == "D"){
            if (direita.find(s) == direita.end()){
                direita[s] = 0;
            }
            direita[s] += 1;
            cout << direita[s];
        }
        else{
            if (esquerda.find(s) == esquerda.end()){
                esquerda[s] = 0;
            }
            esquerda[s] += 1;
            cout << esquerda[s];
        }
    }
    return 0;
}