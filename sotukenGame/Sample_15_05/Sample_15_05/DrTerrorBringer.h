#pragma once
#include "Physics/Character/CharacterController.h"
#include "TerrorBringerAnimation.h"
#include "EnBase.h"
#include "Physics/GhostObject.h"

/// <summary>
/// ドラゴンテラーブリンガークラス
/// </summary>
class DrTerrorBringer : public EnBase
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	DrTerrorBringer();
	/// <summary>
	/// デストラクタ
	/// </summary>
	~DrTerrorBringer();

	/// <summary>
	/// スタート関数。
	/// </summary>
	/// <returns></returns>
	bool Start();
	/// <summary>
	/// 更新関数。
	/// </summary>
	/// <returns></returns>
	void Update();
private:
	/// <summary>
	/// エネミーのステート。
	/// </summary>
	enum {
		Idle_state,
		Walk_state,
		Run_state,
		Attack_state,	
		GetDamage_state,
		Die_state
	};

	int					m_status = Idle_state;			//状態。
	int					changeTimer = 0;				//アニメーション変更タイマー。
	float				m_speedY = 0.0f;				//Y方向のスピード。
	int					m_animState = enIdle01;			//アニメーションの状態。
	int					m_appearcolor = 0;				//配色No
	TerrorBringerAnimation* m_TerrorbAnim = nullptr;    //アニメーションのロード。
	std::vector<int>	boarcolor = { 1,2,3,4 };		//配色決定。
	bool				m_isAttack = false;				//攻撃しているか。
	bool				m_ATKoff = false;				//一回の攻撃でダメージを一回だけ入れるためのフラグ。
	int					m_count = 0;					//攻撃が入るまでのカウント。
	GhostObject			m_ghostObj;						//ゴースト。
	int					m_deathCount = 0;				//死んだときのカウント。
};

