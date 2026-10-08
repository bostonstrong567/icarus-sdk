// /Script/Engine.VoiceSettings
// size 0x18, declared in Engine/Source/Runtime/Engine/Public/Net/VoiceConfig.h

USTRUCT()
struct FVoiceSettings
{
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* ComponentToAttachTo;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundAttenuation* AttenuationSettings;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundEffectSourcePresetChain* SourceEffectChain;  // 0x0010, size 0x8
};
