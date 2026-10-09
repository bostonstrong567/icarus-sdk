// /Script/NavigationSystem.SupportedAreaData
// size 0x20, declared in Engine/Source/Runtime/NavigationSystem/Public/NavigationData.h

USTRUCT()
struct FSupportedAreaData
{
public:
    UPROPERTY() FString AreaClassName;  // 0x0000, size 0x10
    UPROPERTY() int32 AreaID;  // 0x0010, size 0x4
    UPROPERTY(Transient) TSubclassOf<UObject> AreaClass;  // 0x0018, size 0x8
};
