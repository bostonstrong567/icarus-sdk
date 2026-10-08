// /Script/Engine.SoundSubmixSendInfo
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundSubmixSend.h

USTRUCT()
struct FSoundSubmixSendInfo
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESendLevelControlMethod SendLevelControlMethod;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESubmixSendStage SendStage;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundSubmixBase* SoundSubmix;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SendLevel;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinSendLevel;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxSendLevel;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinSendDistance;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxSendDistance;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRuntimeFloatCurve CustomSendLevelCurve;  // 0x0028, size 0x88
};
