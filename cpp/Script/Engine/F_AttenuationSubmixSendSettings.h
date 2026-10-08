// /Script/Engine.AttenuationSubmixSendSettings
// size 0xA8, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundAttenuation.h

USTRUCT()
struct FAttenuationSubmixSendSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundSubmixBase* Submix;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESubmixSendMethod SubmixSendMethod;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SubmixSendLevelMin;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SubmixSendLevelMax;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SubmixSendDistanceMin;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SubmixSendDistanceMax;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ManualSubmixSendLevel;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRuntimeFloatCurve CustomSubmixSendCurve;  // 0x0020, size 0x88
};
