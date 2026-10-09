// /Script/Icarus.IcarusAmbientSound
// Derives from: AActor > UObject
// size 0x248, declared in Icarus/Source/Icarus/Audio/IcarusAmbientSound.h

UCLASS(Config=Engine)
class AIcarusAmbientSound : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* Event;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseRadiusOverride;  // 0x0228, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RadiusOverride;  // 0x022C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CurrentRadius;  // 0x0230, size 0x4
private:
    UPROPERTY(Transient, Instanced) UFMODAudioComponent* AudioComponent;  // 0x0238, size 0x8
    UPROPERTY(Instanced) USphereComponent* Collider;  // 0x0240, size 0x8
public:
    UFUNCTION() void HandleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void HandleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
};
