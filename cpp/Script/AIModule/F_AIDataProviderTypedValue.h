// /Script/AIModule.AIDataProviderTypedValue
// size 0x30, declared in Engine/Source/Runtime/AIModule/Classes/DataProviders/AIDataProvider.h

USTRUCT()
struct FAIDataProviderTypedValue : public FAIDataProviderValue
{
    UPROPERTY(Deprecated) TSubclassOf<UObject> PropertyType;  // 0x0020, size 0x8

    // Not reflected:
    FFieldClass * PropertyType;  // 0x0028
};
