// /Script/Engine.ClientReceiveData
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/LocalMessage.h

USTRUCT()
struct FClientReceiveData
{
public:
    UPROPERTY() APlayerController* LocalPC;  // 0x0000, size 0x8
    UPROPERTY() FName MessageType;  // 0x0008, size 0x8
    UPROPERTY() int32 MessageIndex;  // 0x0010, size 0x4
    UPROPERTY() FString MessageString;  // 0x0018, size 0x10
    UPROPERTY() APlayerState* RelatedPlayerState_1;  // 0x0028, size 0x8
    UPROPERTY() APlayerState* RelatedPlayerState_2;  // 0x0030, size 0x8
    UPROPERTY() UObject* OptionalObject;  // 0x0038, size 0x8
};
