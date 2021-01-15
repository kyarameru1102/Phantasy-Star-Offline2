#pragma once
const enum NightmAnim {
	enIdle,                    //�ҋ@
	enWalk,                    //����
	enRun,                     //����
	enScream,                  //���K
	enAttack,                  //�U��
	enHornattack,              //�p�U��
	enGethit,                  //��_��
	enDie,                     //���S
	enNightmAnimClip_num
};
class NightmareAnimation : public IGameObject
{
public:
	/// <summary>
	/// �R���X�g���N�^�B
	/// </summary>
	NightmareAnimation();
	/// <summary>
	/// �f�X�g���N�^�B
	/// </summary>
	~NightmareAnimation();
	/// <summary>
	/// �X�^�[�g�֐��B
	/// </summary>
	/// <returns></returns>
	bool Start() override;
	/// <summary>
	/// �X�V�֐��B
	/// </summary>
	void Update() override;
	/// <summary>
	/// �A�j���[�V�����N���b�v��Ԃ��B
	/// </summary>
	/// <returns></returns>
	AnimationClip* GetAnimationClip()
	{
		return animClip;
	}
private:
	AnimationClip animClip[enNightmAnimClip_num];//�A�j���[�V�����N���b�v�B
};



