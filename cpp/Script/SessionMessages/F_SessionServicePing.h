// /Script/SessionMessages.SessionServicePing
// size 0x10, declared in Engine/Source/Runtime/SessionMessages/Public/SessionServiceMessages.h

USTRUCT()
struct FSessionServicePing
{
public:
    UPROPERTY(EditAnywhere) FString UserName;  // 0x0000, size 0x10
};
