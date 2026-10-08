// /Script/Engine.DistributionFloatParameterBase
// Derives from: UDistributionFloatConstant > UDistributionFloat > UDistribution > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Distributions/DistributionFloatParameterBase.h

UCLASS(Abstract, EditInlineNew)
class UDistributionFloatParameterBase : public UDistributionFloatConstant
{
public:
    UPROPERTY(EditAnywhere) FName ParameterName;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere) float MinInput;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) float MaxInput;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere) float MinOutput;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere) float MaxOutput;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<DistributionParamMode> ParamMode;  // 0x0058, size 0x1

    // Virtual functions that start here:
    //   GetParamValue
};
