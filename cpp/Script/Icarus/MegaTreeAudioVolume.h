// /Script/Icarus.MegaTreeAudioVolume
// Derives from: ATriggerBox > ATriggerBase > AActor > UObject
// size 0x238, declared in Icarus/Source/Icarus/Audio/Env/MegaTreeAudioVolume.h

UCLASS(Config=Engine)
class AMegaTreeAudioVolume : public ATriggerBox
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FTimerHandle UpdateTimer;  // 0x0228, private
    float BoundsTop;  // 0x0230, private
    float BoundsBottom;  // 0x0234, private

    UFUNCTION() void HandleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void HandleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION() void Update();
};
