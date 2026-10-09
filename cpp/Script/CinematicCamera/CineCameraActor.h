// /Script/CinematicCamera.CineCameraActor
// Derives from: ACameraActor > AActor > UObject
// size 0x810, declared in Engine/Source/Runtime/CinematicCamera/Public/CineCameraActor.h

UCLASS(Config=Engine)
class ACineCameraActor : public ACameraActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCameraLookatTrackingSettings LookatTrackingSettings;  // 0x07B0, size 0x50
protected:
    uint8 : 1 bResetInterplation;  // 0x0800, not reflected
private:
    UCineCameraComponent * CineCameraComponent;  // 0x0808, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) UCineCameraComponent* GetCineCameraComponent() const;  // parameters 0x8
};
