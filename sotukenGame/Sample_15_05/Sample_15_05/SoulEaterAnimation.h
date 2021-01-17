#pragma once
const enum SoulEaterAnim {
	enIdle,                  //待機01
	enWalk,                    //歩き
	enRun,                     //走り
	enBasicAttack,             //攻撃
    enTailAttack,              //尻尾攻撃
	enFireballShoot,           //火炎攻撃
	enFlyFloat,                //浮遊
	enFlyForward,              //飛行前進
	enFlyGlide,                //対空
	enFlyLand,                 //着陸
	enTakeoff,                 //離陸
	enDefend,                  //防御
	enSleep,                   //睡眠
	enScream,                  //咆哮
	enGethit,                  //被ダメ
	enDie,                     //死亡
	enSoulEAnimClip_num        //アニメーションの数
};
class SoulEaterAnimation : public IGameObject
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	SoulEaterAnimation();
	/// <summary>
	/// コンストラクタ
	/// </summary>
	~SoulEaterAnimation();
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
	AnimationClip animClip[enSoulEAnimClip_num];//アニメーションクリップ。
};

