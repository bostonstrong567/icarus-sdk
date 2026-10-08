// /Script/Icarus.RiverAudioComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x220, declared in Icarus/Source/Icarus/Audio/RiverAudioComponent.h

UCLASS(Config=Engine)
class URiverAudioComponent : public USceneComponent, public IDensityAudioInterface
{
public:
    UPROPERTY(BlueprintReadWrite) RiverAudioState State;  // 0x0200, size 0x1
    UPROPERTY(EditAnywhere) float LavaFlowFeatheringDistance;  // 0x0204, size 0x4
    UPROPERTY(EditAnywhere) FVector2D LavaFlowSpeedRange;  // 0x0208, size 0x8
    UPROPERTY(EditAnywhere) FVector2D LavaBaseToFlowingRange;  // 0x0210, size 0x8

    UFUNCTION(BlueprintCallable) float GetLavaFlowValue() const;  // parameters 0x4
};
