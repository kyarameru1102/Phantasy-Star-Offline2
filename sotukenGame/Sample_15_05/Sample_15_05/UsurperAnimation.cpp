#include "stdafx.h"
#include "UsurperAnimation.h"

UsurperAnimation::UsurperAnimation()
{

}

UsurperAnimation::~UsurperAnimation()
{

}

bool UsurperAnimation::Start()
{
	//‘Ò‹@‚O‚P
	animClip[enIdle01].Load("Assets/animData/DragonUsurper/Us_idle01.tka");
	animClip[enIdle01].SetLoopFlag(true);
	//‘Ò‹@‚O‚Q
	animClip[enIdle02].Load("Assets/animData/DragonUsurper/Us_idle02.tka");
	animClip[enIdle02].SetLoopFlag(true);

	//•‚—V‘Ò‹@
	animClip[enFlyIdle].Load("Assets/animData/DragonUsurper/Us_flyidle.tka");
	animClip[enFlyIdle].SetLoopFlag(true);
	//•à‚«
	animClip[enWalk].Load("Assets/animData/DragonUsurper/Us_walk.tka");
	animClip[enWalk].SetLoopFlag(true);
	//‘–‚è
	animClip[enRun].Load("Assets/animData/DragonUsurper/Us_run.tka");
	animClip[enRun].SetLoopFlag(true);

	//˜rUŒ‚
	animClip[enHandAttack].Load("Assets/animData/DragonUsurper/Us_attackhand.tka");
	//Šš‚İ‚Â‚«UŒ‚
	animClip[enMouthAttack].Load("Assets/animData/DragonUsurper/Us_attackmouth.tka");
	//‰Î‰ŠUŒ‚
	animClip[enFlameAttack].Load("Assets/animData/DragonUsurper/Us_attackflame.tka");
	//•‚—V‰Î‰ŠUŒ‚
	animClip[enFlyFlame].Load("Assets/animData/DragonUsurper/Us_flyflame.tka");

	//”òs‘Oi
	animClip[enFlyForward].Load("Assets/animData/DragonUsurper/Us_flyforward.tka");
	//‘Î‹ó
	animClip[enFlyGlide].Load("Assets/animData/DragonUsurper/Us_flyglide.tka");
	//’…—¤
	animClip[enLand].Load("Assets/animData/DragonUsurper/Us_land.tka");
	//—£—¤
	animClip[enTakeoff].Load("Assets/animData/DragonUsurper/Us_takeoff.tka");
	//–hŒä
	animClip[enDefend].Load("Assets/animData/DragonUsurper/Us_defend.tka");
	//‡–°
	animClip[enSleep].Load("Assets/animData/DragonUsurper/Us_sleep.tka");
	//™ôšK
	animClip[enScream].Load("Assets/animData/DragonUsurper/Us_scream.tka");
	//”íƒ_ƒ
	animClip[enGethit].Load("Assets/animData/DragonUsurper/Us_gethit.tka");
	//€–S
	animClip[enDie].Load("Assets/animData/DragonUsurper/Us_die.tka");
	return true;
}

void UsurperAnimation::Update()
{

}