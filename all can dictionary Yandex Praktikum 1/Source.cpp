#include <map>
#include <string>
#include <iostream>

using namespace std;

/*?????? ????? ?????? ????? ???-?????? ? ?????????, ? ??????? ????? ???????? ?????? ????? ??????. ???????? ??????? BuildReversedMap, ??????? ?????????????? ???????: ????? ?????????? ??????????, ? ???????? ? ???????.
??????? ?????? ???????? ?? ????????? ???? map<string, string>.
??? ????? ????????????? ??? ???
????? ??????????? ?????? ?????? ??????? BuildeReversedMap. ??? ???? ??????? main ????????? ?? ??????.
???????????
?? ??????? ???????? ? ????????? ??????? BuildReversedMap, ?????? ? ????????? ????.
??????? ?????? ???????? ?????? ?? ????????? ???? map<string, string>.
BuildReversedMap ?? ?????? ???????? ? cout, ????? ????????? ?? ??????? ????????.
?????????????, ??? ??? ???????? ? ???????????? ?? ???? ???????? ?????????. ?????? ? ???? ?????? ????????? ???????? ????? ? ???????? ???????, ?? ??????? ?? ?????? ????????.
???????
????? ? ???????? ???????? ???????:
cat: felis catus,
dog: canis lupus.
????? ? ???????? ????????????? ????????:
canis lupus: dog.
felis catus: cat,
????? ? ???????? ???????? ???????:
cat: meow,
cow: moo,
dog: bark,
owl: hoot.
tiger: roar,
????? ? ???????? ????????????? ????????:
bark: dog,
hoot: owl.
meow: cat,
moo: cow,
roar: tiger,
*/




/* ????????? ??????? ??? ?????????????? ???????
 * ????????? ?????? ?? ??????????? ??????? m
 * ?????????? ??????? */
map<string, string> BuildReversedMap(const map<string, string>& m) {
    /* ????????? ??????? ??? ???????? ???????????? ??????? */
    map<string, string> result;
    /* ???????? ?? ???? ????? [????, ????????] ??????? */
    for (const auto& [key, value] : m) {
        /* ?????????? ?? ????? value ???????? key, ?.?. ????????????? ???? */
        result[value] = key;
    }
    /* ?????????? ??????? */
    return result;
}