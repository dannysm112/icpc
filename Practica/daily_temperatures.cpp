#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;
    vector<int> temperaturas;
    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        temperaturas.push_back(temp);
    }

    vector<int> resultados(temperaturas.size(), 0);

    vector<pair<int,int>> temp_decrecientes;

    for(int i = 0; i < temperaturas.size(); i++){
        while(temp_decrecientes.size() > 0 && temp_decrecientes.back().first < temperaturas[i]){
            resultados[temp_decrecientes.back().second]  = i;
            temp_decrecientes.pop_back();
        }
        temp_decrecientes.push_back(make_pair(temperaturas[i],i));
        
    }

    for(int i = 0; i < resultados.size(); i++){
        if(resultados[i] != 0){
            resultados[i] = resultados[i] - i;
        }
    }

    for(int i = 0; i < resultados.size(); i++){
        cout << resultados[i] << "  ";
    }

    return 0;
}