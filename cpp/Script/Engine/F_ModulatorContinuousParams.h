// /Script/Engine.ModulatorContinuousParams
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeModulatorContinuous.h

USTRUCT()
struct FModulatorContinuousParams
{
    UPROPERTY(EditAnywhere) FName ParameterName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) float Default;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float MinInput;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) float MaxInput;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) float MinOutput;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) float MaxOutput;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<ModulationParamMode> ParamMode;  // 0x001C, size 0x1
};
