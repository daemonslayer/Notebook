#include <bits/stdc++.h>

using namespace std;

string ans[]={
"0",
"1",
"1",
"2",
"5",
"19",
"87",
"484",
"3110",
"22869",
"188938",
"1735684",
"17544342",
"193537909",
"2313316683",
"29780777636",
"410783319119",
"6043874244604",
"94478706232996",
"1563722273109142",
"27318062153696564",
"502345167237496931",
"9699126885685292249",
"196181717091339641436",
"4148439175767780880306",
"91536027981772942666539",
"2103913752182429660170436",
"50291940796452137180579477",
"1248422346946742140575686347",
"32138218374730374975015295760",
"856890173485305986362405766432",
"23634964511432302296205787598707",
"673640543800980161440460630373518",
"19819493198409498986706142986990046",
"601344430078657881835586261363372629",
"18798410273101063466255193849071582643",
"604936557287717240331370696558801497881",
"20023242038634001658540433728324785703539",
"681175896774203567367782643637033078263082",
"23799444477163182825680176063620035492542386",
"853406469330411205063800372803603582609444965",
"31386346819623333851559322660338573617589550008",
"1183176800226803327433201291367066117603840263868",
"45690298010796854575598441632190274367426100654981",
"1806414591031705972706060804107604379437226758755993",
"73079396272917958145402727550987588531048108052070054",
"3023654127035453572540256586094846667059896453308407118",
"127883455872208962284206961003243498077530623161078862284",
"5526324787449061481845379925878647731247824312342538290214",
"243894265845408793479503248965387043191317236708629956575188",
"10988069399632073930629752436059028616930225269252607314761088",
"505143675498060699458812328778511939803675817099225874164523672",
"23686911817500092985987877846622893169049557769993372145344092035",
"1132491604355121173919222832905400097284747170794621550561214995138",
"55186640344780130870532689168449854818925797844615233447083613045855",
"2740001098320431297078732907214744419873634517302732813526291559855021",
"138559532262657797314206649766271254472589918833996058947959503151524730",
"7134235033556738939929616350878306593831539986407323160033364155769155687",
"373891225308207469028610296760371200274190935707053699827613771104900377426",
"19938676561471796983883146766119859144119303504704899094141451858455312505566",
"1081611974969973478518929943261312498789891548536178385243982381389061189545611",
"59668619999072020099310097171731099020876704646253577018390794668815790570619666",
"3346564629766057804125832248339820193090772725988844746216669706419284474938412344",
"190771917254556433676039738363378352667073974130846023301967274461412641760453012256",
"11050417799275755126013259892526291235367823080279315873152733218333210499126157072156",
"650253286954581841618991761417781117143816638866100693054163346713876090270544809313079",
"38861538179795904235808656947923711367442228757333061822263529236047313656935926841382772",
"2358241040672626765310077072139565336498165326052831297621365535806004714571192611460872170",
"145273857999422916523321227284591420177866573197124586819191546533872495474610068935144944636",
"9082827443552447743026101002358153132219869861827043632712642298674166486115075340370001687091",
"576228908905526085756488575032702854440758318904039168155881145691235758711676234803723614330685",
"37086698914183069201377012420072018714932877523526789470330583584747262738325202217077750072234932",
"2421039240159894610012882753573915779210132147337631277516617675154368726396059303982447617545438858",
"160272801578839622915652611982795336931561607741363333486333437329791992998131052211572213674414034579",
"10757426561679065349194729506216306522443855032762500671438856121358107291181834681535627317773428642448",
"731924025961160485221004613896618263725267486437032185487660918342930673651450307951090514269681549383077",
"50472329177658199063341117927461646273021795792377857189039323743722347075131749976232402554472632986833107",
"3526900426563201634270793173625812957035058290315310925313541364782914832255754211762523852587882927782152570",
"249695292887934146573546232534761447537294656947056074670653748760292979963109690424752976404651529711809400205",
"17907359569956690481831818748282768665160836296303202651510485572353855208165902500743586841041652212758487767358",
"1300724731865767317926213166672053621141847288197282146879255451999130210702991968053146840849466239583804359181850",
"95675840469829466148686716828066116193112603931232815429300132450191067460736396324009642285018385083944240298880024",
"7125483623600906785534552580487814366106733735932956585463178784006465579869127904212849570122158475432067584465273098",
"537223958219651245503303836602040062141378594853889075773411235764660111663899481909554572349302258010790606410293596569",
"40997819851704716052191606861676126027143687725424975590747005492067600077774192022381129794638081921701023043213610906871",
"3166412296493565904336062460870376975571660077454071403785296258674056044805519978562078641629312803312525623506062086361948",
"247465073570472881426792131456522241606094342963093933234497841571561580705725952546357546822709360230357782823763500303217932",
"19567709357483636379881570562279129625617718230773179278811471895636094028502355714901684641011304472298883615532492191081686425",
"1565261710116281746774229720540564457352473706170955232038082663975964299718966740118420926460283997030454547977744756887845344866",
"126647739169546975756582608263331027184703099978694617335878361023577635833685142849048493285285048029104805027628734090369988722958",
"10363712041376016940609183599027623887621402105686842111135936426230408458249744558485061543895736693359200159473241695990653766294823",
"857602052856751149256419861046656018100888632391905857794933691341446531264333035252227982960604197462966466471164341437544316370006331",
"71755507311950623845751634396598886951218202067335665253333563968654639366946133192856225082298727471000553421092705602941005710185017292",
"6069755067355244796917301361443855295970092897114476757737029357810487171610602554987740274515796556773331410407937405496514791610434688693",
"519017826394654539836654561589132744065585572628322155283442235851499415093493151576652049047867213133956313552398020241640693211947435801378",
"44857838516742231782767615066871135793561089859421180671562017915384290343931849236418159004388676436052036078129245628699103840756232557623638",
"3918232609943363558175440219667196247693912009948574320882849490966904074900636597730179858236501724726830809082966047903536264926319817609581772",
"345851578010560280819832721255142247243594038417735951809204827302113875648299273678942531923008982379118452147764167922058295924936094260895354597",
"30845360733003636051573037919173668299990987465470249048496260745085127552665699791539813741819600341709043567325099116381910385323556757316271473375",
"2779356960945804013340107413094552130757554482245321395754228405408712936533366010131618227148988593610940243971999764216451085838316567069817323218781",
"252992682293557038095444006824848289427391942457909246332681989987693500698177402176442229799551758404913018067273106806290583623018919444625105976736469",
"23261431212160591485377974631454716848278592588043535412477984656531768658556232361174281704879142641652520938687155277465744360919668866013301197906256962",
"2160161950375822835160324949570867943272615390962252020720639148731106869516446842443657145039823786176189705975581114587168588932255883746195842365064966757",
"202588608510937689265343260083175004653943206808714676224028039744770715038486140572824583589882359950107341778392147242702673070346684296512701474381839702271",
"19185839798248049160662038388182594714579720228588222111483397869865677889867982892658066565337260630197623290896442148054057852923225792989669561231966861076145",
"1834605745232560181987826063695721001723933108392468369149471449173213641424313244475675852116993133792691659122679967798513867445366069775008612545895084773692835",
"177117172988287285671266528946515402100906919760724754468624353405747730440826103306869264887141791261870085294986063451386064190172288459913971241810742003891261443",
"17262161948918728038039553092932128595810833078478938669704780957684851611239393009882753831950759649224746670582463726465185178760841377459684349142584141002356732003",
"1698273526586507315336941982895574497895113498539170175061980419461815214950749273137526827665827135369490897420817343937353716546611157905627387661339549851748138416962",
"168639806551702761790676577906720027409463017183919767626814541921775377315083880712624307304640062850322397269403879183625426207693812091531560471858443013846391421036623",
"16901113484781990181565501240638468359821872087385837230106743448981618421210536717750533886584918882193925488628381667562951409187926380219577179624261334076350414821691577",
"1709372653108663515803244578457452796509108148966774667985837777901602382555713765166317152988461060393330395360910648360400433254944287536684577831107133192659078883909975529",
"174457041436184006377670502065642058336185309189626183959695994170786973930492238739910376778614545235323081549766353816961965084160439087791741340186309851860759109464529764752",
"17965335095468293962153334460253082267392784443275056451666921861619316026121782550403133492431452268760895289132999383697445632355152750576796577741903765554164447258214640814953",
"1866562712888215224999827226597155979815726345490039449538286770161225191097955775432647346312472578572374426004819083471967054236916144603337309811085327438682432655437091488409443",
"195648391383633525492117460011275838621485793883144265680491832727553899969126587148713765651663490311028054484106056144868144202293572618062790664965684758334985386609028195007650990",
"20687260829739353536523901970961842835629442272070207415475649165609127312382019167419882269858117288772354449178496105233912013306297658326700449208178627175924719277565310906395440994",
"2206428568744343649545647206509129123574485464008694764845731016572693709755451937740566189292829519207737598185441282562608891055903954356802967994150711102001187342736141157808453450466",
"237358424825448654532216514975814866265557615682229771153862854912123288723569103149526034157818471157491090905292703838153976414118063722801259965059855545191576653565197143201421788951701",
"25752274973733696071696042184170934883921626625037406296437054123431426145787858829096090356908560357012603252775293334505686724646400629161479706964785133873409571974752863765005165740200348",
"2817679097049666206375276865247651649642668734092822920878802900820940534292257422701215586981783633537867505213664984662024399712176446838813650662060785164634257179215237081517692615485261949",
"310886432963293719642876353709380550760061120441189700461401368605590787578129903236547145666889975334848756054917349795766819423236174722138704997032821659383560312100076705376513406519759150547",
"34587260126764991747551775244937003790032852934128949549658522519258463478012275368820037758008405278598154714569868489821858779219369224735782491890392901760256279746028280897011037911708058813646",
"3879761575726813596043528815443077560894510045529080798667487569856944622353018495820497116452209872303187868976663831717651499510604897319625200600956728821168132468933737614228071014891333253971941",
"438772320666586605974083266433081040086853026965442159352982482557365055810688706677025059142241315017319178234350477284727651079829312549180282209648489588697703680516328761656408160468665956752492536",
"50025335462915567661232300547065562731051749479998583153966669710467693636536008885078610782642563765823753408512695709185081657484685412652355457766113899105495557847810630747000478345393437856180133682",
"5749487741220614366415616230801836131862024368568057250800971678432477940529843200490116613923730455279908666821282283541557118878314518510089935883639267875154510879082987779881820697338880736571759095325",
"666083776247703994708459364451278161929895912784393146152941922459711878460886906095092564943847325985777698916606574515081043516789879289796902294443389088590586463469758412777551232058671064333405906326322",
"77778894119069833462433838933564395385146288751190723495734071534187339579970395437249490463375566401991362650684533245370007348156392087548228138705952983118529637897494737179485423730967912579486735965289091",
"9153790113624874781278206277694352475094706665978055747240128182686812718056762860335182409619804761840087817145866934855214028300464568912230734700999045425671515497457308185473640020050308112388794076835298765",
"1085725172824477066963152590758093085910415282873670845542363356403924686258463937880980149128845093947382501580361884663124903438456472345266122280368757574784585358903768476789428196834070006844258969005441093256",
"129775447849666028550342229897831065714283055288086345226997287312892261918022047812538507340711978746097455014650500061263592967221193853181053346736682875663894718491851846677416627662807650086334974425963083693188",
"15631229493890907981846000863744996184199259421043634556049505115517327682143023765790280910398201190715456721957791005959324925839903145139568794847211341568979868187665018289830248874995992672006252299780092476629534",
"1897127016986255730233012458123263422774479877985471704116538831341268838639158951431463463944007349476048341427806884092829168649440351084496173207775898629396576927209620331966016255921918120901037050717013875622774015",
"231994355985239308779450730087649891442265267852646479092707879965579026169219345460420104755445626373666517719907819716281923391300676010920477910009586291425952007495014580012497066073766970191469231652331049181586086738",
"28583250724639711149094643413120721552730673032714304601705174507295216289354425272383779328262943957169328390388935849778753895893900581289044197808795468929698722322020836138882095385353544700855208271502479916172381264578",
"3547928182113991824631741699055992262342631259170502485887615640360679491048970460087937690699036252652606327914746747664073600697095096048814105066697401018818756044002172139710783436431448726296502391386243643163276721979694",
"443652765835450853782875303689401514470700542348962526460645833279658142317642706130772382558415353597761048744917260813041845522722747373638921110715173353525392270936842052613882151292482008667579321789254787340975710823634542",
"55884742927056428346353438828055513488893964435029188980343866676231509232087114884878374752130567484939679360021606092935963168478053891144665118441539140527183291334887568538396753836688928080271497955826027477936945651665180026",
"7090908366927393572153343707918354141922856288906703354051733012838214818844112016787638568024974621710097427897716413128191256255484435896174028741297175795787242666484318916859560856783285577626397567706059551518280632426570196996",
"906246276471461354674545984449424313925625713091735352659547936803011827334743094147000787375497705289879051901742314531450022048192728646291173409135842207975622783647370397682165323865959473698974539204373589453168263082299691046806",
"116655136214561071144742951101039929013515144325484073463247848837724710494137484958925141305866342740417193924847672527647482220157555894832617568061376737031440835139767736326101293701543008585556219532087118473509238775238138948466412",
"15123510236931745366971550841217717004923822019517705385887258447740717385716858141263855945405693178564295635250691036284410603697547023784903514498061104372340671365877697947575301168686917253924359902662216031020006015557687476648422256",
"1974561243544236551572284051553072018371949732304804360114568629121723416630750443128108245483981040055142780512772954168887042196577047653528969846656411527396535579078421231637377681924678056620336000674491846904680950782146552330857023566",
"259618919449568163470974723504130970784980966282863993364031310256862197321984244359769886879509687990611696319272278238162287097898875269258110406946156266881445797878831389399790932468212831942357046246393233588291295356855112425075967360573",
"34373879863458368642320372790802594622555157075587506223080277714882502796272086670730843894005802460126852894511117553051467480977087539038264368853326611477762499650371743935934975078769637091792807003614966197768171117852229881492637823811218",
"4582751562825520832564902581973937640624806158071749333199418068178162570097979151596616494267408404929821973378307569142424477797511040070531465178468582024779246552308125349786624853243740891762708288764182874163204056078762396643870670422532572",
"615189564059212973957983257139984546785698461491652974999532970247445638931702994614216527551257687290511892522706969138361022824566992854014141697208626864581464644795249984434485244834656988320983530411481812976500064025159692175162234407822671162",
"83148824958932019318173681112159464988007705899586221493333042551618916926630289805524296084180175706719874127376858785439304468656334780242577844241287586859070046818618733710477870553247371972447428800410235945342212938007827207225910390418364560011",
"11314820945272319232160464640932598179180679086838867661392982072034067137561593677819172352635543310184203911151112445740678506458076889609526929224211237489712416245784397870360566090786411812905920901972720515192894684081137088244992522046777215841198",
"1550114719448093511039457149552523244093037581812303621071410371780985793220853584470271509668559425529199375331181493884332203096434415860193273247234189220174596472086357383533147256504900817213524021788165134526799308317570418167004213255077395412301538",
"213788833271556795238335311113150418938564993358033969242631985801574885736461386556676366606840331865367857897275399879053902268611937082316170643098118843536119217501243983701889609063751186898836582462155521059309258455165199319118865320982733008086469830",
"29681914787644213702947441485506252582642367324153410345042369427196589243045122871368684915703519520518770362987219913337261087492260183568479063719415245536969650953449105667129927699088301418911898898093255881241881250888324090471964197599561643577146718267",
"4148255357429763380079534654683249704873029729484266400540961071865061781237200016535730496044028785911803566792551361382977668052986293164110598160856554188364455204128719379322348766902226610687651030623963734151642841160896380466154476600676397636780965784049",
"583561894482663115884257489113939628647765055991684167721413278179678109955755573407677358888900897441256446817980828099835356130254679164318654308999798059036389904769806753768687239000478809026992745073974819000988431155226595273331318788865553580842468456284155",
"82629987894792386156404981828495316841633294538395743632058400269866455341012918755434181022191244028288045817697288692792600875763020635698537551136112130666783715218886650837513042131197186664744094835926113854402037773072618615141795208048773471068594285880239779",
"11776045109642075934106312584973771923471762778133639326905091322388827227134576888649567630387421781018372975458196759510224340563032948386742252612236930290482945192804755316157728007384309526127149483296611107532589508809212116441136453549467703405544558623262374300",
"1689095335136093690790980734493464701441534617983203875779639124245401950170112321338907422757627120761327165131017304333964391895818519219567478631897706910827955135186426925604803317898714053726324724609481353832141832392438350396924677749823422760485008061169044375742",
"243828208845856684030914376404952832243177515601852175886558807136007294272080012640277644869760375972485548138367747598674244817260945719961567230484136198913281446018279406186631090793335085513786752707018004508855463280974932407803823743361912643470121687825134606786401",
"35421846630523791715294306072693936790159244805651161895950001297346829749985902620038450754682275073397038428254049077894428521350882587852683526768596134425456441904496345276700402749184704149565063775341005174660335038889624976923557137544710493725145064461609354170732978",
"5178434827305506751327433489745228655222341682297130433219126659776148216549275171584909353856441299648147831241203269254226020811464274284023676489626927239290872557617473903457911366628996760257663926734373513184775695340509121549350451288509169016065502111441504297581381650",
};

int main(){
	freopen("hierarchy.in","r",stdin);
	freopen("hierarchy.out","w",stdout);
	int n;
	scanf("%d", &n);
	cout << ans[n] << endl;
}
