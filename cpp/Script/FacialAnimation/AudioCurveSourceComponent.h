// /Script/FacialAnimation.AudioCurveSourceComponent
// Derives from: UAudioComponent > USceneComponent > UActorComponent > UObject
// size 0x8A0, declared in Engine/Plugins/Editor/FacialAnimation/Source/FacialAnimation/Public/AudioCurveSourceComponent.h

UCLASS(Config=Engine)
class UAudioCurveSourceComponent : public UAudioComponent, public ICurveSourceInterface
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName CurveSourceBindingName;  // 0x0868, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurveSyncOffset;  // 0x0870, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    float CachedCurveEvalTime;  // 0x0874, private
    TWeakObjectPtr<UCurveTable,FWeakObjectPtr> CachedCurveTable;  // 0x0878, private
    float CachedSyncPreRoll;  // 0x0880, private
    float CachedStartTime;  // 0x0884, private
    float CachedFadeInDuration;  // 0x0888, private
    float CachedFadeVolumeLevel;  // 0x088C, private
    float Delay;  // 0x0890, private
    float CachedDuration;  // 0x0894, private
    bool bCachedLooping;  // 0x0898, private
    EAudioFaderCurve CachedFadeType;  // 0x0899, private
};
