// /Script/FacialAnimation.AudioCurveSourceComponent
// Derives from: UAudioComponent > USceneComponent > UActorComponent > UObject
// size 0x8A0, declared in Engine/Plugins/Editor/FacialAnimation/Source/FacialAnimation/Public/AudioCurveSourceComponent.h

UCLASS(Config=Engine)
class UAudioCurveSourceComponent : public UAudioComponent, public ICurveSourceInterface
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName CurveSourceBindingName;  // 0x0868, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurveSyncOffset;  // 0x0870, size 0x4
private:
    float CachedCurveEvalTime;  // 0x0874, not reflected
    TWeakObjectPtr<UCurveTable,FWeakObjectPtr> CachedCurveTable;  // 0x0878, not reflected
    float CachedSyncPreRoll;  // 0x0880, not reflected
    float CachedStartTime;  // 0x0884, not reflected
    float CachedFadeInDuration;  // 0x0888, not reflected
    float CachedFadeVolumeLevel;  // 0x088C, not reflected
    float Delay;  // 0x0890, not reflected
    float CachedDuration;  // 0x0894, not reflected
    bool bCachedLooping;  // 0x0898, not reflected
    EAudioFaderCurve CachedFadeType;  // 0x0899, not reflected
};
