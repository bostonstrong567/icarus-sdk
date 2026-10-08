// /Script/Engine.SoundConcurrencySettings
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundConcurrency.h

USTRUCT()
struct FSoundConcurrencySettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxCount;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bLimitToOwner : 1;  // 0x0004, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EMaxConcurrentResolutionRule> ResolutionRule;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RetriggerTime;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) float VolumeScale;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EConcurrencyVolumeScaleMode VolumeScaleMode;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VolumeScaleAttackTime;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bVolumeScaleCanRelease : 1;  // 0x001C, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VolumeScaleReleaseTime;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VoiceStealReleaseTime;  // 0x0024, size 0x4
};
