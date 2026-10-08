// /Game/BP/CriticalHit/BP_CHCameraModifier.BP_CHCameraModifier_C
// Derives from: UCameraModifier > UObject
// size 0x48, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_CHCameraModifier_C : public UCameraModifier
{
public:

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) void BlueprintModifyCamera(float DeltaTime, FVector ViewLocation, FRotator ViewRotation, float FOV, FVector& NewViewLocation, FRotator& NewViewRotation, float& NewFOV);  // parameters 0x3C
};
