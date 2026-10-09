// /Script/AIModule.AIDataProviderFloatValue
// size 0x38, declared in Engine/Source/Runtime/AIModule/Classes/DataProviders/AIDataProvider.h

USTRUCT()
struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue
{
public:
    UPROPERTY(EditAnywhere) float DefaultValue;  // 0x0030, size 0x4
};
