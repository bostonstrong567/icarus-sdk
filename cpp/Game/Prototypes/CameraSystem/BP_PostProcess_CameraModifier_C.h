// /Game/Prototypes/CameraSystem/BP_PostProcess_CameraModifier.BP_PostProcess_CameraModifier_C
// Derives from: UCameraModifier > UObject
// size 0x48, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_PostProcess_CameraModifier_C : public UCameraModifier
{
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) void BlueprintModifyCamera(float DeltaTime, FVector ViewLocation, FRotator ViewRotation, float FOV, FVector& NewViewLocation, FRotator& NewViewRotation, float& NewFOV);  // parameters 0x3C
};
