#pragma once
class Barrage : public Component
{
public:
	Barrage();
	VOID Update(VOID);
	VOID setData(Barrage_data* pData);
	VOID setBoundingBox(const BoundBoxVec* vBox);
	VOID setObjectPool_number(UINT uNumber);

	VOID setFire(Character* _Enemy2, Character* Player);

	BoundBoxVec& getBoundingBox(VOID);

protected:
	// �̺�Ʈ
	VOID OnEnemyBullet_mot_end(Character* pExplosion);
	VOID OnEvent(GameBase* pObj, UINT uMsg, WPARAM wParam, LPARAM lParam);

	BOOL		 _bFirstPlay;
	FLOAT		 _fSec_count;
	Barrage_data _Data;
	Barrage* pBarrage;
	Character* _Enemy2;
	Character* Player;

	//
	BOOL		_bVisible;
	UINT		_uPool_number;	// ������ƮPool�� ��ȣ
	D3DXVECTOR3 _vPosition;
	BoundBoxVec	_vBoundBox;
	ComponentList _listComponent;
};





///////////////////////////////////////////////////////////////
// Ŭ����  �̸� : Barrage
// ù����  ��¥ : 2009. 9. 26(��)
// ������������ : 2009. 9. 26(��)
//
// Nick : ���ڰ�
// home : http://www.masque.kr/
// eMail : masque79@gmail.com
//
// �ϴ��� : ���� �Ѿ��� � �Ѵ�.
// ������ ���(������)



