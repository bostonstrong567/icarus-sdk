// /Script/AIModule.AIDataProviderValue
// size 0x20, declared in Engine/Source/Runtime/AIModule/Classes/DataProviders/AIDataProvider.h

USTRUCT()
struct FAIDataProviderValue
{
    UPROPERTY(EditAnywhere, Instanced) UAIDataProvider* DataBinding;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere) FName DataField;  // 0x0018, size 0x8

    // Not reflected:
    FProperty * CachedProperty;  // 0x0008
};
