#pragma once

void SetWxRoomAnnouncement(wchar_t* chatroomwxid,wchar_t* Announcement);	//����Ⱥ����
void QuitChatRoom(wchar_t* chatroomwxid);	//�˳�Ⱥ��
void AddGroupMember(wchar_t* chatroomwxid, wchar_t* wxid);	//���Ⱥ��Ա
void ShowChatRoomUser(wchar_t* chatroomwxid);	//��ʾȺ��Ա
void GetUserInfoByWxid(wchar_t* userwxid);		//ͨ��΢��ID��ȡ�û���Ϣ
void SetRoomName(wchar_t* roomwxid, wchar_t* roomname);	//�޸�Ⱥ����