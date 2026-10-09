// /Script/EngineMessages.EngineServicePong
// size 0x50, declared in Engine/Source/Runtime/EngineMessages/Public/EngineServiceMessages.h

USTRUCT()
struct FEngineServicePong
{
public:
    UPROPERTY(EditAnywhere) FString CurrentLevel;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) int32 EngineVersion;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) bool HasBegunPlay;  // 0x0014, size 0x1
    UPROPERTY(EditAnywhere) FGuid InstanceId;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere) FString InstanceType;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere) FGuid SessionId;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere) float WorldTimeSeconds;  // 0x0048, size 0x4
};
