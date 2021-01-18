#pragma once
const enum TerrorBringerAnim {
	enIdle01,                  //待機01
	enIdle02,                  //待機02
	enFlyIdle,                 //浮遊待機
	enWalk,                    //歩き
	enRun,                     //走り
	enBasicAttack,             //攻撃
	enFlyAttack,               //飛行攻撃
	enWingClawAttack,          //爪攻撃
	enFlameAttack,             //火炎攻撃
	enFlyForward,              //飛行前進
	enFlyGlide,                //対空
	enLand,                    //着陸
	enTakeoff,                 //離陸
	enDefend,                  //防御
	enSleep,                   //睡眠
	enScream,                  //咆哮
	enGethit,                  //被ダメ
	enDie,                     //死亡
	enTerrorBringerAnimClip_num      //アニメーションの数
};
class TerrorBringerAnimation : public IGameObject
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	TerrorBringerAnimation();
	/// <summary>
	/// コンストラクタ
	/// </summary>
	~TerrorBringerAnimation();
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
	AnimationClip animClip[enTerrorBringerAnimClip_num];//アニメーションクリップ。
};

