// /Script/SessionMessages.SessionServiceLog
// size 0x38, declared in Engine/Source/Runtime/SessionMessages/Public/SessionServiceMessages.h

USTRUCT()
struct FSessionServiceLog
{
    UPROPERTY(EditAnywhere) FName Category;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FString Data;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere) FGuid InstanceId;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere) double TimeSeconds;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) uint8 Verbosity;  // 0x0030, size 0x1
};
