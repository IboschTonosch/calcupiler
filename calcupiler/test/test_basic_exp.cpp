#include "../include/basic.h"
#include "test_helper.hpp"

using namespace Calcupiler::Basic;

static void TEST_BASIC_EXP_OF_INTEGRAL()
{
	static_assert(isWithinTolerance(CBasic<double>::exp(0), 1), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(1), e), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(2), 7.3890560989306502272304274605750078131803155705518473240871278225), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(3), 20.085536923187667740928529654581717896987907838554150144378934229), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(4), 54.598150033144239078110261202860878402790737038614068725826593958), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(5), 148.41315910257660342111558004055227962348766759387898904675284511), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(6), 403.42879349273512260838718054338827960589989735712920261396718832), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(7), 1096.6331584284585992637202382881214324422191348336131437827392407), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(8), 2980.9579870417282747435920994528886737559679391328357022089635303), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(9), 8103.0839275753840077099966894327599650114760878316134625001590521), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(10), 22026.465794806716516957900645284244366353512618556781074235426355), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(11), 59874.141715197818455326485792257781614261079695740968652771514379), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(22), 3584912846.13159156168115994597842068922269306503727493493197), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(24), 26489122129.8434722941391621528118823408701986192485305765342), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(50), ), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(51), ), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(99), ), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(100), ), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(101), ), "exp function failed");

	constexpr auto val = CBasic<double>::exp(24);
}

static void TEST_BASIC_EXP_OF_NEGATIVE_INTEGRAL()
{
	static_assert(isWithinTolerance(CBasic<double>::exp(-1), 0.3678794411714423215955237701614608674458111310317678345078368016), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(-2), 0.1353352832366126918939994949724844034076315459095758814681588726), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(-3), 0.0497870683678639429793424156500617766316995921884232155676277276), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(-4), 0.0183156388887341802937180212732412422119120675534755947695999274), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(-5), 0.0067379469990854670966360484231484242488495850273550854303055315), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(-6), 0.0024787521766663584230451674308166678915064795855339450508786240), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(-7), 0.0009118819655545162080031360844092826264737245274360538408161334), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(-8), 0.0003354626279025118388213891257808610193109001337203193605445757), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(-9), 0.0001234098040866795494976366907300338260721528322889390525344820), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(-10), 0.0000453999297624848515355915155605506102379180888665649692590713), "exp function failed");
	static_assert(isWithinTolerance(CBasic<double>::exp(-11), 0.0000167017007902456593126355173605808790779380469592871244781247), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(-22), 0.00000000027894680928689248077189130306442932076931729260684832653205), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(-24), 0.000000000037751345442790977516449695475234067791686064825673756179653), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(-25), 0.000000000013887943864964020594661763746086856910399760380205055583547), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(50), ), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(51), ), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(99), ), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(100), ), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(101), ), "exp function failed");

	constexpr auto val = CBasic<double>::exp(-22);
}

static void TEST_BASIC_EXP_OF_FLOATING_POINT()
{
	//static_assert(isWithinTolerance(CBasic<double>::exp(0.1), 1), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(1), e), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(2), 7.3890560989306502272304274605750078131803155705518473240871278225), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(3), 20.085536923187667740928529654581717896987907838554150144378934229), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(4), 54.598150033144239078110261202860878402790737038614068725826593958), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(5), 148.41315910257660342111558004055227962348766759387898904675284511), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(6), 403.42879349273512260838718054338827960589989735712920261396718832), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(7), 1096.6331584284585992637202382881214324422191348336131437827392407), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(8), 2980.9579870417282747435920994528886737559679391328357022089635303), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(9), 8103.0839275753840077099966894327599650114760878316134625001590521), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(10), 22026.465794806716516957900645284244366353512618556781074235426355), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(11), 59874.141715197818455326485792257781614261079695740968652771514379), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(22), 3584912846.13159156168115994597842068922269306503727493493197), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(24), 26489122129.8434722941391621528118823408701986192485305765342), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(50), ), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(51), ), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(99), ), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(100), ), "exp function failed");
	//static_assert(isWithinTolerance(CBasic<double>::exp(101), ), "exp function failed");

	constexpr auto val = CBasic<double>::exp(24);
}