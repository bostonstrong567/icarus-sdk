// /Game/Prototypes/SpaceStationPlayer/SpaceStation_PlayerCameraManager.SpaceStation_PlayerCameraManager_C
// Derives from: APlayerCameraManager > AActor > UObject
// size 0x2860, a blueprint class, blueprint

UCLASS(Transient, NotPlaceable, Config=Engine)
class ASpaceStation_PlayerCameraManager_C : public APlayerCameraManager
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InteractionAlpha;  // 0x2810, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_InteractionSceneBase_C* CurrentInteraction;  // 0x2818, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform OriginalTransform;  // 0x2820, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InteractionBlendSpeed;  // 0x2850, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacterSpace* Player;  // 0x2858, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) bool BlueprintUpdateCamera(AActor* CameraTarget, FVector& NewCameraLocation, FRotator& NewCameraRotation, float& NewCameraFOV);  // parameters 0x25
    UFUNCTION(BlueprintCallable) void InteractionChangedCheck();
};
