// /Script/Icarus.AudioContextPlayerComponent
// Derives from: UAudioContextComponent > UActorComponent > UObject
// size 0x170, declared in Icarus/Source/Icarus/Audio/Player/AudioContextPlayerComponent.h

UCLASS(Config=Engine)
class UAudioContextPlayerComponent : public UAudioContextComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ShelterStateLowThreshold;  // 0x0160, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ShelterStateHighThreshold;  // 0x0164, size 0x4
    UPROPERTY(Instanced) UPlayerMovementAudioComponent* PlayerMovementAudioComponent;  // 0x0168, size 0x8

    UFUNCTION() void OnShelterUpdated(float NewShelter);  // parameters 0x4
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerSetNewShelter(EAudioShelterState NewShelterState);  // parameters 0x1
};
