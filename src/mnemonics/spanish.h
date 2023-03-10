// Word list originally created by dabura667 and released under The MIT License (MIT)
//
// The MIT License (MIT)
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
//
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
// LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
// Code surrounding the word list is Copyright (c) 2018 X-CASH Project, Derived from 2014-2018, The Monero Project
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

/*!
 * \file spanish.h
 * 
 * \brief Spanish word list and map.
 */

#ifndef SPANISH_H
#define SPANISH_H

#include <vector>
#include <unordered_map>
#include "language_base.h"
#include <string>

/*!
 * \namespace Language
 * \brief Mnemonic language related namespace.
 */
namespace Language
{
  class Spanish: public Base
  {
  public:
    Spanish(): Base("Espa??ol", "Spanish", {}, 4)
    {
      static constexpr const char * const words[NWORDS] =
      {
        "??baco",
        "abdomen",
        "abeja",
        "abierto",
        "abogado",
        "abono",
        "aborto",
        "abrazo",
        "abrir",
        "abuelo",
        "abuso",
        "acabar",
        "academia",
        "acceso",
        "acci??n",
        "aceite",
        "acelga",
        "acento",
        "aceptar",
        "??cido",
        "aclarar",
        "acn??",
        "acoger",
        "acoso",
        "activo",
        "acto",
        "actriz",
        "actuar",
        "acudir",
        "acuerdo",
        "acusar",
        "adicto",
        "admitir",
        "adoptar",
        "adorno",
        "aduana",
        "adulto",
        "a??reo",
        "afectar",
        "afici??n",
        "afinar",
        "afirmar",
        "??gil",
        "agitar",
        "agon??a",
        "agosto",
        "agotar",
        "agregar",
        "agrio",
        "agua",
        "agudo",
        "??guila",
        "aguja",
        "ahogo",
        "ahorro",
        "aire",
        "aislar",
        "ajedrez",
        "ajeno",
        "ajuste",
        "alacr??n",
        "alambre",
        "alarma",
        "alba",
        "??lbum",
        "alcalde",
        "aldea",
        "alegre",
        "alejar",
        "alerta",
        "aleta",
        "alfiler",
        "alga",
        "algod??n",
        "aliado",
        "aliento",
        "alivio",
        "alma",
        "almeja",
        "alm??bar",
        "altar",
        "alteza",
        "altivo",
        "alto",
        "altura",
        "alumno",
        "alzar",
        "amable",
        "amante",
        "amapola",
        "amargo",
        "amasar",
        "??mbar",
        "??mbito",
        "ameno",
        "amigo",
        "amistad",
        "amor",
        "amparo",
        "amplio",
        "ancho",
        "anciano",
        "ancla",
        "andar",
        "and??n",
        "anemia",
        "??ngulo",
        "anillo",
        "??nimo",
        "an??s",
        "anotar",
        "antena",
        "antiguo",
        "antojo",
        "anual",
        "anular",
        "anuncio",
        "a??adir",
        "a??ejo",
        "a??o",
        "apagar",
        "aparato",
        "apetito",
        "apio",
        "aplicar",
        "apodo",
        "aporte",
        "apoyo",
        "aprender",
        "aprobar",
        "apuesta",
        "apuro",
        "arado",
        "ara??a",
        "arar",
        "??rbitro",
        "??rbol",
        "arbusto",
        "archivo",
        "arco",
        "arder",
        "ardilla",
        "arduo",
        "??rea",
        "??rido",
        "aries",
        "armon??a",
        "arn??s",
        "aroma",
        "arpa",
        "arp??n",
        "arreglo",
        "arroz",
        "arruga",
        "arte",
        "artista",
        "asa",
        "asado",
        "asalto",
        "ascenso",
        "asegurar",
        "aseo",
        "asesor",
        "asiento",
        "asilo",
        "asistir",
        "asno",
        "asombro",
        "??spero",
        "astilla",
        "astro",
        "astuto",
        "asumir",
        "asunto",
        "atajo",
        "ataque",
        "atar",
        "atento",
        "ateo",
        "??tico",
        "atleta",
        "??tomo",
        "atraer",
        "atroz",
        "at??n",
        "audaz",
        "audio",
        "auge",
        "aula",
        "aumento",
        "ausente",
        "autor",
        "aval",
        "avance",
        "avaro",
        "ave",
        "avellana",
        "avena",
        "avestruz",
        "avi??n",
        "aviso",
        "ayer",
        "ayuda",
        "ayuno",
        "azafr??n",
        "azar",
        "azote",
        "az??car",
        "azufre",
        "azul",
        "baba",
        "babor",
        "bache",
        "bah??a",
        "baile",
        "bajar",
        "balanza",
        "balc??n",
        "balde",
        "bamb??",
        "banco",
        "banda",
        "ba??o",
        "barba",
        "barco",
        "barniz",
        "barro",
        "b??scula",
        "bast??n",
        "basura",
        "batalla",
        "bater??a",
        "batir",
        "batuta",
        "ba??l",
        "bazar",
        "beb??",
        "bebida",
        "bello",
        "besar",
        "beso",
        "bestia",
        "bicho",
        "bien",
        "bingo",
        "blanco",
        "bloque",
        "blusa",
        "boa",
        "bobina",
        "bobo",
        "boca",
        "bocina",
        "boda",
        "bodega",
        "boina",
        "bola",
        "bolero",
        "bolsa",
        "bomba",
        "bondad",
        "bonito",
        "bono",
        "bons??i",
        "borde",
        "borrar",
        "bosque",
        "bote",
        "bot??n",
        "b??veda",
        "bozal",
        "bravo",
        "brazo",
        "brecha",
        "breve",
        "brillo",
        "brinco",
        "brisa",
        "broca",
        "broma",
        "bronce",
        "brote",
        "bruja",
        "brusco",
        "bruto",
        "buceo",
        "bucle",
        "bueno",
        "buey",
        "bufanda",
        "buf??n",
        "b??ho",
        "buitre",
        "bulto",
        "burbuja",
        "burla",
        "burro",
        "buscar",
        "butaca",
        "buz??n",
        "caballo",
        "cabeza",
        "cabina",
        "cabra",
        "cacao",
        "cad??ver",
        "cadena",
        "caer",
        "caf??",
        "ca??da",
        "caim??n",
        "caja",
        "caj??n",
        "cal",
        "calamar",
        "calcio",
        "caldo",
        "calidad",
        "calle",
        "calma",
        "calor",
        "calvo",
        "cama",
        "cambio",
        "camello",
        "camino",
        "campo",
        "c??ncer",
        "candil",
        "canela",
        "canguro",
        "canica",
        "canto",
        "ca??a",
        "ca????n",
        "caoba",
        "caos",
        "capaz",
        "capit??n",
        "capote",
        "captar",
        "capucha",
        "cara",
        "carb??n",
        "c??rcel",
        "careta",
        "carga",
        "cari??o",
        "carne",
        "carpeta",
        "carro",
        "carta",
        "casa",
        "casco",
        "casero",
        "caspa",
        "castor",
        "catorce",
        "catre",
        "caudal",
        "causa",
        "cazo",
        "cebolla",
        "ceder",
        "cedro",
        "celda",
        "c??lebre",
        "celoso",
        "c??lula",
        "cemento",
        "ceniza",
        "centro",
        "cerca",
        "cerdo",
        "cereza",
        "cero",
        "cerrar",
        "certeza",
        "c??sped",
        "cetro",
        "chacal",
        "chaleco",
        "champ??",
        "chancla",
        "chapa",
        "charla",
        "chico",
        "chiste",
        "chivo",
        "choque",
        "choza",
        "chuleta",
        "chupar",
        "cicl??n",
        "ciego",
        "cielo",
        "cien",
        "cierto",
        "cifra",
        "cigarro",
        "cima",
        "cinco",
        "cine",
        "cinta",
        "cipr??s",
        "circo",
        "ciruela",
        "cisne",
        "cita",
        "ciudad",
        "clamor",
        "clan",
        "claro",
        "clase",
        "clave",
        "cliente",
        "clima",
        "cl??nica",
        "cobre",
        "cocci??n",
        "cochino",
        "cocina",
        "coco",
        "c??digo",
        "codo",
        "cofre",
        "coger",
        "cohete",
        "coj??n",
        "cojo",
        "cola",
        "colcha",
        "colegio",
        "colgar",
        "colina",
        "collar",
        "colmo",
        "columna",
        "combate",
        "comer",
        "comida",
        "c??modo",
        "compra",
        "conde",
        "conejo",
        "conga",
        "conocer",
        "consejo",
        "contar",
        "copa",
        "copia",
        "coraz??n",
        "corbata",
        "corcho",
        "cord??n",
        "corona",
        "correr",
        "coser",
        "cosmos",
        "costa",
        "cr??neo",
        "cr??ter",
        "crear",
        "crecer",
        "cre??do",
        "crema",
        "cr??a",
        "crimen",
        "cripta",
        "crisis",
        "cromo",
        "cr??nica",
        "croqueta",
        "crudo",
        "cruz",
        "cuadro",
        "cuarto",
        "cuatro",
        "cubo",
        "cubrir",
        "cuchara",
        "cuello",
        "cuento",
        "cuerda",
        "cuesta",
        "cueva",
        "cuidar",
        "culebra",
        "culpa",
        "culto",
        "cumbre",
        "cumplir",
        "cuna",
        "cuneta",
        "cuota",
        "cup??n",
        "c??pula",
        "curar",
        "curioso",
        "curso",
        "curva",
        "cutis",
        "dama",
        "danza",
        "dar",
        "dardo",
        "d??til",
        "deber",
        "d??bil",
        "d??cada",
        "decir",
        "dedo",
        "defensa",
        "definir",
        "dejar",
        "delf??n",
        "delgado",
        "delito",
        "demora",
        "denso",
        "dental",
        "deporte",
        "derecho",
        "derrota",
        "desayuno",
        "deseo",
        "desfile",
        "desnudo",
        "destino",
        "desv??o",
        "detalle",
        "detener",
        "deuda",
        "d??a",
        "diablo",
        "diadema",
        "diamante",
        "diana",
        "diario",
        "dibujo",
        "dictar",
        "diente",
        "dieta",
        "diez",
        "dif??cil",
        "digno",
        "dilema",
        "diluir",
        "dinero",
        "directo",
        "dirigir",
        "disco",
        "dise??o",
        "disfraz",
        "diva",
        "divino",
        "doble",
        "doce",
        "dolor",
        "domingo",
        "don",
        "donar",
        "dorado",
        "dormir",
        "dorso",
        "dos",
        "dosis",
        "drag??n",
        "droga",
        "ducha",
        "duda",
        "duelo",
        "due??o",
        "dulce",
        "d??o",
        "duque",
        "durar",
        "dureza",
        "duro",
        "??bano",
        "ebrio",
        "echar",
        "eco",
        "ecuador",
        "edad",
        "edici??n",
        "edificio",
        "editor",
        "educar",
        "efecto",
        "eficaz",
        "eje",
        "ejemplo",
        "elefante",
        "elegir",
        "elemento",
        "elevar",
        "elipse",
        "??lite",
        "elixir",
        "elogio",
        "eludir",
        "embudo",
        "emitir",
        "emoci??n",
        "empate",
        "empe??o",
        "empleo",
        "empresa",
        "enano",
        "encargo",
        "enchufe",
        "enc??a",
        "enemigo",
        "enero",
        "enfado",
        "enfermo",
        "enga??o",
        "enigma",
        "enlace",
        "enorme",
        "enredo",
        "ensayo",
        "ense??ar",
        "entero",
        "entrar",
        "envase",
        "env??o",
        "??poca",
        "equipo",
        "erizo",
        "escala",
        "escena",
        "escolar",
        "escribir",
        "escudo",
        "esencia",
        "esfera",
        "esfuerzo",
        "espada",
        "espejo",
        "esp??a",
        "esposa",
        "espuma",
        "esqu??",
        "estar",
        "este",
        "estilo",
        "estufa",
        "etapa",
        "eterno",
        "??tica",
        "etnia",
        "evadir",
        "evaluar",
        "evento",
        "evitar",
        "exacto",
        "examen",
        "exceso",
        "excusa",
        "exento",
        "exigir",
        "exilio",
        "existir",
        "??xito",
        "experto",
        "explicar",
        "exponer",
        "extremo",
        "f??brica",
        "f??bula",
        "fachada",
        "f??cil",
        "factor",
        "faena",
        "faja",
        "falda",
        "fallo",
        "falso",
        "faltar",
        "fama",
        "familia",
        "famoso",
        "fara??n",
        "farmacia",
        "farol",
        "farsa",
        "fase",
        "fatiga",
        "fauna",
        "favor",
        "fax",
        "febrero",
        "fecha",
        "feliz",
        "feo",
        "feria",
        "feroz",
        "f??rtil",
        "fervor",
        "fest??n",
        "fiable",
        "fianza",
        "fiar",
        "fibra",
        "ficci??n",
        "ficha",
        "fideo",
        "fiebre",
        "fiel",
        "fiera",
        "fiesta",
        "figura",
        "fijar",
        "fijo",
        "fila",
        "filete",
        "filial",
        "filtro",
        "fin",
        "finca",
        "fingir",
        "finito",
        "firma",
        "flaco",
        "flauta",
        "flecha",
        "flor",
        "flota",
        "fluir",
        "flujo",
        "fl??or",
        "fobia",
        "foca",
        "fogata",
        "fog??n",
        "folio",
        "folleto",
        "fondo",
        "forma",
        "forro",
        "fortuna",
        "forzar",
        "fosa",
        "foto",
        "fracaso",
        "fr??gil",
        "franja",
        "frase",
        "fraude",
        "fre??r",
        "freno",
        "fresa",
        "fr??o",
        "frito",
        "fruta",
        "fuego",
        "fuente",
        "fuerza",
        "fuga",
        "fumar",
        "funci??n",
        "funda",
        "furg??n",
        "furia",
        "fusil",
        "f??tbol",
        "futuro",
        "gacela",
        "gafas",
        "gaita",
        "gajo",
        "gala",
        "galer??a",
        "gallo",
        "gamba",
        "ganar",
        "gancho",
        "ganga",
        "ganso",
        "garaje",
        "garza",
        "gasolina",
        "gastar",
        "gato",
        "gavil??n",
        "gemelo",
        "gemir",
        "gen",
        "g??nero",
        "genio",
        "gente",
        "geranio",
        "gerente",
        "germen",
        "gesto",
        "gigante",
        "gimnasio",
        "girar",
        "giro",
        "glaciar",
        "globo",
        "gloria",
        "gol",
        "golfo",
        "goloso",
        "golpe",
        "goma",
        "gordo",
        "gorila",
        "gorra",
        "gota",
        "goteo",
        "gozar",
        "grada",
        "gr??fico",
        "grano",
        "grasa",
        "gratis",
        "grave",
        "grieta",
        "grillo",
        "gripe",
        "gris",
        "grito",
        "grosor",
        "gr??a",
        "grueso",
        "grumo",
        "grupo",
        "guante",
        "guapo",
        "guardia",
        "guerra",
        "gu??a",
        "gui??o",
        "guion",
        "guiso",
        "guitarra",
        "gusano",
        "gustar",
        "haber",
        "h??bil",
        "hablar",
        "hacer",
        "hacha",
        "hada",
        "hallar",
        "hamaca",
        "harina",
        "haz",
        "haza??a",
        "hebilla",
        "hebra",
        "hecho",
        "helado",
        "helio",
        "hembra",
        "herir",
        "hermano",
        "h??roe",
        "hervir",
        "hielo",
        "hierro",
        "h??gado",
        "higiene",
        "hijo",
        "himno",
        "historia",
        "hocico",
        "hogar",
        "hoguera",
        "hoja",
        "hombre",
        "hongo",
        "honor",
        "honra",
        "hora",
        "hormiga",
        "horno",
        "hostil",
        "hoyo",
        "hueco",
        "huelga",
        "huerta",
        "hueso",
        "huevo",
        "huida",
        "huir",
        "humano",
        "h??medo",
        "humilde",
        "humo",
        "hundir",
        "hurac??n",
        "hurto",
        "icono",
        "ideal",
        "idioma",
        "??dolo",
        "iglesia",
        "igl??",
        "igual",
        "ilegal",
        "ilusi??n",
        "imagen",
        "im??n",
        "imitar",
        "impar",
        "imperio",
        "imponer",
        "impulso",
        "incapaz",
        "??ndice",
        "inerte",
        "infiel",
        "informe",
        "ingenio",
        "inicio",
        "inmenso",
        "inmune",
        "innato",
        "insecto",
        "instante",
        "inter??s",
        "??ntimo",
        "intuir",
        "in??til",
        "invierno",
        "ira",
        "iris",
        "iron??a",
        "isla",
        "islote",
        "jabal??",
        "jab??n",
        "jam??n",
        "jarabe",
        "jard??n",
        "jarra",
        "jaula",
        "jazm??n",
        "jefe",
        "jeringa",
        "jinete",
        "jornada",
        "joroba",
        "joven",
        "joya",
        "juerga",
        "jueves",
        "juez",
        "jugador",
        "jugo",
        "juguete",
        "juicio",
        "junco",
        "jungla",
        "junio",
        "juntar",
        "j??piter",
        "jurar",
        "justo",
        "juvenil",
        "juzgar",
        "kilo",
        "koala",
        "labio",
        "lacio",
        "lacra",
        "lado",
        "ladr??n",
        "lagarto",
        "l??grima",
        "laguna",
        "laico",
        "lamer",
        "l??mina",
        "l??mpara",
        "lana",
        "lancha",
        "langosta",
        "lanza",
        "l??piz",
        "largo",
        "larva",
        "l??stima",
        "lata",
        "l??tex",
        "latir",
        "laurel",
        "lavar",
        "lazo",
        "leal",
        "lecci??n",
        "leche",
        "lector",
        "leer",
        "legi??n",
        "legumbre",
        "lejano",
        "lengua",
        "lento",
        "le??a",
        "le??n",
        "leopardo",
        "lesi??n",
        "letal",
        "letra",
        "leve",
        "leyenda",
        "libertad",
        "libro",
        "licor",
        "l??der",
        "lidiar",
        "lienzo",
        "liga",
        "ligero",
        "lima",
        "l??mite",
        "lim??n",
        "limpio",
        "lince",
        "lindo",
        "l??nea",
        "lingote",
        "lino",
        "linterna",
        "l??quido",
        "liso",
        "lista",
        "litera",
        "litio",
        "litro",
        "llaga",
        "llama",
        "llanto",
        "llave",
        "llegar",
        "llenar",
        "llevar",
        "llorar",
        "llover",
        "lluvia",
        "lobo",
        "loci??n",
        "loco",
        "locura",
        "l??gica",
        "logro",
        "lombriz",
        "lomo",
        "lonja",
        "lote",
        "lucha",
        "lucir",
        "lugar",
        "lujo",
        "luna",
        "lunes",
        "lupa",
        "lustro",
        "luto",
        "luz",
        "maceta",
        "macho",
        "madera",
        "madre",
        "maduro",
        "maestro",
        "mafia",
        "magia",
        "mago",
        "ma??z",
        "maldad",
        "maleta",
        "malla",
        "malo",
        "mam??",
        "mambo",
        "mamut",
        "manco",
        "mando",
        "manejar",
        "manga",
        "maniqu??",
        "manjar",
        "mano",
        "manso",
        "manta",
        "ma??ana",
        "mapa",
        "m??quina",
        "mar",
        "marco",
        "marea",
        "marfil",
        "margen",
        "marido",
        "m??rmol",
        "marr??n",
        "martes",
        "marzo",
        "masa",
        "m??scara",
        "masivo",
        "matar",
        "materia",
        "matiz",
        "matriz",
        "m??ximo",
        "mayor",
        "mazorca",
        "mecha",
        "medalla",
        "medio",
        "m??dula",
        "mejilla",
        "mejor",
        "melena",
        "mel??n",
        "memoria",
        "menor",
        "mensaje",
        "mente",
        "men??",
        "mercado",
        "merengue",
        "m??rito",
        "mes",
        "mes??n",
        "meta",
        "meter",
        "m??todo",
        "metro",
        "mezcla",
        "miedo",
        "miel",
        "miembro",
        "miga",
        "mil",
        "milagro",
        "militar",
        "mill??n",
        "mimo",
        "mina",
        "minero",
        "m??nimo",
        "minuto",
        "miope",
        "mirar",
        "misa",
        "miseria",
        "misil",
        "mismo",
        "mitad",
        "mito",
        "mochila",
        "moci??n",
        "moda",
        "modelo",
        "moho",
        "mojar",
        "molde",
        "moler",
        "molino",
        "momento",
        "momia",
        "monarca",
        "moneda",
        "monja",
        "monto",
        "mo??o",
        "morada",
        "morder",
        "moreno",
        "morir",
        "morro",
        "morsa",
        "mortal",
        "mosca",
        "mostrar",
        "motivo",
        "mover",
        "m??vil",
        "mozo",
        "mucho",
        "mudar",
        "mueble",
        "muela",
        "muerte",
        "muestra",
        "mugre",
        "mujer",
        "mula",
        "muleta",
        "multa",
        "mundo",
        "mu??eca",
        "mural",
        "muro",
        "m??sculo",
        "museo",
        "musgo",
        "m??sica",
        "muslo",
        "n??car",
        "naci??n",
        "nadar",
        "naipe",
        "naranja",
        "nariz",
        "narrar",
        "nasal",
        "natal",
        "nativo",
        "natural",
        "n??usea",
        "naval",
        "nave",
        "navidad",
        "necio",
        "n??ctar",
        "negar",
        "negocio",
        "negro",
        "ne??n",
        "nervio",
        "neto",
        "neutro",
        "nevar",
        "nevera",
        "nicho",
        "nido",
        "niebla",
        "nieto",
        "ni??ez",
        "ni??o",
        "n??tido",
        "nivel",
        "nobleza",
        "noche",
        "n??mina",
        "noria",
        "norma",
        "norte",
        "nota",
        "noticia",
        "novato",
        "novela",
        "novio",
        "nube",
        "nuca",
        "n??cleo",
        "nudillo",
        "nudo",
        "nuera",
        "nueve",
        "nuez",
        "nulo",
        "n??mero",
        "nutria",
        "oasis",
        "obeso",
        "obispo",
        "objeto",
        "obra",
        "obrero",
        "observar",
        "obtener",
        "obvio",
        "oca",
        "ocaso",
        "oc??ano",
        "ochenta",
        "ocho",
        "ocio",
        "ocre",
        "octavo",
        "octubre",
        "oculto",
        "ocupar",
        "ocurrir",
        "odiar",
        "odio",
        "odisea",
        "oeste",
        "ofensa",
        "oferta",
        "oficio",
        "ofrecer",
        "ogro",
        "o??do",
        "o??r",
        "ojo",
        "ola",
        "oleada",
        "olfato",
        "olivo",
        "olla",
        "olmo",
        "olor",
        "olvido",
        "ombligo",
        "onda",
        "onza",
        "opaco",
        "opci??n",
        "??pera",
        "opinar",
        "oponer",
        "optar",
        "??ptica",
        "opuesto",
        "oraci??n",
        "orador",
        "oral",
        "??rbita",
        "orca",
        "orden",
        "oreja",
        "??rgano",
        "org??a",
        "orgullo",
        "oriente",
        "origen",
        "orilla",
        "oro",
        "orquesta",
        "oruga",
        "osad??a",
        "oscuro",
        "osezno",
        "oso",
        "ostra",
        "oto??o",
        "otro",
        "oveja",
        "??vulo",
        "??xido",
        "ox??geno",
        "oyente",
        "ozono",
        "pacto",
        "padre",
        "paella",
        "p??gina",
        "pago",
        "pa??s",
        "p??jaro",
        "palabra",
        "palco",
        "paleta",
        "p??lido",
        "palma",
        "paloma",
        "palpar",
        "pan",
        "panal",
        "p??nico",
        "pantera",
        "pa??uelo",
        "pap??",
        "papel",
        "papilla",
        "paquete",
        "parar",
        "parcela",
        "pared",
        "parir",
        "paro",
        "p??rpado",
        "parque",
        "p??rrafo",
        "parte",
        "pasar",
        "paseo",
        "pasi??n",
        "paso",
        "pasta",
        "pata",
        "patio",
        "patria",
        "pausa",
        "pauta",
        "pavo",
        "payaso",
        "peat??n",
        "pecado",
        "pecera",
        "pecho",
        "pedal",
        "pedir",
        "pegar",
        "peine",
        "pelar",
        "pelda??o",
        "pelea",
        "peligro",
        "pellejo",
        "pelo",
        "peluca",
        "pena",
        "pensar",
        "pe????n",
        "pe??n",
        "peor",
        "pepino",
        "peque??o",
        "pera",
        "percha",
        "perder",
        "pereza",
        "perfil",
        "perico",
        "perla",
        "permiso",
        "perro",
        "persona",
        "pesa",
        "pesca",
        "p??simo",
        "pesta??a",
        "p??talo",
        "petr??leo",
        "pez",
        "pezu??a",
        "picar",
        "pich??n",
        "pie",
        "piedra",
        "pierna",
        "pieza",
        "pijama",
        "pilar",
        "piloto",
        "pimienta",
        "pino",
        "pintor",
        "pinza",
        "pi??a",
        "piojo",
        "pipa",
        "pirata",
        "pisar",
        "piscina",
        "piso",
        "pista",
        "pit??n",
        "pizca",
        "placa",
        "plan",
        "plata",
        "playa",
        "plaza",
        "pleito",
        "pleno",
        "plomo",
        "pluma",
        "plural",
        "pobre",
        "poco",
        "poder",
        "podio",
        "poema",
        "poes??a",
        "poeta",
        "polen",
        "polic??a",
        "pollo",
        "polvo",
        "pomada",
        "pomelo",
        "pomo",
        "pompa",
        "poner",
        "porci??n",
        "portal",
        "posada",
        "poseer",
        "posible",
        "poste",
        "potencia",
        "potro",
        "pozo",
        "prado",
        "precoz",
        "pregunta",
        "premio",
        "prensa",
        "preso",
        "previo",
        "primo",
        "pr??ncipe",
        "prisi??n",
        "privar",
        "proa",
        "probar",
        "proceso",
        "producto",
        "proeza",
        "profesor",
        "programa",
        "prole",
        "promesa",
        "pronto",
        "propio",
        "pr??ximo",
        "prueba",
        "p??blico",
        "puchero",
        "pudor",
        "pueblo",
        "puerta",
        "puesto",
        "pulga",
        "pulir",
        "pulm??n",
        "pulpo",
        "pulso",
        "puma",
        "punto",
        "pu??al",
        "pu??o",
        "pupa",
        "pupila",
        "pur??",
        "quedar",
        "queja",
        "quemar",
        "querer",
        "queso",
        "quieto",
        "qu??mica",
        "quince",
        "quitar",
        "r??bano",
        "rabia",
        "rabo",
        "raci??n",
        "radical",
        "ra??z",
        "rama",
        "rampa",
        "rancho",
        "rango",
        "rapaz",
        "r??pido",
        "rapto",
        "rasgo",
        "raspa",
        "rato",
        "rayo",
        "raza",
        "raz??n",
        "reacci??n",
        "realidad",
        "reba??o",
        "rebote",
        "recaer",
        "receta",
        "rechazo",
        "recoger",
        "recreo",
        "recto",
        "recurso",
        "red",
        "redondo",
        "reducir",
        "reflejo",
        "reforma",
        "refr??n",
        "refugio",
        "regalo",
        "regir",
        "regla",
        "regreso",
        "reh??n",
        "reino",
        "re??r",
        "reja",
        "relato",
        "relevo",
        "relieve",
        "relleno",
        "reloj",
        "remar",
        "remedio",
        "remo",
        "rencor",
        "rendir",
        "renta",
        "reparto",
        "repetir",
        "reposo",
        "reptil",
        "res",
        "rescate",
        "resina",
        "respeto",
        "resto",
        "resumen",
        "retiro",
        "retorno",
        "retrato",
        "reunir",
        "rev??s",
        "revista",
        "rey",
        "rezar",
        "rico",
        "riego",
        "rienda",
        "riesgo",
        "rifa",
        "r??gido",
        "rigor",
        "rinc??n",
        "ri????n",
        "r??o",
        "riqueza",
        "risa",
        "ritmo",
        "rito"
      };
      set_words(words);
      populate_maps(ALLOW_SHORT_WORDS);
    }
  };
}

#endif
