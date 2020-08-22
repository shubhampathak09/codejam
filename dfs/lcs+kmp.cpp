// lcs + kmp
#include <bits/stdc++.h>
using namespace std;
const int MAXS = 100 + 2;
const int MAXV = 100 + 2;

bool upmax( int &x, int v ){
    if( x < v ){
        x = v;
        return true;
    }
    return false;
}

int l0, l1, lv;
string s0, s1, v;

struct State{
    int a, b, c;
    State(){}
    State( int _a, int _b, int _c ): a(_a), b(_b), c(_c){}
};

int dp[ MAXS ][ MAXS ][ MAXV ];
State pre[ MAXS ][ MAXS ][ MAXV ];
// ith letter on s0, jth letter on s1, kth letter on virus

void recover( int len, State u ){
    string ans;
    while( u.a + u.b + u.c > 0 ){
        State v = pre[ u.a ][ u.b ][ u.c ];
        if( dp[ v.a ][ v.b ][ v.c ] + 1 == dp[ u.a ][ u.b ][ u.c ] )
            ans += s0[ v.a ];
        u = v;
    }
    reverse( ans.begin(), ans.end() );
    cout << ans << "\n";
}

void solve(){
    memset( dp, -1, sizeof(dp) );
    l0 = s0.size();
    l1 = s1.size();
    lv = v.size();
    dp[ 0 ][ 0 ][ 0 ] = 0;
    for( int i = 0; i < l0; ++i )
        for( int j = 0; j < l1; ++j )
            for( int k = 0; k < lv; ++k ){
                if( dp[ i ][ j ][ k ] < 0 ) continue;
                if( s0[ i ] == s1[ j ] ){
                    if( s0[ i ] == v[ k ] ){
                        if( upmax( dp[ i + 1 ][ j + 1 ][ k + 1 ], dp[ i ][ j ][ k ] + 1 ) )
                            pre[ i + 1 ][ j + 1 ][ k + 1 ] = State( i, j, k );
                    } else{
                        int nk;
                        for( nk = k; nk >= 1; --nk )
                            if( v.substr( 0, nk ) == v.substr( k - nk + 1, nk - 1 ) + s0[ i ] )
                                break;
                        if( upmax( dp[ i + 1 ][ j + 1 ][ nk ], dp[ i ][ j ][ k ] + 1 ) )
                            pre[ i + 1 ][ j + 1 ][ nk ] = State( i, j, k );
                    }
                }
                if( upmax( dp[ i + 1 ][ j ][ k ], dp[ i ][ j ][ k ] ) )
                    pre[ i + 1 ][ j ][ k ] = State( i, j, k );
                if( upmax( dp[ i ][ j + 1 ][ k ], dp[ i ][ j ][ k ] ) )
                    pre[ i ][ j + 1 ][ k ] = State( i, j, k );
                if( upmax( dp[ i + 1 ][ j + 1 ][ k ],  dp[ i ][ j ][ k ] ) )
                    pre[ i + 1 ][ j + 1 ][ k ] = State( i, j, k );
            }
    State u;
    int maxlen = 0;
    for( int i = 0; i <= l0; ++i )
        for( int j = 0; j <= l1; ++j )
            for( int k = 0; k < lv; ++k ){
                if( upmax( maxlen, dp[ i ][ j ][ k ] ) )
                    u = State( i, j, k );
            }
    if( maxlen == 0 ) return (void)puts("0");
    recover( maxlen, u );
}

int main(){
    cin >> s0 >> s1 >> v;
    solve();
    return 0;
}
