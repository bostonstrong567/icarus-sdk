// /Script/Icarus.AudioSplineComponent
// Derives from: USplineComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x580, declared in Icarus/Source/Icarus/Audio/AudioSplineComponent.h

UCLASS(Config=Engine)
class UAudioSplineComponent : public USplineComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* Event;  // 0x0548, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UpdateFrequencyInListenerRange;  // 0x0550, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UpdateFrequencyOutsideListenerRange;  // 0x0554, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InterpSpeed;  // 0x0558, size 0x4
    UPROPERTY(Transient, Instanced) UFMODAudioComponent* AudioComponent;  // 0x0560, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    bool bIsInRangeOfListener;  // 0x0568, private
    float EventRadius;  // 0x056C, private
    FTimerHandle TimerHandle;  // 0x0570, private
};
