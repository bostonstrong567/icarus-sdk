// /Script/Engine.DistributionVectorParameterBase
// Derives from: UDistributionVectorConstant > UDistributionVector > UDistribution > UObject
// size 0x90, declared in Engine/Source/Runtime/Engine/Classes/Distributions/DistributionVectorParameterBase.h

UCLASS(Abstract, EditInlineNew)
class UDistributionVectorParameterBase : public UDistributionVectorConstant
{
public:
    UPROPERTY(EditAnywhere) FName ParameterName;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere) FVector MinInput;  // 0x0058, size 0xC
    UPROPERTY(EditAnywhere) FVector MaxInput;  // 0x0064, size 0xC
    UPROPERTY(EditAnywhere) FVector MinOutput;  // 0x0070, size 0xC
    UPROPERTY(EditAnywhere) FVector MaxOutput;  // 0x007C, size 0xC
    UPROPERTY(EditAnywhere) TEnumAsByte<DistributionParamMode> ParamModes;  // 0x0088, size 0x1

    // Virtual functions that start here:
    //   GetParamValue
};
