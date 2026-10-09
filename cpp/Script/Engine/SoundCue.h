// /Script/Engine.SoundCue
// Derives from: USoundBase > UObject
// size 0x548, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundCue.h

UCLASS(EditInlineNew)
class USoundCue : public USoundBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) uint8 bPrimeOnLoad : 1;  // 0x0170, mask 0x01
    UPROPERTY() USoundNode* FirstNode;  // 0x0178, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float VolumeMultiplier;  // 0x0180, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float PitchMultiplier;  // 0x0184, size 0x4
    UPROPERTY(EditAnywhere) FSoundAttenuationSettings AttenuationOverrides;  // 0x0188, size 0x3A0
    UPROPERTY(EditAnywhere) uint8 bOverrideAttenuation : 1;  // 0x0530, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bExcludeFromRandomNodeBranchCulling : 1;  // 0x0530, mask 0x02
protected:
    UPROPERTY(EditAnywhere) float SubtitlePriority;  // 0x0528, size 0x4
private:
    float MaxAudibleDistance;  // 0x052C, not reflected
    UPROPERTY() int32 CookedQualityIndex;  // 0x0534, size 0x4
    uint8 : 1 bHasAttenuationNode;  // 0x0538, not reflected
    uint8 : 1 bHasAttenuationNodeInitialized;  // 0x0538, not reflected
    uint8 : 1 bIsRetainingAudio;  // 0x0538, not reflected
    uint8 : 1 bShouldApplyInteriorVolumes;  // 0x0538, not reflected
    uint8 : 1 bShouldApplyInteriorVolumesCached;  // 0x0538, not reflected
    UPROPERTY() uint8 bHasPlayWhenSilent : 1;  // 0x0538, mask 0x01
    FDelegateHandle OnPostEngineInitHandle;  // 0x0540, not reflected

    // Virtual functions that start here:
    //   GetResourceSizeForFormat
};
