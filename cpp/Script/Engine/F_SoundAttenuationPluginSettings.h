// /Script/Engine.SoundAttenuationPluginSettings
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundAttenuation.h

USTRUCT()
struct FSoundAttenuationPluginSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray;  // 0x0020, size 0x10
};
