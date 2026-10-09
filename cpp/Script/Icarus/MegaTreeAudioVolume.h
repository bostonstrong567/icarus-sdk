// /Script/Icarus.MegaTreeAudioVolume
// Derives from: ATriggerBox > ATriggerBase > AActor > UObject
// size 0x238, declared in Icarus/Source/Icarus/Audio/Env/MegaTreeAudioVolume.h

UCLASS(Config=Engine)
class AMegaTreeAudioVolume : public ATriggerBox
{
private:
    FTimerHandle UpdateTimer;  // 0x0228, not reflected
    float BoundsTop;  // 0x0230, not reflected
    float BoundsBottom;  // 0x0234, not reflected
public:
    UFUNCTION() void HandleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void HandleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION() void Update();
};
