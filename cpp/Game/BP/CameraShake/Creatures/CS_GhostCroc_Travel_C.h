// /Game/BP/CameraShake/Creatures/CS_GhostCroc_Travel.CS_GhostCroc_Travel_C
// Derives from: UMatineeCameraShake > UCameraShakeBase > UObject
// size 0x1B0, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UCS_GhostCroc_Travel_C : public UMatineeCameraShake
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV);  // parameters 0xBF0
};
