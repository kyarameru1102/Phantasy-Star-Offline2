#include "stdafx.h"
#include "SoulEaterAnimation.h"

SoulEaterAnimation::SoulEaterAnimation()
{

}

SoulEaterAnimation::~SoulEaterAnimation()
{

}

bool SoulEaterAnimation::Start()
{
	//ƒAƒjƒ[ƒVƒ‡ƒ“ƒ[ƒhB
	//‘Ò‹@
	animClip[enIdle].Load("Assets/animData/DragonSoulEater/SoEa_idle.tka");
	animClip[enIdle].SetLoopFlag(true);
	
	//•à‚«
	animClip[enWalk].Load("Assets/animData/DragonSoulEater/SoEa_walk.tka");
	animClip[enWalk].SetLoopFlag(true);
	
	//‘–‚è
	animClip[enRun].Load("Assets/animData/DragonSoulEater/SoEa_run.tka");
	animClip[enRun].SetLoopFlag(true);

	//•‚—V
	animClip[enFlyFloat].Load("Assets/animData/DragonSoulEater/SoEa_flyfloat.tka");
	animClip[enFlyFloat].SetLoopFlag(true);
	//”òs‘Oi
	animClip[enFlyForward].Load("Assets/animData/DragonSoulEater/SoEa_flyforward.tka");
	animClip[enFlyForward].SetLoopFlag(true);
	//‘Î‹ó
    animClip[enFlyGlide].Load("Assets/animData/DragonSoulEater/SoEa_flyglide.tka");
	animClip[enFlyGlide].SetLoopFlag(true);
	//™ôšK
	animClip[enScream].Load("Assets/animData/DragonSoulEater/SoEa_scream.tka");
	//UŒ‚
	animClip[enBasicAttack].Load("Assets/animData/DragonSoulEater/SoEa_basic_ attack.tka");
	//K”öUŒ‚
	animClip[enTailAttack].Load("Assets/animData/DragonSoulEater/SoEa_tail_attack.tka");
	//‰Î‰ŠUŒ‚
	animClip[enFireballShoot].Load("Assets/animData/DragonSoulEater/SoEa_fireball shoot.tka");
	//’…—¤
	animClip[enFlyLand].Load("Assets/animData/DragonSoulEater/SoEa_flyland.tka");
	//—£—¤
	animClip[enTakeoff].Load("Assets/animData/DragonSoulEater/SoEa_takeoff.tka");
	//–hŒä
	animClip[enDefend].Load("Assets/animData/DragonSoulEater/SoEa_defend.tka");
	//‡–°
	animClip[enDefend].Load("Assets/animData/DragonSoulEater/SoEa_sleep.tka");
	//”íƒ_ƒ
	animClip[enGethit].Load("Assets/animData/DragonSoulEater/SoEa_gethit.tka");
	//€–S
	animClip[enDie].Load("Assets/animData/DragonSoulEater/SoEa_die.tka");
	return true;
}

void SoulEaterAnimation::Update()
{

}