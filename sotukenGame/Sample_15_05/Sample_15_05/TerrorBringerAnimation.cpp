#include "stdafx.h"
#include "TerrorBringerAnimation.h"

TerrorBringerAnimation::TerrorBringerAnimation()
{

}

TerrorBringerAnimation::~TerrorBringerAnimation()
{

}

bool TerrorBringerAnimation::Start()
{
	//ƒAƒjƒ[ƒVƒ‡ƒ“ƒ[ƒhB
	//‘Ò‹@‚O‚P
	animClip[enIdle01].Load("Assets/animData/DragonTerrorBringer/TeBr_idle01.tka");
	animClip[enIdle01].SetLoopFlag(true);
	//‘Ò‹@‚O‚Q
	animClip[enIdle02].Load("Assets/animData/DragonTerrorBringer/TeBr_idle02.tka");
	animClip[enIdle02].SetLoopFlag(true);
	//•‚—V‘Ò‹@
	animClip[enFlyIdle].Load("Assets/animData/DragonTerrorBringer/TeBr_flyidle.tka");
	animClip[enFlyIdle].SetLoopFlag(true);
	//•à‚«
	animClip[enWalk].Load("Assets/animData/DragonTerrorBringer/TeBr_walk.tka");
	animClip[enWalk].SetLoopFlag(true);
	//‘–‚è
	animClip[enRun].Load("Assets/animData/DragonTerrorBringer/TeBr_run.tka");
	animClip[enRun].SetLoopFlag(true);

	//UŒ‚
	animClip[enBasicAttack].Load("Assets/animData/DragonTerrorBringer/TeBr_basicattack.tka");
	//”òsUŒ‚
	animClip[enFlyAttack].Load("Assets/animData/DragonTerrorBringer/TeBr_flyattack.tka");
	//’ÜUŒ‚
	animClip[enWingClawAttack].Load("Assets/animData/DragonTerrorBringer/TeBr_attackwingclaw.tka");
	//‰Î‰ŠUŒ‚
	animClip[enFlameAttack].Load("Assets/animData/DragonTerrorBringer/TeBr_flameattack.tka");
	//”òs‘Oi
	animClip[enFlyForward].Load("Assets/animData/DragonTerrorBringer/TeBr_flyforward.tka");
	animClip[enFlyForward].SetLoopFlag(true);
	//‘Î‹ó
	animClip[enFlyGlide].Load("Assets/animData/DragonTerrorBringer/TeBr_flyglide.tka");
	animClip[enFlyGlide].SetLoopFlag(true);

	//’…—¤
	animClip[enLand].Load("Assets/animData/DragonTerrorBringer/TeBr_landing.tka");
	//—£—¤
	animClip[enTakeoff].Load("Assets/animData/DragonTerrorBringer/TeBr_takeoff.tka");
	//–hŒä
	animClip[enDefend].Load("Assets/animData/DragonTerrorBringer/TeBr_defend.tka");
	//‡–°
	animClip[enSleep].Load("Assets/animData/DragonTerrorBringer/TeBr_sleep.tka");
	//™ôšK
	animClip[enScream].Load("Assets/animData/DragonTerrorBringer/TeBr_scream.tka");
	//”íƒ_ƒ
	animClip[enGethit].Load("Assets/animData/DragonTerrorBringer/TeBr_gethit.tka");
	//€–S
	animClip[enDie].Load("Assets/animData/DragonTerrorBringer/TeBr_die.tka");
	return true;
}

void TerrorBringerAnimation::Update()
{

}
