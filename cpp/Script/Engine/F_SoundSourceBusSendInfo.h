// /Script/Engine.SoundSourceBusSendInfo
// size 0xB8, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundSourceBusSend.h

USTRUCT()
struct FSoundSourceBusSendInfo
{
    UPROPERTY(EditAnywhere) ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) USoundSourceBus* SoundSourceBus;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) UAudioBus* AudioBus;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere) float SendLevel;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinSendLevel;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxSendLevel;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinSendDistance;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxSendDistance;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRuntimeFloatCurve CustomSendLevelCurve;  // 0x0030, size 0x88
};
