#pragma once
const enum NightmAnim {
	enIdle01,                   //待機01
	enIdle02,                   //待機02
	enWalk,                    //歩き
	enWalkBack,                //後ろ歩き
	enWalkLeft,                //左歩き
	enWalkRight,               //右歩き
	enRun,                     //走り
	enScream,                  //咆哮
	enBasicAttack,             //攻撃
	enClawAttack,              //爪攻撃
	enHornAttack,              //角攻撃
	enDefend,                  //防御
	enSleep,                   //睡眠
	enGethit,                  //被ダメ
	enDie,                     //死亡
	enNightmAnimClip_num       //アニメーションの数
};
class NightmareAnimation : public IGameObject
{
public:
	/// <summary>
	/// コンストラクタ。
	/// </summary>
	NightmareAnimation();
	/// <summary>
	/// デストラクタ。
	/// </summary>
	~NightmareAnimation();
	/// <summary>
	/// スタート関数。
	/// </summary>
	/// <returns></returns>
	bool Start() override;
	/// <summary>
	/// 更新関数。
	/// </summary>
	void Update() override;
	/// <summary>
	/// アニメーションクリップを返す。
	/// </summary>
	/// <returns></returns>
	AnimationClip* GetAnimationClip()
	{
		return animClip;
	}
private:
	AnimationClip animClip[enNightmAnimClip_num];//アニメーションクリップ。
};



