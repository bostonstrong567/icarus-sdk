// /Script/AIModule.AIDataProvider_QueryParams
// Derives from: UAIDataProvider > UObject
// size 0x40, declared in Engine/Source/Runtime/AIModule/Classes/DataProviders/AIDataProvider_QueryParams.h

UCLASS(EditInlineNew)
class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
    UPROPERTY(EditAnywhere) FName ParamName;  // 0x0028, size 0x8
    UPROPERTY() float FloatValue;  // 0x0030, size 0x4
    UPROPERTY() int32 IntValue;  // 0x0034, size 0x4
    UPROPERTY() bool BoolValue;  // 0x0038, size 0x1
};
