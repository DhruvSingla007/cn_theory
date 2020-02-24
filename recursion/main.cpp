#include <bits/stdc++.h>

using namespace std;


//// replace pi with 3.14
//// eg xpix => x3.14x
//int length(char input[]){
//    int len= 0;
//    for(int i = 0;input[i] != '\0';i++){
//        len++;
//    }
//    return len;
//}
//void replace(char input[],int start){
//    if(input[start] == '\0' || input[start+1] == '\0'){
//        return;
//    }
//
//    if(input[start] == 'p' && input[start+1] == 'i'){
//        int len = length(input);
//        input[len + 2] = '\0';
//
//        for(int i = len-1;i>=start+2;i--){
//            input[i + 2] = input[i];
//        }
//
//        input[start] = '3';
//        input[start+1] = '.';
//        input[start+2] = '1';
//        input[start+3] = '4';
//    }
//
//    return replace(input, start+1);
//}
//
//void replacePi(char input[]){
//    replace(input,0);
//}
//
//
//
//int main() {
//    char input[10000];
//    cin.getline(input, 10000);
//    replacePi(input);
//    cout << input << endl;
//    return 0;
//}


// ===================================================================

//// remove x from the string
//// eg xaxb => ab
//int length(char input[]){
//    int len = 0;
//    for(int i = 0 ; input[i] != '\0' ; i++){
//        len++;
//    }
//    return len;
//}
//
//void remove(char input[]){
//
//    if(input[0] == '\0'){
//        return;
//    }
//
//    if(input[0] == 'x'){
//        int len = length(input);
//
//        //cout<<"Length : "<<len<<endl;
//
//        if(len == 1){
//            input[0] = '\0';
//            return;
//        }
//
//        for(int i = 0;i<len-1;i++){
//            input[i] = input[i+1];
//        }
//        input[len-1] = '\0';
//
////        for(int i = 0;i<length(input);i++){
////            cout<<input[i]<<" ";
////        }
////        cout<<endl;
//        remove(input);
//    }
//
//    remove(input+1);
//}
//
//
//void removeX(char input[]){
//    remove(input);
//}
//
//int main() {
//    char input[100];
//    cin.getline(input, 100);
//    removeX(input);
////    cout<<endl;
//    cout << input << endl;
//}

//=====================================================================

//// string to number
//// "123456" => 123456
//
//int length(char input[]){
//    int len = 0;
//    for(int i =0;input[i] != '\0';i++){
//        len++;
//    }
//    return len;
//}
//
//int stringToNumber(char input[], int len){
//    if(len == 0){
//        return 0;
//    }
//
//    int a = input[0] - '0';
//    return a*pow(10,len-1) + stringToNumber(input+1, len-1);
//}
//
//int stringToNumber(char input[]){
//    int len = length(input);
//    return stringToNumber(input, len);
//}
//
//
//int main() {
//    char input[50];
//    cin >> input;
//    cout << stringToNumber(input) << endl;
//}

// ================================================================

//// star b/w pairs
//// eg ll => l*l ; aaa => a*a*a
//
int length(char arr[]) {
    int len = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        len++;
    }
    return len;
}
//
//void pairStar(char arr[]) {
//    if (arr[0] == '\0' || arr[1] == '\0') {
//        return;
//    }
//
//    if (arr[0] == arr[1]) {
//        int len = length(arr);
//        //cout<<"Length : "<<len<<endl;
//        arr[len+1] = '\0';
//        int i = 0;
//        for(i = len ; i>1;i--){
//            arr[i] = arr[i-1];
//        }
//        arr[i] = '*';
//    }
//
//    pairStar(arr+1);
//}
//

// remove x another solution
//string temp(char input[], int a) {
//    string r="";
//    if(a==strlen(input))
//    {
//        return "";
//    }
//
//
//    if(input[a] == 'x')
//    {
//        r = temp(input, a+1);
//    }
//    else
//    {
//        r += input[a] + temp(input, a+1);
//    }
//
//    //temp(input, a+1);
//    return r;
//}
//
//void removeX(char input[]) {
//    string s = temp(input, 0);
////    cout<<"string "<<s<<endl;
//    int i = 0;
//    for(i = 0;i<s.length();i++){
//        input[i] = s[i];
//    }
//    input[i] = '\0';
//}
//
//int main() {
//    char input[100];
//    cin.getline(input, 100);
//    removeX(input);
//    cout << input << endl;
//}







//

#include <cstdio>
#include <set>

typedef long long llint;

const int MAXN = 1000010;
const int MOD = 1000000007;

int N, K, f[MAXN];
llint calc[MAXN], g[MAXN];
int disc[MAXN], t = 1;
int cycle_size;

int find(int start){
    int curr = start;
    while(1){
        if(disc[curr] != 0 && disc[curr] < disc[start]) return 0;
        if(disc[curr] != 0) return t - disc[curr];
        disc[curr] = t++;
        curr = f[curr];
    }
}

int main(){

    scanf('%d%d', &N, &K);
    for(int i = 1; i<= N; ++i) scanf("%d", f+i);

    g[0] = 1;
    g[1] = K;
    g[2] = ((llint)K - 1) * g[1] % MOD;
    g[3] = ((llint)K - 2) * g[2] % MOD;

    for(int i = 4; i<= N; ++i){
        g[i] = ((K - 1) * g[i-2] + (K-2)*g[i-1]) % MOD;
    }

    llint ans = 1;

    for(int i = 4; i<= N; ++i){
        if(disc[i] == 0){
            int x = find(i);
            ans = (llint)ans * g[x] % MOD;
            cycle_size += x;
        }
    }

    for(int i = 0; i<N-cycle_size;i++){
        ans = (llint)ans* (K-1) % MOD;
    }

    cout<<ans;
    return 0;
}
