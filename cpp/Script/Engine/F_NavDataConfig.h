// /Script/Engine.NavDataConfig
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h

USTRUCT()
struct FNavDataConfig : public FNavAgentProperties
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Name;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor Color;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector DefaultQueryExtent;  // 0x003C, size 0xC
    UPROPERTY(Transient) TSubclassOf<AActor> NavigationDataClass;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AActor> NavDataClass;  // 0x0050, size 0x28
};
