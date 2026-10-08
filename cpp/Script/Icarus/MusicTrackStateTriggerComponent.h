// /Script/Icarus.MusicTrackStateTriggerComponent
// Derives from: UBoxComponent > UShapeComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x4A0, declared in Icarus/Source/Icarus/Audio/Music/MusicTrackStateTriggerComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UMusicTrackStateTriggerComponent : public UBoxComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMusicTrackStateGroupsRowHandle TrackStateGroup;  // 0x0478, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StateValue;  // 0x0490, size 0x4

    UFUNCTION() void HandleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
};
