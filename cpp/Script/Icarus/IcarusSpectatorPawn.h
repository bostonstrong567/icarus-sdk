// /Script/Icarus.IcarusSpectatorPawn
// Derives from: ASpectatorPawn > ADefaultPawn > APawn > AActor > UObject
// size 0x2E0, declared in Icarus/Source/Icarus/Characters/IcarusSpectatorPawn.h

UCLASS(NotPlaceable, Config=Game)
class AIcarusSpectatorPawn : public ASpectatorPawn
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitialMaxSpeed;  // 0x02A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitialAcceleration;  // 0x02AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitialDeceleration;  // 0x02B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSmoothMouseInput;  // 0x02B4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InputSmoothSpeed;  // 0x02B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookUpRate;  // 0x02BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TurnRate;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bFreeLook;  // 0x02C4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator FreelookRotation;  // 0x02C8, size 0xC
private:
    FVector2D DeltaMouseInput;  // 0x02D4, not reflected
public:
    UFUNCTION() void AddPitch(float value);  // parameters 0x4
    UFUNCTION() void AddYaw(float value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSpeedScale(float SpeedScale);  // parameters 0x4
};
