/*
 *  File : head.h
 *  Autor: Jose Clavero y Charlie parra
 *  Fecha: 19 de octubre del 2022 
 *  Problema: PRACTICA 1 TEORIA COMPUTACIONAL
*/

#include <bits/stdc++.h>
 
using namespace std;
 
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define vt vector
#define fi first
#define se second
#define pb push_back
#define popb pop_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define ins insert
#define szi(x) (int)(x).size()
#define szl(x) (lli)(x).size()
 
#define all(v) (v).begin(), (v).end()
#define MOD(n,k) ( ( ((n) % (k)) + (k) ) % (k))
#define gauss(n) (n*(n+1)/2)
 
#define each(x,a) for(auto &x: a)
 
#define forM(i,a,b,t,s) for(t i = t(a); i < t(b); i+=s)
#define forMe(i,a,b,t,s) for(t i = t(a); i <= t(b); i+=s)
 
#define forr(i,a) for(int i = (a)-1; i >= 0; i--)
#define forra(i,a,b) for(int i = (b)-1; i >= a; i--)
#define fori(i,b) forM(i,0,b,int,1)
#define forie(i,b) forMe(i,0,b,int,1)
#define forl(i,b) forM(i,0,b,lli,1)
#define forle(i,b) forMe(i,0,b,lli,1)
 
typedef long long ll;
typedef long long int lli;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<lli, lli> pll;
typedef pair<ld, ld> pdd;
typedef set<string> alfabeto;
typedef vt<int> vi;
typedef vt<vi> vvi;
typedef vt<pii> vpi;
typedef vt<ll> vll;
typedef vt<lli> vli;
typedef complex<ld> cd;
 
const double PI = acos(-1.0);

void menu ();
void menu_rango ();
void menu_rangoLetras ();
void imprimir_alfabeto (alfabeto a);
void eleccion_menu (int *opcion);
void eleccion_menu_individual (int *opcion);
void  eleccion_rangoNumeros (int *inicio, int *fin);
void eleccion_rangoLetras_mayusculas (char *inicio, char *fin);
void eleccion_rangoLetras_minusculas (char *inicio, char *fin);
bool verificar_cadena (string s1, set<string> a,int tam2);
void leer_validar_cadena (string *s1, set<string> a, int tam);
