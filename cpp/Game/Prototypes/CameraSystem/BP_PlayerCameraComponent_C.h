// /Game/Prototypes/CameraSystem/BP_PlayerCameraComponent.BP_PlayerCameraComponent_C
// Derives from: UActorComponent > UObject
// size 0x17C, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_PlayerCameraComponent_C : public UActorComponent, public IICameraInterface_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationLagSpeed;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* PlayerRef;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator TargetCameraRotation;  // 0x00C0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform SmoothedPivotTarget;  // 0x00D0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector PivotLagSpeed;  // 0x0100, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector PivotLagSpeedCrouched;  // 0x010C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector PivotOffsetStand;  // 0x0118, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector PivotOffsetCrouched;  // 0x0124, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector PivotLocation;  // 0x0130, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector CameraOffset;  // 0x013C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector CameraOffsetCrouched;  // 0x0148, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetCameraLocation;  // 0x0154, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetPivotOffset;  // 0x0160, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PivotOffsetSpeed;  // 0x016C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetCameraOffset;  // 0x0170, size 0xC

    UFUNCTION(BlueprintCallable, BlueprintPure) FVector CalculateAxisIndependentLag(FVector CurrentLocation, FVector TargetLocation, FRotator CameraRotation, FVector LagSpeeds, bool ForceUpdate);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetControllerRotation(FRotator& Rotation);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPlayer(ABP_IcarusPlayerCharacterSurvival_C*& Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsFirstPerson(bool& FirstPerson);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateCamera(FVector InLocation, FRotator InRotation, float InFOV, bool ForceUpdate, FVector& OutLocation, FRotator& OutRotation, float& OutFOV, bool& Return);  // parameters 0x3D
    UFUNCTION(BlueprintCallable, BlueprintPure) bool UseFreeLookRotation();  // parameters 0x1
};
