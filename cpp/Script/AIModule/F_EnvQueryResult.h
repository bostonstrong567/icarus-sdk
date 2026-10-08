// /Script/AIModule.EnvQueryResult
// size 0x40, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h

USTRUCT()
struct FEnvQueryResult
{
    UPROPERTY(BlueprintReadOnly) TSubclassOf<UEnvQueryItemType> ItemType;  // 0x0010, size 0x8
    UPROPERTY(BlueprintReadOnly) int32 OptionIndex;  // 0x002C, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 QueryID;  // 0x0030, size 0x4

    // Not reflected:
    TArray<FEnvQueryItem,TSizedDefaultAllocator<32> > Items;  // 0x0000
    TArray<unsigned char,TSizedDefaultAllocator<32> > RawData;  // 0x0018
    EEnvQueryStatus::Type Status;  // 0x0028
    TWeakObjectPtr<UObject,FWeakObjectPtr> Owner;  // 0x0034
};
